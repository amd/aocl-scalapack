      PROGRAM PCNEPDRIVER
*
*  -- ScaLAPACK testing driver (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     March, 2000
*     Modifications Copyright (c) 2024 Advanced Micro Devices, Inc. All rights reserved.
*
*  Purpose
*  =======
*
*  PCNEPDRIVER is the main test program for the COMPLEX
*  SCALAPACK NEP routines.  This test driver performs a Schur
*  decomposition followed by residual check of a Hessenberg matrix.
*
*  The program must be driven by a short data file.  An annotated
*  example of a data file can be obtained by deleting the first 3
*  characters from the following 18 lines:
*  'SCALAPACK, Version 1.4, NEP (Nonsymmetric EigenProblem) input file'
*  'Intel iPSC/860 hypercube, gamma model.'
*  'NEP.out'            output file name (if any)
*  6                    device out
*  8                    number of problems sizes
*  1 2 3 4 6 10 100 200 vales of N
*  3                    number of NB's
*  6 20 40              values of NB
*  4                    number of process grids (ordered pairs of P & Q)
*  1 2 1 4              values of P
*  1 2 4 1              values of Q
*  20.0                 threshold
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
*  CPLXSZ   INTEGER, default = 8 bytes.
*           CPLXSZ indicate the length in bytes on the given platform
*           for a single precision complex.
*  MEM      COMPLEX array, dimension ( TOTMEM / CPLXSZ )
*
*           All arrays used by SCALAPACK routines are allocated from
*           this array and referenced by pointers.  The integer IPA,
*           for example, is a pointer to the starting element of MEM for
*           the matrix A.
*
*  Further Details
*  ===============
*
*  Contributed by Mark Fahey, March 2000.
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DT_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DT_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      INTEGER            CPLXSZ, TOTMEM, MEMSIZ, NTESTS
#ifndef DYNAMIC_WORK_MEM_ALLOC
      PARAMETER          ( TOTMEM = 200000000 )
#else
      PARAMETER          ( TOTMEM = 2100000000 )
#endif
      PARAMETER          ( CPLXSZ = 16,
     $                   MEMSIZ = TOTMEM / CPLXSZ, NTESTS = 20 )
      COMPLEX            PADVAL, ZERO, ONE
      PARAMETER          ( PADVAL = ( -9923.0E+0, -9923.0E+0 ),
     $                   ZERO = ( 0.0E+0, 0.0E+0 ),
     $                   ONE = ( 1.0E+0, 0.0E+0 ) )
*     ..
*     .. Local Scalars ..
      LOGICAL            CHECK
      CHARACTER*6        PASSED
      CHARACTER*80       OUTFILE
      INTEGER            I, IAM, IASEED, ICTXT, III, IMIDPAD, INFO, IPA,
     $                   IPOSTPAD, IPREPAD, IPW, IPWR, IPC, J, K, KFAIL,
     $                   KPASS, KSKIP, KTESTS, LDA, LDWORK, LDZ, LWORK,
     $                   MYCOL, MYROW, N, NB, NGRIDS, NMAT, NNB, NOUT,
     $                   NP, NPCOL, NPROCS, NPROW, NQ, WORKSIZ
      REAL               THRESH
      REAL               ANORM, FRESID, QRESID, ZNORM
      DOUBLE PRECISION   NOPS, TMFLOPS
*     ..
*     .. Local Arrays ..
      INTEGER            DESCA( DLEN_ ), DESCZ( DLEN_ ), IDUM( 1 ),
     $                   IERR( 2 ), NBVAL( NTESTS ), NVAL( NTESTS ),
     $                   PVAL( NTESTS ), QVAL( NTESTS )
      DOUBLE PRECISION   CTIME( 2 ), WTIME( 2 )
#ifndef DYNAMIC_WORK_MEM_ALLOC
      COMPLEX            MEM( MEMSIZ )
#else
      COMPLEX, allocatable :: MEM (:)
#endif
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_BARRIER, BLACS_EXIT, BLACS_GET,
     $                   BLACS_GRIDEXIT, BLACS_GRIDINFO, BLACS_GRIDINIT,
     $                   BLACS_PINFO, DESCINIT, IGSUM2D, PCCHEKPAD,
     $                   PCFILLPAD, PCGEMM, PCLAHQR, PCLASET, PCMATGEN,
     $                   PCNEPFCHK, PCNEPINFO, SLBOOT, SLCOMBINE,
     $                   SLTIMER
*     ..
*     .. External Functions ..
      INTEGER            ILCM, NUMROC
      REAL               PSLAMCH, PCLANGE, PCLANHS
      EXTERNAL           ILCM, NUMROC, PSLAMCH, PCLANGE, PCLANHS
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          REAL, MAX, MIN
*     ..
*     .. Data statements ..
      DATA               KFAIL, KPASS, KSKIP, KTESTS / 4*0 /
*     ..
*     .. Executable Statements ..
*
*     Get starting information
*
#ifdef DYNAMIC_WORK_MEM_ALLOC
      allocate(MEM(MEMSIZ))
#endif
      CALL BLACS_PINFO( IAM, NPROCS )
      IASEED = 100
      CALL PCNEPINFO( OUTFILE, NOUT, NMAT, NVAL, NTESTS, NNB, NBVAL,
     $                NTESTS, NGRIDS, PVAL, NTESTS, QVAL, NTESTS,
     $                THRESH, MEM, IAM, NPROCS )
      CHECK = ( THRESH.GE.0.0E+0 )
*
*     Print headings
*
      IF( IAM.EQ.0 ) THEN
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9995 )
         WRITE( NOUT, FMT = 9994 )
         WRITE( NOUT, FMT = * )
      END IF
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
     $         WRITE( NOUT, FMT = 9999 )'GRID', 'nprow', NPROW
            IERR( 1 ) = 1
         ELSE IF( NPCOL.LT.1 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9999 )'GRID', 'npcol', NPCOL
            IERR( 1 ) = 1
         ELSE IF( NPROW*NPCOL.GT.NPROCS ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9998 )NPROW*NPCOL, NPROCS
            IERR( 1 ) = 1
         END IF
*
         IF( IERR( 1 ).GT.0 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9997 )'grid'
            KSKIP = KSKIP + 1
            GO TO 30
         END IF
*
*        Define process grid
*
         CALL BLACS_GET( -1, 0, ICTXT )
         CALL BLACS_GRIDINIT( ICTXT, 'Row-major', NPROW, NPCOL )
         CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*        Go to bottom of process grid loop if this case doesn't use my
*        process
*
         IF( MYROW.GE.NPROW .OR. MYCOL.GE.NPCOL )
     $      GO TO 30
*
         DO 20 J = 1, NMAT
*
            N = NVAL( J )
*
*           Make sure matrix information is correct
*
            IERR( 1 ) = 0
#ifdef ENABLE_DRIVER_CHECK
            IF( N.LT.1 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 )'MATRIX', 'N', N
               IERR( 1 ) = 1
            END IF
#endif
*
*           Check all processes for an error
*
            CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
            IF( IERR( 1 ).GT.0 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9997 )'matrix'
               KSKIP = KSKIP + 1
               GO TO 20
            END IF
*
            DO 10 K = 1, NNB
*
               NB = NBVAL( K )
*
*              Make sure nb is legal
*
               IERR( 1 ) = 0
               IF( NB.LT.6 ) THEN
                  IERR( 1 ) = 1
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9999 )'NB', 'NB', NB
               END IF
*
*              Check all processes for an error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 )'NB'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
*
*              Padding constants
*
               NP = NUMROC( N, NB, MYROW, 0, NPROW )
               NQ = NUMROC( N, NB, MYCOL, 0, NPCOL )
               IF( CHECK ) THEN
                  IPREPAD = MAX( NB, NP )
                  IMIDPAD = NB
                  IPOSTPAD = MAX( NB, NQ )
                  IPREPAD = IPREPAD + 1000
                  IMIDPAD = IMIDPAD + 1000
                  IPOSTPAD = IPOSTPAD + 1000
               ELSE
                  IPREPAD = 0
                  IMIDPAD = 0
                  IPOSTPAD = 0
               END IF
*
*              Initialize the array descriptor for the matrix A
*
               CALL DESCINIT( DESCA, N, N, NB, NB, 0, 0, ICTXT,
     $                        MAX( 1, NP )+IMIDPAD, IERR( 1 ) )
*
*              Initialize the array descriptor for the matrix Z
*
               CALL DESCINIT( DESCZ, N, N, NB, NB, 0, 0, ICTXT,
     $                        MAX( 1, NP )+IMIDPAD, IERR( 2 ) )
*
               LDA = DESCA( LLD_ )
               LDZ = DESCZ( LLD_ )
               LDWORK = DESCZ( LLD_ )
*
*              Check all processes for an error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 2, 1, IERR, 2, -1, 0 )
*
#ifdef ENABLE_DRIVER_CHECK
               IF( IERR( 1 ).LT.0 .OR. IERR( 2 ).LT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 )'descriptor'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
#else
*               If N < 0 in NEP.dat file then DESCINIT API sets
*               IERR( 1 ) to -2 or -8 or -4.
*               If DESCINIT is returning correct error code then
*               do nothing
               IF( N.LT.0 .AND. (IERR( 1 ).EQ.-2 .OR.
     $                 IERR( 1 ).EQ. -8 .OR.
     $                 IERR( 1 ).EQ. -4 .OR.
     $                 IERR( 2 ).EQ.-2 .OR.
     $                 IERR( 2 ).EQ. -8 .OR.
     $                 IERR( 2 ).EQ. -4) ) THEN
                  WRITE ( NOUT, FMT = 9984 ) 'PCLAHQR'
               ELSE IF( IERR( 1 ).LT.0 .OR. IERR( 2 ).LT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'descriptor'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
#endif
*
*              Assign pointers into MEM for SCALAPACK arrays, A is
*              allocated starting at position MEM( IPREPAE+1 )
*
               IPA = IPREPAD + 1
               IPC = IPA + DESCA( LLD_ )*NQ + IPOSTPAD + IPREPAD
               IPWR = IPC + DESCZ( LLD_ )*NQ + IPOSTPAD + IPREPAD
               IPW = IPWR + DESCZ( LLD_ )*NQ + IPOSTPAD + IPREPAD
               III = N / NB
               IF( III*NB.LT.N )
     $            III = III + 1
               III = 7*III / ILCM( NPROW, NPCOL )
*
*
               LWORK = 3*N + MAX( 2*MAX( LDA, LDZ )+2*NQ, III )
               LWORK = LWORK + MAX( 2*N, ( 8*ILCM( NPROW, NPCOL )+2 )**
     $                 2 )
*
               IF( CHECK ) THEN
*
*                 Figure the amount of workspace required by the
*                 checking routines PCNEPFCHK and PCLANHS
*
                  WORKSIZ = LWORK + MAX( NP*DESCA( NB_ ),
     $                      DESCA( MB_ )*NQ ) + IPOSTPAD
*
               ELSE
*
                  WORKSIZ = LWORK + IPOSTPAD
*
               END IF
*
*              Check for adequate memory for problem size
*
               IERR( 1 ) = 0
               IF( IPW+WORKSIZ.GT.MEMSIZ ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9996 )'Schur reduction',
     $               ( IPW+WORKSIZ )*CPLXSZ
                  IERR( 1 ) = 1
               END IF
*
*              Check all processes for an error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 )'MEMORY'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
*
*              Generate matrix Z = In
*
               CALL PCLASET( 'All', N, N, ZERO, ONE, MEM( IPC ), 1, 1,
     $                       DESCZ )
*
*              Generate matrix A upper Hessenberg
*
               CALL PCMATGEN( ICTXT, 'No transpose', 'No transpose',
     $                        DESCA( M_ ), DESCA( N_ ), DESCA( MB_ ),
     $                        DESCA( NB_ ), MEM( IPA ), DESCA( LLD_ ),
     $                        DESCA( RSRC_ ), DESCA( CSRC_ ), IASEED, 0,
     $                        NP, 0, NQ, MYROW, MYCOL, NPROW, NPCOL )
               CALL PCLASET( 'Lower', MAX( 0, N-2 ), MAX( 0, N-2 ),
     $                       ZERO, ZERO, MEM( IPA ), MIN( N, 3 ), 1,
     $                       DESCA )
*
*              Calculate inf-norm of A for residual error-checking
*
               IF( CHECK ) THEN
                  CALL PCFILLPAD( ICTXT, NP, NQ, MEM( IPA-IPREPAD ),
     $                            DESCA( LLD_ ), IPREPAD, IPOSTPAD,
     $                            PADVAL )
                  CALL PCFILLPAD( ICTXT, NP, NQ, MEM( IPC-IPREPAD ),
     $                            DESCZ( LLD_ ), IPREPAD, IPOSTPAD,
     $                            PADVAL )
                  CALL PCFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  ANORM = PCLANHS( 'I', N, MEM( IPA ), 1, 1, DESCA,
     $                    MEM( IPW ) )
                  CALL PCCHEKPAD( ICTXT, 'PCLANHS', NP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCLANHS', WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
*
                  CALL PCFILLPAD( ICTXT, N, 1, MEM( IPWR-IPREPAD ), N,
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCFILLPAD( ICTXT, LWORK, 1, MEM( IPW-IPREPAD ),
     $                            LWORK, IPREPAD, IPOSTPAD, PADVAL )
*
               END IF
*
               CALL SLBOOT()
               CALL BLACS_BARRIER( ICTXT, 'All' )
               CALL SLTIMER( 1 )
*
*              Perform NEP factorization
*
               CALL PCLAHQR( .TRUE., .TRUE., N, 1, N, MEM( IPA ), DESCA,
     $                       MEM( IPWR ), 1, N, MEM( IPC ), DESCZ,
     $                       MEM( IPW ), LWORK, IDUM, 0, INFO )
*
               CALL SLTIMER( 1 )
*
               IF( INFO.NE.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = * )'PCLAHQR INFO=', INFO
*                 If N < 0 in NEP.dat file then PCLAHQR API
*                 sets INFO = -5
                  IF (N.LT.0 .AND. INFO.EQ.-5) THEN
*                    If PCLAHQR is returning correct error
*                    code we need to pass this case
                     WRITE( NOUT, FMT = 9983 ) 'PCLAHQR'
                  ELSE IF ( N.GT.1 .AND. INFO.NE.0 ) THEN
                     KFAIL = KFAIL + 1
                     GO TO 10
                  END IF
               ELSE IF (N.EQ.0) THEN
*                 If N =0 this is the case of
*                 early return from ScaLAPACK API.
                  WRITE( NOUT, FMT = 9982 ) 'PCLAHQR'
               END IF
*
               IF( CHECK .AND. INFO.EQ.0 ) THEN
*
*                 Check for memory overwrite in NEP factorization
*
                  CALL PCCHEKPAD( ICTXT, 'PCLAHQR (A)', NP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCLAHQR (Z)', NP, NQ,
     $                            MEM( IPC-IPREPAD ), DESCZ( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCLAHQR (WR)', N, 1,
     $                            MEM( IPWR-IPREPAD ), N, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCLAHQR (WORK)', LWORK, 1,
     $                            MEM( IPW-IPREPAD ), LWORK, IPREPAD,
     $                            IPOSTPAD, PADVAL )
*
                  CALL PCFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
*
*                 Compute || Z * H * Z**T - H0 || / ( N*|| H0 ||*EPS )
*
                  CALL PCNEPFCHK( N, MEM( IPA ), 1, 1, DESCA, IASEED,
     $                            MEM( IPC ), 1, 1, DESCZ, ANORM,
     $                            FRESID, MEM( IPW ) )
*
                  CALL PCCHEKPAD( ICTXT, 'PCNEPFCHK (A)', NP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCNEPFCHK (Z)', NP, NQ,
     $                            MEM( IPC-IPREPAD ), DESCZ( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PCCHEKPAD( ICTXT, 'PCNEPFCHK (WORK)',
     $                            WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
*
*                 Compute || (Z**T)*Z - In ||_1
*
                  CALL PCLASET( 'All', N, N, ZERO, ONE, MEM( IPA ), 1,
     $                          1, DESCA )
                  CALL PCGEMM( 'Cong Tran', 'No transpose', N, N, N,
     $                         -ONE, MEM( IPC ), 1, 1, DESCZ,
     $                         MEM( IPC ), 1, 1, DESCZ, ONE, MEM( IPA ),
     $                         1, 1, DESCA )
                  ZNORM = PCLANGE( '1', N, N, MEM( IPA ), 1, 1, DESCA,
     $                    MEM( IPW ) )
                  QRESID = ZNORM / ( REAL( N )*PSLAMCH( ICTXT, 'P' ) )
*
*                 Test residual and detect NaN result
*
                  IF( ( FRESID.LE.THRESH ) .AND.
     $                ( ( FRESID-FRESID ).EQ.0.0E+0 ) .AND.
     $                ( QRESID.LE.THRESH ) .AND.
     $                ( ( QRESID-QRESID ).EQ.0.0E+0 ) ) THEN
                     KPASS = KPASS + 1
                     PASSED = 'PASSED'
                     ELSE IF( N.EQ.0 ) THEN
*                 Passing residual checks for the case N = 0
                     KPASS = KPASS + 1
                     PASSED = 'PASSED'
                  ELSE
                     KFAIL = KFAIL + 1
                     PASSED = 'FAILED'
                     IF( IAM.EQ.0 ) THEN
                        WRITE( NOUT, FMT = 9986 )FRESID
                        WRITE( NOUT, FMT = 9985 )QRESID
                     END IF
                  END IF
*
               ELSE
*
*                 Don't perform the checking, only timing
*
                  KPASS = KPASS + 1
                  FRESID = FRESID - FRESID
                  QRESID = QRESID - QRESID
*                 If the ScaLAPACK API is returning the correct
*                 INFO code for N < 0 then pass the case.
                  IF (N.LT.0 .AND. INFO.EQ.-5) THEN
                     PASSED = 'PASSED'
                  ELSE
                     PASSED = 'BYPASS'
                  END IF
*
               END IF
*
*              Gather maximum of all CPU and WALL clock timings
*
               CALL SLCOMBINE( ICTXT, 'All', '>', 'W', 1, 1, WTIME )
               CALL SLCOMBINE( ICTXT, 'All', '>', 'C', 1, 1, CTIME )
*
*              Print results
*
               IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 ) THEN
*
*                 18 N^3 flops for PxLAHQR
*
                  NOPS = 18.0D+0*DBLE( N )**3
*
*                 Calculate total megaflops -- factorization only,
*                 -- for WALL and CPU time, and print output
*
*                 Print WALL time if machine supports it
*
                  IF( WTIME( 1 ).GT.0.0D+0 ) THEN
                     TMFLOPS = NOPS / ( WTIME( 1 )*1.0D+6 )
                  ELSE
                     TMFLOPS = 0.0D+0
                  END IF
                  IF( WTIME( 1 ).GE.0.0D+0 )
     $               WRITE( NOUT, FMT = 9993 )'WALL', N, NB, NPROW,
     $               NPCOL, WTIME( 1 ), TMFLOPS, PASSED
*
*                 Print CPU time if machine supports it
*
                  IF( CTIME( 1 ).GT.0.0D+0 ) THEN
                     TMFLOPS = NOPS / ( CTIME( 1 )*1.0D+6 )
                  ELSE
                     TMFLOPS = 0.0D+0
                  END IF
*
                  IF( CTIME( 1 ).GE.0.0D+0 )
     $               WRITE( NOUT, FMT = 9993 )'CPU ', N, NB, NPROW,
     $               NPCOL, CTIME( 1 ), TMFLOPS, PASSED
               END IF
*
   10       CONTINUE
*
   20    CONTINUE
*
         CALL BLACS_GRIDEXIT( ICTXT )
*
   30 CONTINUE
*
*     Print ending messages and close output file
*
      IF( IAM.EQ.0 ) THEN
         KTESTS = KPASS + KFAIL + KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9992 )KTESTS
         IF( CHECK ) THEN
            WRITE( NOUT, FMT = 9991 )KPASS
            WRITE( NOUT, FMT = 9989 )KFAIL
         ELSE
            WRITE( NOUT, FMT = 9990 )KPASS
         END IF
         WRITE( NOUT, FMT = 9988 )KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9987 )
         IF( NOUT.NE.6 .AND. NOUT.NE.0 )
     $      CLOSE ( NOUT )
      END IF
*
#ifdef DYNAMIC_WORK_MEM_ALLOC
      deallocate(MEM)
#endif
      CALL BLACS_EXIT( 0 )
*
 9999 FORMAT( 'ILLEGAL ', A6, ': ', A5, ' = ', I3,
     $      '; It should be at least 1' )
 9998 FORMAT( 'ILLEGAL GRID: nprow*npcol = ', I4, '. It can be at most',
     $      I4 )
 9997 FORMAT( 'Bad ', A6, ' parameters: going on to next test case.' )
 9996 FORMAT( 'Unable to perform ', A, ': need TOTMEM of at least',
     $      I11 )
 9995 FORMAT( 'TIME     N  NB    P    Q NEP Time   MFLOPS  CHECK' )
 9994 FORMAT( '---- ----- --- ---- ---- -------- -------- ------' )
 9993 FORMAT( A4, 1X, I5, 1X, I5, 1X, I4, 1X, I4, 1X, F8.2, 1X, F12.2,
     $      1X, A6 )
 9992 FORMAT( 'Finished ', I6, ' tests, with the following results:' )
 9991 FORMAT( I5, ' tests completed and passed residual checks.' )
 9990 FORMAT( I5, ' tests completed without checking.' )
 9989 FORMAT( I5, ' tests completed and failed residual checks.' )
 9988 FORMAT( I5, ' tests skipped because of illegal input values.' )
 9987 FORMAT( 'END OF TESTS.' )
 9986 FORMAT( '||H - Q*S*Q^T|| / (||H|| * N * eps) = ', G25.7 )
 9985 FORMAT( '||Q^T*Q - I|| / ( N * eps ) ', G25.7 )
 9984 FORMAT(  A, ' < 0 case detected. ',
     $        'Instead of driver file, we will handle this case from ',
     $        'ScaLAPACK API.')
 9983 FORMAT(  A, ' returned correct error code. Passing this case.')
 9982 FORMAT(  'This is safe exit from ', A, ' API. Passing this case.')
*
      STOP
*
*     End of PCNEPDRIVER
*
      END
