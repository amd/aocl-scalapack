      PROGRAM PSBRDDRIVER
*
*  -- ScaLAPACK testing driver (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     March 13, 2000
*
*     Modifications Copyright (c) 2024 Advanced Micro Devices, Inc. All rights reserved.
*
*  Purpose
*  =======
*
*  PSBRDDRIVER is the main test program for the REAL
*  ScaLAPACK BRD (bidiagonal reduction) routines.
*
*  The program must be driven by a short data file.  An annotated
*  example of a data file can be obtained by deleting the first 3
*  characters from the following 13 lines:
*  'ScaLAPACK BRD computation input file'
*  'PVM machine'
*  'BRD.out'       output file name
*  6               device out
*  3               number of problems sizes
*  16 20 18        values of M
*  16 18 20        values of N
*  3               number of NB's
*  2 3 5           values of NB
*  7               number of process grids (ordered pairs of P & Q)
*  1 2 1 4 2 3 8   values of P
*  1 2 4 1 3 2 1   values of Q
*  1.0             threshold
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
*  REALSZ   INTEGER, default = 4 bytes.
*           INTGSZ and REALSZ indicate the length in bytes on the
*           given platform for an integer and a single precision real.
*  MEM      REAL array, dimension ( TOTMEM / REALSZ )
*
*           All arrays used by SCALAPACK routines are allocated from
*           this array and referenced by pointers.  The integer IPA,
*           for example, is a pointer to the starting element of MEM for
*           the matrix A.
*
*  =====================================================================
*
      use,intrinsic :: ieee_arithmetic
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      INTEGER            MEMSIZ, NTESTS, REALSZ, TOTMEM
#ifndef DYNAMIC_WORK_MEM_ALLOC
      PARAMETER          ( TOTMEM = 2000000 )
#else
      PARAMETER          ( TOTMEM = 2100000000 )
#endif
      REAL               PADVAL
      PARAMETER          ( REALSZ = 4,
     $                     MEMSIZ = TOTMEM / REALSZ, NTESTS = 20,
     $                     PADVAL = -9923.0E+0 )
*     ..
*     .. Local Scalars ..
      LOGICAL            CHECK
      CHARACTER*6        PASSED
      CHARACTER*80       OUTFILE
      INTEGER            I, IAM, IASEED, ICTXT, IMIDPAD, INFO, IPA, IPD,
     $                   IPE, IPOSTPAD, IPREPAD, IPTP, IPTQ, IPW, J, K,
     $                   KFAIL, KPASS, KSKIP, KTESTS, LWORK, M, MAXMN,
     $                   MINMN, MNP, MNQ, MP, MYCOL, MYROW, N, NB,
     $                   NDIAG, NGRIDS, NMAT, NNB, NOFFD, NOUT, NPCOL,
     $                   NPROCS, NPROW, NQ, WORKBRD, WORKSIZ
      REAL               ANORM, FRESID, THRESH
      DOUBLE PRECISION   NOPS, TMFLOPS
*     ..
*     .. Local Arrays ..
      INTEGER            DESCA( DLEN_ ), IERR( 1 ), NBVAL( NTESTS ),
     $                   MVAL( NTESTS ), NVAL( NTESTS ),
     $                   PVAL( NTESTS ), QVAL( NTESTS )
#ifndef DYNAMIC_WORK_MEM_ALLOC
      REAL               MEM( MEMSIZ )
#else
      REAL, allocatable :: MEM (:)
#endif
      DOUBLE PRECISION   CTIME( 1 ), WTIME( 1 )
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_BARRIER, BLACS_EXIT, BLACS_GET,
     $                   BLACS_GRIDEXIT, BLACS_GRIDINFO, BLACS_GRIDINIT,
     $                   BLACS_PINFO, DESCINIT, IGSUM2D, PSCHEKPAD,
     $                   PSBRDINFO, PSFILLPAD, PSLAFCHK,
     $                   PSMATGEN, PSGEBDRV, PSGEBRD, SLBOOT,
     $                   SLCOMBINE, SLTIMER
*     ..
*     .. External Functions ..
      INTEGER            ICEIL, NUMROC
      REAL               PSLANGE
      EXTERNAL           ICEIL, NUMROC, PSLANGE
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          DBLE, MAX, MIN
*     ..
*     .. Data statements ..
      DATA               KTESTS, KPASS, KFAIL, KSKIP / 4*0 /
*     ..
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
*     .. Executable Statements ..
*
*     Get starting information
*
#ifdef DYNAMIC_WORK_MEM_ALLOC
      allocate(MEM(MEMSIZ))
#endif
      CALL BLACS_PINFO( IAM, NPROCS )
      IASEED = 100
      CALL PSBRDINFO( OUTFILE, NOUT, NMAT, MVAL, NTESTS, NVAL, NTESTS,
     $                NNB, NBVAL, NTESTS, NGRIDS, PVAL, NTESTS, QVAL,
     $                NTESTS, THRESH, MEM, IAM, NPROCS )
      CHECK = ( THRESH.GE.0.0E+0 )
*
*     Get the number of command-line arguments
      numArgs = command_argument_count()

*     Process command-line arguments
      do count = 1, numArgs, 2
         call get_command_argument(count, arg)
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
     $         WRITE( NOUT, FMT = 9999 ) 'GRID', 'nprow', NPROW
            IERR( 1 ) = 1
         ELSE IF( NPCOL.LT.1 ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9999 ) 'GRID', 'npcol', NPCOL
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
*        Define process grid
*
         CALL BLACS_GET( -1, 0, ICTXT )
         CALL BLACS_GRIDINIT( ICTXT, 'Row-major', NPROW, NPCOL )
         CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
         IF( MYROW.GE.NPROW .OR. MYCOL.GE.NPCOL )
     $      GO TO 30
*
*        Go to bottom of loop if this case doesn't use my process
*
         DO 20 J = 1, NMAT
*
            M = MVAL( J )
            N = NVAL( J )
*
*           Make sure matrix information is correct
*
            IERR( 1 ) = 0
#ifdef ENABLE_DRIVER_CHECK
            IF( M.LT.1 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'MATRIX', 'M', M
               IERR( 1 ) = 1
            ELSE IF( N.LT.1 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'MATRIX', 'N', N
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
     $            WRITE( NOUT, FMT = 9997 ) 'matrix'
               KSKIP = KSKIP + 1
               GO TO 20
            END IF
*
*           Loop over different blocking sizes
*
            DO 10 K = 1, NNB
*
               NB = NBVAL( K )
*
*              Make sure nb is legal
*
               IERR( 1 ) = 0
               IF( NB.LT.1 ) THEN
                  IERR( 1 ) = 1
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9999 ) 'NB', 'NB', NB
               END IF
*
*              Check all processes for an error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'NB'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
*
*              Padding constants
*
               MP = NUMROC( M, NB, MYROW, 0, NPROW )
               NQ = NUMROC( N, NB, MYCOL, 0, NPCOL )
               MNP = NUMROC( MIN( M, N ), NB, MYROW, 0, NPROW )
               MNQ = NUMROC( MIN( M, N ), NB, MYCOL, 0, NPCOL )
               IF( CHECK ) THEN
                  IPREPAD  = MAX( NB, MP )
                  IMIDPAD  = NB
                  IPOSTPAD = MAX( NB, NQ )
               ELSE
                  IPREPAD  = 0
                  IMIDPAD  = 0
                  IPOSTPAD = 0
               END IF
*
*              Initialize the array descriptor for the matrix A
*
               CALL DESCINIT( DESCA, M, N, NB, NB, 0, 0, ICTXT,
     $                        MAX( 1, MP )+IMIDPAD, IERR( 1 ) )
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
#ifdef ENABLE_DRIVER_CHECK
               IF( IERR( 1 ).LT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'descriptor'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
#else
               IF(N .LT. 0 .AND. (IERR(1) .EQ. -2 .OR.
     $              IERR(1) .EQ. -4 .OR. IERR(1) .EQ. -8 .OR.
     $              IERR(1) .EQ. -3 .OR. IERR(1) .EQ. -12 )) THEN
*                   DESCINIT returns the correct error code,
*                   -2, -3 incase of invalid M and N
*                   -4, -8 or -12 incase of incorrect grid info
*                   MAIN API can be validated.
*                   Do NOTHING
                    WRITE( NOUT, FMT = 9984 ) 'N'
                  ELSE IF(M .LT. 0 .AND. (IERR(1) .EQ. -2 .OR.
     $               IERR(1) .EQ. -4 .OR. IERR(1) .EQ. -8 .OR.
     $               IERR(1) .EQ. -3 .OR. IERR(1) .EQ. -12  )) THEN
                    WRITE( NOUT, FMT = 9984 ) 'M'
                  ELSE IF(IERR(1) .LT. 0) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'descriptor'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF

#endif
*
*              Assign pointers into MEM for SCALAPACK arrays, A is
*              allocated starting at position MEM( IPREPAD+1 )
*
               IF( M.GE.N ) THEN
                  NDIAG = MNQ
                  NOFFD = MNP
               ELSE
                  NDIAG = MNP
                  NOFFD = NUMROC( MIN( M, N )-1, NB, MYCOL, 0, NPCOL )
               END IF
*
               IPA  = IPREPAD + 1
               IPD  = IPA + DESCA( LLD_ )*NQ + IPOSTPAD + IPREPAD
               IPE  = IPD + NDIAG + IPOSTPAD + IPREPAD
               IPTQ = IPE + NOFFD + IPOSTPAD + IPREPAD
               IPTP = IPTQ + MNQ + IPOSTPAD + IPREPAD
               IPW  = IPTP + MNP + IPOSTPAD + IPREPAD
*
*              Calculate the amount of workspace required for the
*              reduction
*
               LWORK = NB*( MP+NQ+1 ) + NQ
               WORKBRD = LWORK + IPOSTPAD
               WORKSIZ = WORKBRD
*
*              Figure the amount of workspace required by the check
*
               IF( CHECK ) THEN
                  WORKSIZ = MAX( LWORK, 2*NB*( MP+NQ+NB ) ) + IPOSTPAD
               END IF
*
*              Check for adequate memory for problem size
*
               IERR( 1 ) = 0
               IF( IPW+WORKSIZ.GT.MEMSIZ ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9996 ) 'Bidiagonal reduction',
     $                      ( IPW+WORKSIZ )*REALSZ
                  IERR( 1 ) = 1
               END IF
*
*              Check all processes for an error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'MEMORY'
                  KSKIP = KSKIP + 1
                  GO TO 10
               END IF
*
*              Generate the matrix A
*
               CALL PSMATGEN( ICTXT, 'No', 'No', DESCA( M_ ),
     $                        DESCA( N_ ), DESCA( MB_ ), DESCA( NB_ ),
     $                        MEM( IPA ), DESCA( LLD_ ), DESCA( RSRC_ ),
     $                        DESCA( CSRC_ ), IASEED, 0, MP, 0, NQ,
     $                        MYROW, MYCOL, NPROW, NPCOL )
*
*              Need Infinity-norm of A for checking
*
               IF( CHECK .AND. N.GE.0 .AND. M.GE.0 ) THEN
                  CALL PSFILLPAD( ICTXT, MP, NQ, MEM( IPA-IPREPAD ),
     $                            DESCA( LLD_ ), IPREPAD, IPOSTPAD,
     $                            PADVAL )
                  CALL PSFILLPAD( ICTXT, NDIAG, 1, MEM( IPD-IPREPAD ),
     $                            NDIAG, IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSFILLPAD( ICTXT, NOFFD, 1, MEM( IPE-IPREPAD ),
     $                            NOFFD, IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSFILLPAD( ICTXT, MNQ, 1, MEM( IPTQ-IPREPAD ),
     $                            MNQ, IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSFILLPAD( ICTXT, MNP, 1, MEM( IPTP-IPREPAD ),
     $                            MNP, IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  ANORM = PSLANGE( 'I', M, N, MEM( IPA ), 1, 1, DESCA,
     $                             MEM( IPW ) )
                  CALL PSCHEKPAD( ICTXT, 'PSLANGE', MP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSLANGE', WORKSIZ-IPOSTPAD,
     $                            1, MEM( IPW-IPREPAD ),
     $                            WORKSIZ-IPOSTPAD, IPREPAD, IPOSTPAD,
     $                            PADVAL )
                  CALL PSFILLPAD( ICTXT, WORKBRD-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKBRD-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
               END IF
*
               CALL SLBOOT()
               CALL BLACS_BARRIER( ICTXT, 'All' )
               CALL SLTIMER( 1 )
*
*              Reduce to bidiagonal form
*
               CALL PSGEBRD( M, N, MEM( IPA ), 1, 1, DESCA, MEM( IPD ),
     $                       MEM( IPE ), MEM( IPTQ ), MEM( IPTP ),
     $                       MEM( IPW ), LWORK, INFO )
*
               CALL SLTIMER( 1 )
*
               IF( CHECK .AND. INFO .EQ. 0 .AND. .NOT.(EX_FLAG)) THEN
*
*                 Check for memory overwrite
*
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', MP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', NDIAG, 1,
     $                            MEM( IPD-IPREPAD ), NDIAG, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', NOFFD, 1,
     $                            MEM( IPE-IPREPAD ), NOFFD, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', MNQ, 1,
     $                            MEM( IPTQ-IPREPAD ), MNQ, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', MNP, 1,
     $                            MEM( IPTP-IPREPAD ), MNP, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBRD', WORKBRD-IPOSTPAD,
     $                            1, MEM( IPW-IPREPAD ),
     $                            WORKBRD-IPOSTPAD, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                            MEM( IPW-IPREPAD ), WORKSIZ-IPOSTPAD,
     $                            IPREPAD, IPOSTPAD, PADVAL )
*
*                 Compute fctres = ||A-Q*B*P|| / (||A|| * N * eps)
*
                  CALL PSGEBDRV( M, N, MEM( IPA ), 1, 1, DESCA,
     $                           MEM( IPD ), MEM( IPE ), MEM( IPTQ ),
     $                           MEM( IPTP ), MEM( IPW ), IERR( 1 ) )
                  CALL PSLAFCHK( 'No', 'No', M, N, MEM( IPA ), 1, 1,
     $                           DESCA, IASEED, ANORM, FRESID,
     $                           MEM( IPW ) )
*
*                 Check for memory overwrite
*
                  CALL PSCHEKPAD( ICTXT, 'PSGEBDRV', MP, NQ,
     $                            MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                            IPREPAD, IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBDRV', NDIAG, 1,
     $                            MEM( IPD-IPREPAD ), NDIAG, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBDRV', NOFFD, 1,
     $                            MEM( IPE-IPREPAD ), NOFFD, IPREPAD,
     $                            IPOSTPAD, PADVAL )
                  CALL PSCHEKPAD( ICTXT, 'PSGEBDRV', WORKSIZ-IPOSTPAD,
     $                           1, MEM( IPW-IPREPAD ),
     $                           WORKSIZ-IPOSTPAD, IPREPAD,
     $                           IPOSTPAD, PADVAL )
*
*                 Test residual and detect NaN result
*
                  IF((M .EQ. 0 .OR. N .EQ. 0) .AND. INFO .EQ. 0) THEN
*                   If N =0 this is the case of
*                   early return from ScaLAPACK API.
*                   If there is safe exit from API; pass this case
                    KPASS = KPASS + 1
                    WRITE( NOUT, FMT = 9985 ) 'PSGEBRD'
                    PASSED = 'PASSED'
                    FRESID = 0
                  ELSE IF( FRESID.LE.THRESH .AND.
     $                  FRESID-FRESID.EQ.0.0E+0 .AND.
     $                  IERR( 1 ).EQ.0 ) THEN
                     KPASS = KPASS + 1
                     PASSED = 'PASSED'
                  ELSE
                     IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 )
     $                  WRITE( NOUT, FMT = 9986 ) FRESID
*
                     KFAIL = KFAIL + 1
                     PASSED = 'FAILED'
                  END IF
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 .AND. IERR( 1 ).NE.0 )
     $               WRITE( NOUT, FMT = * )
     $                     'D or E copies incorrect ...'
               ELSE
*
*                 Don't perform the checking, only the timing operation
*
                  FRESID = FRESID - FRESID
*                 Early return case
                  IF((M .EQ. 0 .OR. N .EQ. 0) .AND. INFO .EQ. 0) THEN
*                   If N =0 this is the case of
*                   early return from ScaLAPACK API.
*                   If there is safe exit from API; pass this case
                    KPASS = KPASS + 1
                    WRITE( NOUT, FMT = 9985 ) 'PSGEBRD'
                    PASSED = 'PASSED'
*                 Invalid M/N
                  ELSE IF( ( M .LT. 0 .AND. INFO .EQ. -1 ) .OR.
     $                ( N .LT. 0 .AND. INFO .EQ. -2 ) ) THEN
*
*                   When N < 0/Invalid, INFO = -2
*                   When M < 0/Invalid, INFO = -1
*                   Expected Error code for N < 0
*                   Hence this case can be passed
                    WRITE( NOUT, FMT = 9983 ) 'PSGEBRD'
                    KPASS = KPASS + 1
                    PASSED = 'PASSED'
*
*                 Extreme-value inputs
                  ELSE IF(EX_FLAG) THEN
*                   Check presence of INF/NAN in output
*                   Pass the case if present
                    DO IK = 0, M
                      DO JK = 1, N
                        X = MEM(IK*N + JK)
                        IF (isnan(X)) THEN
*                         NAN DETECTED
                          RES_FLAG = .TRUE.
                          EXIT
                        ELSE IF (.NOT.ieee_is_finite(X)) THEN
*                         INFINITY DETECTED
                          RES_FLAG = .TRUE.
                          EXIT
                        END IF
                      END DO
                      IF(RES_FLAG) THEN
                        EXIT
                      END IF
                    END DO
                    IF (.NOT.(RES_FLAG)) THEN
                      KFAIL = KFAIL + 1
                      PASSED = 'FAILED'
                    ELSE
                  KPASS = KPASS + 1
                      PASSED = 'PASSED'
*                     RESET RESIDUAL FLAG
                      RES_FLAG = .FALSE.
                    END IF
*
                  ELSE
*
                    KPASS = KPASS + 1
                    PASSED = 'BYPASS'
*
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
*                 BRD requires 8/3 N^3 floating point operations
*
                  MAXMN = MAX( M, N )
                  MINMN = MIN( M, N )
                  NOPS = 4.0D+0 * DBLE( MINMN ) * DBLE( MINMN ) *
     $                   ( DBLE( MAXMN ) - DBLE( MINMN ) / 3.0D+0 )
                  NOPS = NOPS / 1.0D+6
*
*                 Print WALL time
*
                  IF( WTIME( 1 ).GT.0.0D+0 ) THEN
                     TMFLOPS = NOPS / WTIME( 1 )
                  ELSE
                     TMFLOPS = 0.0D+0
                  END IF
                  IF( WTIME( 1 ).GE.0.0D+0 )
     $               WRITE( NOUT, FMT = 9993 ) 'WALL', M, N, NB, NPROW,
     $                      NPCOL, WTIME( 1 ), TMFLOPS, FRESID, PASSED
*
*                 Print CPU time
*
                  IF( CTIME( 1 ).GT.0.0D+0 ) THEN
                     TMFLOPS = NOPS / CTIME( 1 )
                  ELSE
                     TMFLOPS = 0.0D+0
                  END IF
                  IF( CTIME( 1 ).GE.0.0D+0 )
     $               WRITE( NOUT, FMT = 9993 ) 'CPU ', M, N, NB, NPROW,
     $                      NPCOL, CTIME( 1 ), TMFLOPS, FRESID, PASSED
               END IF
   10       CONTINUE
   20    CONTINUE
*
         CALL BLACS_GRIDEXIT( ICTXT )
   30 CONTINUE
*
*     Print ending messages and close output file
*
      IF( IAM.EQ.0 ) THEN
         KTESTS = KPASS + KFAIL + KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9992 ) KTESTS
         IF( CHECK ) THEN
            WRITE( NOUT, FMT = 9991 ) KPASS
            WRITE( NOUT, FMT = 9989 ) KFAIL
         ELSE
            WRITE( NOUT, FMT = 9990 ) KPASS
         END IF
         WRITE( NOUT, FMT = 9988 ) KSKIP
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = * )
         WRITE( NOUT, FMT = 9987 )
         IF( NOUT.NE.6 .AND. NOUT.NE.0 ) CLOSE ( NOUT )
      END IF
*
#ifdef DYNAMIC_WORK_MEM_ALLOC
      deallocate(MEM)
#endif
      CALL BLACS_EXIT( 0 )
*
 9999 FORMAT( 'ILLEGAL ', A6, ': ', A5, ' = ', I3,
     $        '; It should be at least 1' )
 9998 FORMAT( 'ILLEGAL GRID: nprow*npcol = ', I4, '. It can be at most',
     $        I4 )
 9997 FORMAT( 'Bad ', A6, ' parameters: going on to next test case.' )
 9996 FORMAT( 'Unable to perform ', A, ': need TOTMEM of at least',
     $      I11 )
 9995 FORMAT( 'TIME      M      N  NB     P     Q  BRD Time ',
     $        '     MFLOPS Residual  CHECK' )
 9994 FORMAT( '---- ------ ------ --- ----- ----- --------- ',
     $        '----------- -------- ------' )
 9993 FORMAT( A4, 1X, I6, 1X, I6, 1X, I5, 1X, I5, 1X, I5, 1X, F9.2, 1X,
     $        F12.2, 1X, F8.2, 1X, A6 )
 9992 FORMAT( 'Finished', I4, ' tests, with the following results:' )
 9991 FORMAT( I5, ' tests completed and passed residual checks.' )
 9990 FORMAT( I5, ' tests completed without checking.' )
 9989 FORMAT( I5, ' tests completed and failed residual checks.' )
 9988 FORMAT( I5, ' tests skipped because of illegal input values.' )
 9987 FORMAT( 'END OF TESTS.' )
 9986 FORMAT( '||A - Q*B*P|| / (||A|| * N * eps) = ', G25.7 )
 9985 FORMAT( '----------Test Passed but no compute was ',
     $       'performed! [Safe exit from ', A,']-----------')
 9984 FORMAT(  A, ' < 0 case detected. ',
     $        'Instead of driver file, This case will be handled',
     $        'by the ScaLAPACK API.')
 9983 FORMAT( '----------Negative-Test Passed with expected',
     $       ' ERROR CODE in INFO from ', A,']-----------')
*
      STOP
*
*     End of PSBRDDRIVER
*
      END
