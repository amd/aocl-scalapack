      PROGRAM PSGESVDRIVER
*
*  -- ScaLAPACK testing driver --
*
*     Modifications Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.
*
*     PSGESVDRIVER is the main test program for routine PSGESV,
*     solves a linear system
*     The program must be driven by a short data file. An annotated
*     example of a data file can be obtained by deleting the first 3
*     characters from the following 13 lines:
*     'ScaLAPACK GESV computation input file'
*     'PVM machine'
*     'GESV.out'       output file name
*     6               device out
*     3               number of problems sizes
*     16 18 20        values of N
*     3               number of NB's
*     2 3 5           values of NB
*     7               number of process grids (ordered pairs of P & Q)
*     1 2 1 4 2 3 8   values of P
*     1 2 4 1 3 2 1   values of Q
*     1.0             threshold

*
*
*  Internal Parameters
*  ===================
*
*  TOTMEM   INTEGER, default = 2000000
*           TOTMEM is a machine-specific parameter indicating the
*           maximum amount of available memory in bytes.
*           The user should customize TOTMEM to his platform.  Remember
*           to leave room in memory for the operating system, the BLACS
*           buffer, etc.  For example, on a system with 8 MB of memory
*           per process (e.g., one processor on an Intel iPSC/860), the
*           parameters we use are TOTMEM=6200000 (leaving 1.8 MB for OS,
*           code, BLACS buffer, etc).  However, for PVM, we usually set
*           TOTMEM = 2000000.  Some experimenting with the maximum value
*           of TOTMEM may be required.
*
*  INTGSZ   INTEGER, default = 4 bytes.
*  DBLESZ   INTEGER, default = 8 bytes.
*           INTGSZ and DBLESZ indicate the length in bytes on the
*           given platform for an integer and a double precision real.
*  MEM      DOUBLE PRECISION array, dimension ( TOTMEM / DBLESZ )
*
*           All arrays used by SCALAPACK routines are allocated from
*           this array and referenced by pointers.  The integer IPA,
*           for example, is a pointer to the starting element of MEM for
*           the matrix A.
*
*
      use,intrinsic :: ieee_arithmetic
*     .. Parameters ..
      INTEGER            REALSZ, INTGSZ, MEMSIZ, TOTMEM
      PARAMETER          ( REALSZ = 4, INTGSZ = 4, TOTMEM = 2000000,
     $                     MEMSIZ = TOTMEM / REALSZ )
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DT_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DT_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      REAL               ONE
      PARAMETER          ( ONE = 1.0E+0 )
*     ..
*     .. Local Scalars ..
      CHARACTER*80       OUTFILE
      CHARACTER*6        PASSED
      LOGICAL            CHECK
      INTEGER            IAM, ICTXT, INFO, IPA, IPACPY, IPB,IPPIV, IPX,
     $                   IPW, LIPIV, MYCOL, MYROW, N, NB, NOUT, NPCOL,
     $                   NPROCS, NPROW, NP, NQ, NQRHS, NRHS, WORKSIZ,
     $                   KPASS, KSKIP, KTESTS, KFAIL, NMAT, NGRIDS, NNB
      REAL               ANORM, BNORM, EPS, XNORM, RESID, TMFLOPS
*     ..
*     .. Local Arrays ..
      INTEGER            DESCA( DLEN_ ), DESCB( DLEN_ ), DESCX(DLEN_ ),
     $                   ISEED( 4 ), MVAL(10), NBVAL(10), PVAL(10),
     $                   QVAL(10), NVAL(10), IERR(2)
      REAL               MEM( MEMSIZ ), CTIME(2), WTIME(2)
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_EXIT, BLACS_GET, BLACS_GRIDEXIT,
     $                   BLACS_GRIDINFO, BLACS_GRIDINIT, BLACS_PINFO,
     $                   DESCINIT, IGSUM2D, PXGESVINFO, PSGESV,
     $                   PSMATGEN, PSGEMM, PSLACPY, SLBOOT,
     $                   SLCOMBINE, SLTIMER
*     ..
*     .. External Functions ..
      INTEGER            ICEIL, NUMROC
      REAL               PSLAMCH, PSLANGE
      EXTERNAL           ICEIL, NUMROC, PSLAMCH, PSLANGE
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          DBLE, MAX
*     ..
*     .. Executable Statements ..
*
*
*     Take command-line arguments if requested
      CHARACTER*80 arg
      INTEGER numArgs, count
      LOGICAL :: help_flag = .FALSE.
      LOGICAL :: EX_FLAG = .FALSE., RES_FLAG = .FALSE.
      INTEGER :: INF_PERCENT = 0
      INTEGER :: NAN_PERCENT = 0
      DOUBLE PRECISION :: X
*
*     Get starting information
*
      CALL BLACS_PINFO( IAM, NPROCS )
      ISEED = 100
      CALL PXGESVINFO( OUTFILE, NOUT, NMAT, NB, NGRIDS, NBVAL,
     $                  NVAL, MVAL, PVAL, QVAL,NPROW, NPCOL,
     $                  MEM,IAM, NPROCS )


      CHECK = .TRUE.
      KPASS = 0
      KTESTS = 0
      KFAIL = 0
      KSKIP = 0

*
*     Get the number of command-line arguments
      numArgs = command_argument_count()
*
*     Process command-line arguments
      do count = 1, numArgs, 2
         call get_command_argument(count, arg)
         arg = trim(arg)
         select case (arg)
            case ("-h", "--help")
                  help_flag = .true.
                  exit
            case ("-inf")
                  call get_command_argument(count + 1, arg)
                  read(arg, *) INF_PERCENT
                  IF (INF_PERCENT .GT. 0) THEN
                     EX_FLAG = .TRUE.
                  END IF
            case ("-nan")
                  call get_command_argument(count + 1, arg)
                  read(arg, *) NAN_PERCENT
                  IF (NAN_PERCENT .GT. 0) THEN
                     EX_FLAG = .TRUE.
                  END IF
            case default
                  print *, "Invalid option: ", arg
                  help_flag = .true.
                  exit
            end select
      end do
*
*     Loop over different process grids
*
      DO 30 I = 1, NGRIDS
*
         NPROW = PVAL( I )
         NPCOL = QVAL( I )
*
*        Make sure grid information is correct
*
         IERR( 1 ) = 0
         IF( NPROW.LT.1 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9999 ) 'nprow'
            IERR( 1 ) = 1
         ELSE IF( NPCOL.LT.1 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9999 ) 'npcol'
            IERR( 1 ) = 1
         ELSE IF( NPROW*NPCOL.GT.NPROCS ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9998 ) NPROW*NPCOL, NPROCS
            IERR( 1 ) = 1
         END IF
*
         IF( IERR( 1 ).GT.0 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9997 ) 'grid'
            KSKIP = KSKIP + 1
            GO TO 30
         END IF
*
*       Define process grid
*
        CALL BLACS_GET( -1, 0, ICTXT )
        CALL BLACS_GRIDINIT( ICTXT, 'Row-major', NPROW, NPCOL )
        CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*
*        Go to bottom of loop if this case doesn't use my process
*
        IF( ( MYROW.GE.NPROW ).OR.( MYCOL.GE.NPCOL ) )
     $      GO TO 30
*
        DO 20 J = 1, NMAT
*
            N = NVAL( J )
            NRHS = 4
*
*           Make sure matrix information is correct
*
            IERR( 1 ) = 0
#ifdef ENABLE_DRIVER_CHECK
            IF( NRHS.LT.0 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'M'
               IERR( 1 ) = 1
            ELSE IF( N.LT.0 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'N'
               IERR( 1 ) = 1
            END IF
#endif
*
*           Make sure no one had error
*
            CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
            IF( IERR( 1 ).GT.0 ) THEN
               IF( IAM.EQ.0 )
     $          WRITE( NOUT, FMT = 9997 ) 'matrix'
               KSKIP = KSKIP + 1
               GO TO 20
            END IF
*
            DO 10 K = 1, NB
*
                  NB = NBVAL( K )
*
*              Make sure nb is legal
*
                  IERR( 1 ) = 0
                  IF( NB.LT.1 ) THEN
                        IERR( 1 ) = 1
                        IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9999 ) 'NB'
                  END IF
*
*              Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR,
     $                           1, -1, 0 )

                  IF( IERR( 1 ).GT.0 ) THEN
                        IF( IAM.EQ.0 )
     $                   WRITE( NOUT, FMT = 9997 ) 'NB'
                        KSKIP = KSKIP + 1
                        GO TO 10
                  END IF
*
*
*          Go to bottom of process grid loop if this case doesn't use my
*          process
*
                  IF( MYROW.GE.NPROW .OR. MYCOL.GE.NPCOL )
     $             GO TO 10
*
                  NP    = NUMROC( N, NB, MYROW, 0, NPROW )
                  NQ    = NUMROC( N, NB, MYCOL, 0, NPCOL )
                  NQRHS = NUMROC( NRHS, NB, MYCOL, 0, NPCOL )
*
*     Initialize the array descriptor for the matrix A and B
*
                  CALL DESCINIT( DESCA, N, N, NB, NB, 0, 0, ICTXT,
     $                MAX( 1, NP ), INFO )
                  CALL DESCINIT( DESCB, N, NRHS, NB, NB, 0, 0, ICTXT,
     $                MAX( 1, NP ), INFO )
                  CALL DESCINIT( DESCX, N, NRHS, NB, NB, 0, 0, ICTXT,
     $                MAX( 1, NP ), INFO )
*
*     Assign pointers into MEM for SCALAPACK arrays, A is
*     allocated starting at position MEM( 1 )
*
                  IPA = 1
                  IPACPY = IPA + DESCA( LLD_ )*NQ
                  IPB = IPACPY + DESCA( LLD_ )*NQ
                  IPX = IPB + DESCB( LLD_ )*NQRHS
                  IPPIV = IPX + DESCB( LLD_ )*NQRHS
                  LIPIV = ICEIL( INTGSZ*( NP+NB ), REALSZ )
                  IPW = IPPIV + MAX( NP, LIPIV )
*
                  WORKSIZ = NB
*
*     Check for adequate memory for problem size
*
                  INFO = 0
                  IF( IPW+WORKSIZ.GT.MEMSIZ ) THEN
                  IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9998 ) 'test',
     $                          ( IPW+WORKSIZ )*REALSZ
                  INFO = 1
                  END IF
*
*     Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, INFO, 1,
     $                             -1, 0 )
                  IF( INFO.GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $                 WRITE( NOUT, FMT = 9999 ) 'MEMORY'
                  GO TO 10
                  END IF
*
*     This ensures that everyone starts out with the same seed.
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 ) THEN
                        CALL IGEBS2D( DESCA( CTXT_ ), 'a', ' ', 4,
     $                         1, ISEED, 4 )
                  ELSE
                        CALL IGEBR2D( DESCA( CTXT_ ), 'a', ' ', 4,
     $                         1, ISEED, 4, 0, 0 )
                  END IF
*
*     Generate matrices A and B
*
                  IF(N .GT. 0) THEN
                   CALL PSMATGEN( DESCA( CTXT_ ), 'N', 'N', N, N,
     $             DESCA( MB_ ),
     $             DESCA( NB_ ), MEM(IPA), DESCA( LLD_ ),
     $             DESCA( RSRC_ ), DESCA( CSRC_ ), ISEED( 1 ), 0,
     $             NP, 0, NQ, MYROW, MYCOL, NPROW, NPCOL )
*
                   CALL PSMATGEN( DESCB( CTXT_ ), 'N', 'N', N, N,
     $             DESCB( MB_ ),
     $             DESCB( NB_ ), MEM(IPB), DESCB( LLD_ ),
     $             DESCB( RSRC_ ), DESCB( CSRC_ ), ISEED( 2 ), 0, NP,
     $             0, NQ, MYROW, MYCOL, NPROW, NPCOL)


*
*     Make a copy of A and the rhs for checking purposes
*
                   CALL PCLACPY( 'All', N, N, MEM( IPA ), 1, 1, DESCA,
     $              MEM( IPACPY ), 1, 1, DESCA )
                   CALL PCLACPY( 'All', N, NRHS, MEM( IPB ), 1, 1,
     $              DESCB, MEM( IPX ), 1, 1, DESCX )
                  END IF
*
**********************************************************************
*     Call ScaLAPACK PSGESV routine
**********************************************************************
*
*
                  CALL SLBOOT
                  CALL SLTIMER( 1 )
                  CALL SLTIMER( 6 )
*
                  CALL PSGESV( N, NRHS, MEM( IPA ), 1, 1, DESCA,
     $             MEM( IPPIV ), MEM( IPB ), 1, 1, DESCB, INFO )
*
                  CALL SLTIMER( 6 )
                  CALL SLTIMER( 1 )
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 .AND.
     $                        INFO .NE. 0) THEN
                   WRITE( NOUT, FMT = * )
                   WRITE( NOUT, FMT = * )
     $                     'INFO code returned by PSGESV = ', INFO
                   WRITE( NOUT, FMT = * )
                   END IF
*
*  Negative test case validation with INFO = -1
*  Passing this case for N < 0
*
                  IF(INFO .EQ. -1 .AND. N .LT. 0) THEN
                    PRINT *, 'PASSING NEGATIVE CASE'
                    KPASS = KPASS + 1
                    PASSED = 'PASSED'
                    WRITE( NOUT, FMT = 9996 ) 'WALL', N, NB, NRHS,
     $              NPROW, NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $              RESID, PASSED
                    GO TO 10
                  END IF
*
*  Early return validation with INFO = 0 and N = 0
*
                  IF(INFO .EQ. 0 .AND. N .EQ. 0 ) THEN
                    PRINT *, 'EARLY RETURN CASE - PASSING'
                    KPASS = KPASS + 1
                    PASSED = 'PASSED'
                    WRITE( NOUT, FMT = 9996 ) 'WALL', N, NB, NRHS,
     $              NPROW, NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $              RESID, PASSED
                    GO TO 10
                  END IF
*
*  Extreme values validation block
*
                  IF(EX_FLAG) THEN
*    Check presence of INF/NAN in output
*    Pass the case if present
                   DO IK = 0, N-1
                     DO JK = 1, N
                       X = MEM(IPA + IK*N + JK)
                       IF (isnan(X)) THEN
*    NAN DETECTED
                         RES_FLAG = .TRUE.
                         EXIT
                       ELSE IF (.NOT.ieee_is_finite(X)) THEN
*    INFINITY DETECTED
                         RES_FLAG = .TRUE.
                         EXIT
                       END IF
                     END DO
                     IF(RES_FLAG) THEN
                       EXIT
                     END IF
                   END DO
*    if NAN/INF is found, validate the test case
                   IF (.NOT.(RES_FLAG)) THEN
                     KFAIL = KFAIL + 1
                     PASSED = 'FAILED'
                     WRITE( NOUT, FMT = 9996 ) 'WALL', N, NB, NRHS,
     $              NPROW, NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $              RESID, PASSED
                   ELSE
                     KPASS = KPASS + 1
                     PASSED = 'PASSED'
                     WRITE( NOUT, FMT = 9996 ) 'WALL', N, NB, NRHS,
     $              NPROW, NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $              RESID, PASSED
                     RES_FLAG = .FALSE.
                   END IF
                   GO TO 10
                  END IF
*
*     Compute residual ||A * X  - B|| / ( ||X|| * ||A|| * eps * N )
*
                  EPS = PSLAMCH( ICTXT, 'Epsilon' )
                  ANORM = PSLANGE( 'I', N, N, MEM( IPA ), 1, 1,
     $                              DESCA, MEM( IPW ) )
                  BNORM = PSLANGE( 'I', N, NRHS, MEM( IPB ), 1, 1,
     $                  DESCB, MEM( IPW ) )
                  CALL PSGEMM( 'No transpose', 'No transpose', N,
     $             NRHS, N, ONE,
     $             MEM( IPACPY ), 1, 1, DESCA, MEM( IPB ), 1, 1,
     $             DESCB, -ONE, MEM( IPX ), 1, 1, DESCX )
                  XNORM = PSLANGE( 'I', N, NRHS, MEM( IPX ), 1, 1,
     $                 DESCX, MEM( IPW ) )
                  RESID = XNORM / ( ANORM * BNORM * EPS * DBLE( N ) )
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 ) THEN
                   IF( RESID.LT.10.0D+0 ) THEN
                    PASSED = 'PASSED'
                    KPASS = KPASS + 1
                   ELSE
                    WRITE( NOUT, FMT = * ) 'The answer is suspicious.'
                    WRITE( NOUT, FMT = * )
                    WRITE( NOUT, FMT = * )
     $             '||A * X  - B|| / ( ||X|| * ||A|| * eps * N ) = ',
     $               RESID
                    WRITE( NOUT, FMT = * )
                    PASSED = 'FAILED'
                    KFAIL = KFAIL + 1
                    END IF
                  END IF
*
*
*           Gather maximum of all CPU and WALL clock
*           timings
*
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'W', 1, 1,
     $                                     WTIME )
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'C', 1, 1,
     $                                     CTIME )
*    Calculate ops
*
                  MULTS = NRHS*( ( ( 29.D0 / 6.D0 )+2.D0*N-NRHS
     $                                   / 2.D0 )+M*( N-NRHS / 3.D0 ) )
     $                                   + N*NRHS*( 2.D0*M+2.D0-N )
*
                  ADDS = NRHS*( ( 5.D0 / 6.D0 )+M / 2.D0+NRHS*
     $                                  ( N-NRHS / 3.D0 ) )
     $                                  + N*NRHS*( 2.D0*NRHS+1.D0-N )
*
                  NOPS = ADDFAC*ADDS + MULFAC*MULTS
*
*      Print WALL time if machine supports it
*

                  IF( WTIME( 1 ) + WTIME( 2 ) .GT. 0.0D+0 ) THEN
                  TMFLOPS = NOPS / ( ( WTIME( 1 )+WTIME( 2 )) * 1.0D+6)
                  ELSE
                  TMFLOPS = 0.0D+0
                  END IF
*
                  IF( WTIME( 2 ) .GE. 0.0D+0 .AND. IAM.EQ.0)
     $              WRITE( NOUT, FMT = 9996 ) 'WALL', N, NB, NRHS,
     $              NPROW, NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $              RESID, PASSED
*
*
*
   10       CONTINUE

   20   CONTINUE
            CALL BLACS_GRIDEXIT( ICTXT )

   30 CONTINUE
*
*
*     Print ending messages and close output file
*
*
      IF( IAM.EQ.0 ) THEN
         KTESTS = KPASS + KFAIL + KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9995 ) KTESTS
         IF( CHECK ) THEN
            WRITE( NOUT, FMT = 9994 ) KPASS
            WRITE( NOUT, FMT = 9992 ) KFAIL
         ELSE
            WRITE( NOUT, FMT = 9993 ) KPASS
         END IF
         WRITE( NOUT, FMT = 9991 ) KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9997 )
         WRITE( NOUT, FMT = * )
         IF( NOUT.NE.6 .AND. NOUT.NE.0 )
     $      CLOSE ( NOUT )
      END IF
*
      CALL BLACS_EXIT( 0 )
*
 9999 FORMAT( 'Bad ', A6, ' parameters: going on to next test case.' )
 9998 FORMAT( 'Unable to perform ', A, ': need TOTMEM of at least',
     $        I11 )
 9997 FORMAT( 'END OF TESTS.' )
 9996 FORMAT( A4, 3X, I6, 1X, I6, 1X, I5, 1X, I5, 1X, I5, 1X,
     $        F9.2, 1X, F12.2, 1X, F6.0, 1X, F6.0, 1X, A6 )
 9995 FORMAT( 'Finished', I2, ' tests, with the following results:' )
 9994 FORMAT( I2, ' tests completed and passed residual checks.' )
 9993 FORMAT( I2, ' tests completed without checking.' )
 9992 FORMAT( I2, ' tests completed and failed residual checks.' )
 9991 FORMAT( I2, ' tests skipped because of illegal input values.' )
*
      STOP
*
*     End of PSGESVDRIVER
*
      END