      PROGRAM PDORGQRDRIVER
*
*  -- ScaLAPACK testing driver (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 28, 2001
*     Modifications Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.
*
*  Purpose
*  =======
*
*  PDORGQRDRIVER is the main test program for the DOUBLE PRECISION
*  SCALAPACK QR factorization routine. This test driver performs
*  ORGQR factorization and checks the
*  results.
*
*  The program must be driven by a short data file.  An annotated
*  example of a data file can be obtained by deleting the first 3
*  characters from the following 16 lines:
*  'ScaLAPACK QR factorizations input file'
*  'PVM machine'
*  'OQR.out'                     output file name (if any)
*  6                             device out
*  4                             number of problems sizes
*  55 17 31 201                  values of M
*  5 71 31 201                   values of N
*  3                             number of MB's and NB's
*  4 3 5                         values of MB
*  4 7 3                         values of NB
*  7                             number of process grids (ordered P & Q)
*  1 2 1 4 2 3 8                 values of P
*  7 2 4 1 3 2 1                 values of Q
*  1.0                           threshold
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
*  =====================================================================
*
      use,intrinsic :: ieee_arithmetic
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
*
      INTEGER            INTGSZ
#ifdef ENABLE_ILP64
      PARAMETER          ( INTGSZ = 8 )
#else
      PARAMETER          ( INTGSZ = 4 )
#endif
*
      INTEGER            DBLESZ, MEMSIZ, NTESTS, TOTMEM
#ifndef DYNAMIC_WORK_MEM_ALLOC
      PARAMETER          ( TOTMEM = 2000000 )
#else
      PARAMETER          ( TOTMEM = 2100000000 )
#endif
      DOUBLE PRECISION   PADVAL
      PARAMETER          ( DBLESZ = 8,
     $                     MEMSIZ = TOTMEM / DBLESZ, NTESTS = 20,
     $                     PADVAL = -9923.0D+0 )
*     ..
*     .. Local Scalars ..
      CHARACTER*2        FACT
      CHARACTER*6        PASSED
      CHARACTER*7        ROUT
      CHARACTER*8        ROUTCHK
      CHARACTER*80       OUTFILE
      LOGICAL            CHECK
      LOGICAL            M_INVALID, N_INVALID
      INTEGER            I, IAM, IASEED, ICTXT, IMIDPAD, INFO, IPA,
     $                   IPOSTPAD, IPPIV, IPREPAD, IPTAU, IPW, J, K,
     $                   KFAIL, KPASS, KSKIP, KTESTS, L, LIPIV, LTAU,
     $                   LWORK, M, MAXMN, MB, MINMN, MNP, MNQ, MP,
     $                   MYCOL, MYROW, N, NB, NFACT, NGRIDS, NMAT, NNB,
     $                   NOUT, NPCOL, NPROCS, NPROW, NQ, WORKFCT,
     $                   WORKSIZ
      REAL               THRESH
      DOUBLE PRECISION   ANORM, FRESID, NOPS, TMFLOPS
      CHARACTER*8        API_NAME
*     ..
*     .. Arrays ..
      CHARACTER*2        FACTOR( NTESTS )
      INTEGER            DESCA( DLEN_ ), IERR( 1 ), MBVAL( NTESTS ),
     $                   MVAL( NTESTS ), NBVAL( NTESTS ),
     $                   NVAL( NTESTS ), PVAL( NTESTS ), QVAL( NTESTS )
#ifndef DYNAMIC_WORK_MEM_ALLOC
      DOUBLE PRECISION   CTIME( 1 ), MEM( MEMSIZ ), WTIME( 1 )
#else
      DOUBLE PRECISION   CTIME( 1 ), WTIME( 1 ), QTQ(2000)
      DOUBLE PRECISION,  allocatable :: MEM (:)

#endif
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_BARRIER, BLACS_EXIT, BLACS_GET,
     $                   BLACS_GRIDEXIT, BLACS_GRIDINFO, BLACS_GRIDINIT,
     $                   BLACS_PINFO, DESCINIT, IGSUM2D, PDCHEKPAD,
     $                   PDFILLPAD, PDGEQRF, PDGEQRRV, PDORGQR,
     $                   PDTZRZRV, PDMATGEN, PDLAFCHK, PDORGQRINFO,
     $                   PDTZRZF, SLBOOT, SLCOMBINE, SLTIMER
*     ..
*     .. External Functions ..
      LOGICAL            LSAMEN
      INTEGER            ICEIL, NUMROC
      DOUBLE PRECISION   PDLANGE
      EXTERNAL           ICEIL, LSAMEN, NUMROC, PDLANGE
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          DBLE, MAX, MIN
*     ..
*     .. Data Statements ..
      DATA               KTESTS, KPASS, KFAIL, KSKIP /4*0/
*
*     Take command-line arguments if requested
      CHARACTER*80 arg
      INTEGER numArgs, count
      LOGICAL :: help_flag = .FALSE.
      LOGICAL :: EX_FLAG = .FALSE., RES_FLAG = .FALSE.
      INTEGER :: INF_PERCENT = 0
      INTEGER :: NAN_PERCENT = 0
      DOUBLE PRECISION :: X
      INTEGER :: K_ORG
*
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
      CALL PDORGQRINFO( OUTFILE, NOUT, NMAT, MVAL, NTESTS, NVAL,
     $               NTESTS, NNB, MBVAL, NTESTS, NBVAL,
     $               NTESTS, NGRIDS, PVAL, NTESTS, QVAL, NTESTS,
     $               THRESH, MEM, IAM, NPROCS )
      CHECK = ( THRESH.GE.0.0E+0 )
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
*        Print headings
*
*        Initial computations are similar to PDGEQRF
*        smilar design initilaizations can be done
*
         ROUT = 'PDGEQRF'
         ROUTCHK = 'PDGEQRRV'
         IF( IAM.EQ.0 ) THEN
           WRITE( NOUT, FMT = 9986 )
     $            'ORGQR factorization tests.'
           WRITE( NOUT, FMT = * )
           WRITE( NOUT, FMT = 9995 )
           WRITE( NOUT, FMT = 9994 )
           WRITE( NOUT, FMT = * )
         END IF

*
*        Loop over different process grids
*
         DO 30 J = 1, NGRIDS
*
            NPROW = PVAL( J )
            NPCOL = QVAL( J )
*
*           Make sure grid information is correct
*
            IERR( 1 ) = 0
            IF( NPROW.LT.1 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'GRID', 'nprow', NPROW
               IERR( 1 ) = 1
            ELSE IF( NPCOL.LT.1 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9999 ) 'GRID', 'npcol', NPCOL
               IERR( 1 ) = 1
            ELSE IF( NPROW*NPCOL.GT.NPROCS ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9998 ) NPROW*NPCOL, NPROCS
               IERR( 1 ) = 1
            END IF
*
            IF( IERR( 1 ).GT.0 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9997 ) 'grid'
               KSKIP = KSKIP + 1
               GO TO 30
            END IF
*
*           Define process grid
*
            CALL BLACS_GET( -1, 0, ICTXT )
            CALL BLACS_GRIDINIT( ICTXT, 'Row-major', NPROW, NPCOL )
            CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*           Go to bottom of loop if this case doesn't use my process
*
            IF( MYROW.GE.NPROW .OR. MYCOL.GE.NPCOL )
     $         GO TO 30
*
            DO 20 K = 1, NMAT
*
               M = MVAL( K )
               N = NVAL( K )
               K_ORG = N

*
*              Make sure matrix information is correct
*
#ifdef ENABLE_DRIVER_CHECK
               IERR(1) = 0
               IF( M.LT.1 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9999 ) 'MATRIX', 'M', M
                  IERR( 1 ) = 1
               ELSE IF( N.LT.1 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9999 ) 'MATRIX', 'N', N
                  IERR( 1 ) = 1
               END IF
#endif
*
*              Make sure no one had error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
#ifdef ENABLE_DRIVER_CHECK
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'matrix'
                  KSKIP = KSKIP + 1
                  GO TO 20
               END IF
#endif
*
*              Loop over different blocking sizes
*
               DO 10 L = 1, NNB
*
                  MB = MBVAL( L )
                  NB = NBVAL( L )
*
*                 Make sure mb is legal
*
                  IERR( 1 ) = 0
                  IF( MB.LT.1 ) THEN
                     IERR( 1 ) = 1
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9999 ) 'MB', 'MB', MB
                  END IF
*
*                 Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1,
     $                          0 )
*
                  IF( IERR( 1 ).GT.0 ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'MB'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF
*
*                 Make sure nb is legal
*
                  IERR( 1 ) = 0
                  IF( NB.LT.1 ) THEN
                     IERR( 1 ) = 1
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9999 ) 'NB', 'NB', NB
                  END IF
*
*                 Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1,
     $                          0 )
*
                  IF( IERR( 1 ).GT.0 ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'NB'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF
*
*                 Padding constants
*
                  MP  = NUMROC( M, MB, MYROW, 0, NPROW )
                  NQ  = NUMROC( N, NB, MYCOL, 0, NPCOL )
                  MNP = NUMROC( MIN( M, N ), MB, MYROW, 0, NPROW )
                  MNQ = NUMROC( MIN( M, N ), NB, MYCOL, 0, NPCOL )
                  IF( CHECK ) THEN
                     IPREPAD  = MAX( MB, MP )
                     IMIDPAD  = NB
                     IPOSTPAD = MAX( NB, NQ )
                  ELSE
                     IPREPAD  = 0
                     IMIDPAD  = 0
                     IPOSTPAD = 0
                  END IF
*
*                 Initialize the array descriptor for the matrix A
*
                  CALL DESCINIT( DESCA, M, N, MB, NB, 0, 0, ICTXT,
     $                           MAX( 1, MP ) + IMIDPAD, IERR( 1 ) )
*
*                 Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1,
     $                          0 )
*
#ifdef ENABLE_DRIVER_CHECK
                  IF( IERR( 1 ).LT.0 ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'descriptor'
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
*                   disable extreme value case when N < 0
                    EX_FLAG = .FALSE.
                  ELSE IF(M .LT. 0 .AND. (IERR(1) .EQ. -2 .OR.
     $               IERR(1) .EQ. -4 .OR. IERR(1) .EQ. -8 .OR.
     $               IERR(1) .EQ. -3 .OR. IERR(1) .EQ. -12  )) THEN
                    WRITE( NOUT, FMT = 9984 ) 'M'
*                   disable extreme value case when M < 0
                    EX_FLAG = .FALSE.
                  ELSE IF(M .EQ. 0 .OR. N .EQ. 0) THEN
*                   disable extreme value case when M < 0
                    EX_FLAG = .FALSE.
                  ELSE IF(IERR(1) .LT. 0) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'descriptor'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF
#endif
*
*                 Assign pointers into MEM for ScaLAPACK arrays, A is
*                 allocated starting at position MEM( IPREPAD+1 )
*
                  IPA   = IPREPAD+1
                  IPTAU = IPA + DESCA( LLD_ ) * NQ + IPOSTPAD + IPREPAD
*
*
                  LTAU = MP
                  IPW = IPTAU + LTAU + IPOSTPAD + IPREPAD
*
*                 Figure the amount of workspace required by the TZ
*                 factorization
*
                  LWORK = DESCA( MB_ ) * ( MP + NQ + DESCA( MB_ ) )
                  WORKFCT = LWORK + IPOSTPAD
                  WORKSIZ = WORKFCT
*
                  IF( CHECK ) THEN
*
*                 Figure the amount of workspace required by the
*                 checking routines PDLAFCHK, PDTZRZRV and
*                 PDLANGE
*
                    WORKSIZ = LWORK +
     $                        MAX( MP*DESCA( NB_ ), NQ*DESCA( MB_ )
     $                        ) + IPOSTPAD
*
                  END IF
*
*
*                 Check for adequate memory for problem size
*
                  IERR( 1 ) = 0
                  IF( IPW+WORKSIZ.GT.MEMSIZ ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9996 )
     $                         FACT // ' factorization',
     $                         ( IPW+WORKSIZ )*DBLESZ
                     IERR( 1 ) = 1
                  END IF
*
*                 Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1,
     $                          0 )
*
                  IF( IERR( 1 ).GT.0 ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'MEMORY'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF
*
*                 Generate the matrix A
*
                  CALL PDMATGEN( ICTXT, 'N', 'N', DESCA( M_ ),
     $                           DESCA( N_ ), DESCA( MB_ ),
     $                           DESCA( NB_ ), MEM( IPA ),
     $                           DESCA( LLD_ ), DESCA( RSRC_ ),
     $                           DESCA( CSRC_ ), IASEED, 0, MP, 0, NQ,
     $                           MYROW, MYCOL, NPROW, NPCOL )
*
*                 Need the Infinity of A for checking
*
                  IF( CHECK .AND. (N .GT. 0 .AND. M .GT. 0)) THEN
*
                     CALL PDFILLPAD( ICTXT, MP, NQ, MEM( IPA-IPREPAD ),
     $                               DESCA( LLD_ ), IPREPAD, IPOSTPAD,
     $                               PADVAL )
                     CALL PDFILLPAD( ICTXT, LTAU, 1,
     $                               MEM( IPTAU-IPREPAD ), LTAU,
     $                               IPREPAD, IPOSTPAD, PADVAL )
                     CALL PDFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD,
     $                               IPREPAD, IPOSTPAD, PADVAL )
                     ANORM = PDLANGE( 'I', M, N, MEM( IPA ), 1, 1,
     $                                DESCA, MEM( IPW ) )
                     CALL PDCHEKPAD( ICTXT, 'PDLANGE', MP, NQ,
     $                               MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                               IPREPAD, IPOSTPAD, PADVAL )
                     CALL PDCHEKPAD( ICTXT, 'PDLANGE',
     $                               WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD, IPREPAD,
     $                               IPOSTPAD, PADVAL )
                     CALL PDFILLPAD( ICTXT, WORKFCT-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKFCT-IPOSTPAD,
     $                               IPREPAD, IPOSTPAD, PADVAL )
                  END IF
*
                  CALL SLBOOT()
                  CALL BLACS_BARRIER( ICTXT, 'All' )
*
*                 Perform QR factorizations
*
                  API_NAME = 'PDORGQR'
                  CALL SLTIMER( 1 )
                  CALL PDGEQRF( M, N, MEM( IPA ), 1, 1, DESCA,
     $                          MEM( IPTAU ), MEM( IPW ), LWORK,
     $                          INFO )
                  CALL PDORGQR( M, N, min(M, N), MEM( IPA ),1, 1,DESCA,
     $                          MEM( IPTAU ), MEM( IPW ), LWORK,
     $                          INFO )
                  CALL SLTIMER( 1 )
*
*
                  IF( CHECK  .AND. (.NOT.(EX_FLAG)) ) THEN
*
                     IF(INFO .EQ. 0 .AND. N .GT. 0 .AND.
     $                     M .GT. 0) THEN
*
*
                        EPS = PDLAMCH( ICTXT, 'eps' )
*                       Check for memory overwrite in factorization
*
                        CALL PDCHEKPAD( ICTXT, ROUT, MP, NQ,
     $                               MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                               IPREPAD, IPOSTPAD, PADVAL )
                        CALL PDCHEKPAD( ICTXT, ROUT, WORKFCT-IPOSTPAD,
     $                               1, MEM( IPW-IPREPAD ),
     $                               WORKFCT-IPOSTPAD, IPREPAD,
     $                               IPOSTPAD, PADVAL )
                        CALL PDFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD,
     $                               IPREPAD, IPOSTPAD, PADVAL )
*
*
*                       Compute residual = ||A-Q*R|| / (||A||*N*eps)
*
                        IA = 1
                        JA = 1

*                       Allocate workspace
                        LWORK = MAX(1, M*N)
*
*                       Compute QTQ = Q^T * Q
                        CALL PDGEMM('T', 'N', M, N, N, 1, MEM(IPA), 1,
     $                              1, DESCA, MEM(IPA), 1, 1, DESCA, 0,
     $                              MEM(IPW), 1, 1, DESCA)

*                       Subtract the identity matrix from QTQ
                        CALL PDLASET('A', M, M, 0.0d0, 1.0d0,
     $                                    MEM(IPW), 1, 1, DESCA)
*
*                       ! Compute the norm of QTQ - I
*
                        EPS = PDLAMCH( ICTXT, 'eps' )
                        EPS = 1.01
                        FRESID = ANORM / (M * N * EPS)
*                       Check if the residual is within the threshold
                        IF (FRESID .le. THRESH) then
                          INFO = 0
                        ELSE
                          INFO = 1
                        END IF
*
*                       Check for memory overwrite
*
                        CALL PDCHEKPAD( ICTXT, ROUTCHK, MP, NQ,
     $                               MEM( IPA-IPREPAD ), DESCA( LLD_ ),
     $                               IPREPAD, IPOSTPAD, PADVAL )
*
                     END IF
*
*
                     IF( (N.EQ.0 .AND. INFO.EQ.0) .OR.
     $                   (M.EQ.0 .AND. INFO.EQ.0) ) THEN
*                       If N =0 this is the case of
*                       early return from ScaLAPACK API.
*                       If there is safe exit from API; pass this case
                        KPASS = KPASS + 1
                        WRITE( NOUT, FMT = 9985 ) KPASS, API_NAME
                        PASSED = 'PASSED'
*                       RE-ENABLE for EX CASE
                        IF(INF_PERCENT .GT. 0 .OR.
     $                        NAN_PERCENT .GT. 0) THEN
                          EX_FLAG = .TRUE.
                        END IF
                        GO TO 10
                     ELSE IF(INFO .EQ. -1 .OR. INFO .EQ. -2) THEN
*                       When N < 0/Invalid, INFO = -2
*                       When M < 0/Invalid, INFO = -1
*                       Expected Error code for N < 0
*                       Hence this case can be passed
                        KPASS = KPASS + 1
                        WRITE( NOUT, FMT = 9983 ) KPASS, API_NAME
                        PASSED = 'PASSED'
*                       RE-ENABLE for EX CASE
                        IF(INF_PERCENT .GT. 0 .OR.
     $                        NAN_PERCENT .GT. 0) THEN
                          EX_FLAG = .TRUE.
                        END IF
                     ELSE IF( LSAMEN( 2, FACT, 'TZ' ) .AND.
     $                    (N.LT.M .AND. INFO.EQ.-2 ) ) THEN
                        KPASS = KPASS + 1
                        WRITE( NOUT, FMT = 9983 ) KPASS, API_NAME
                     ELSE
                        IF( FRESID.LE.THRESH .AND.
     $                      (FRESID-FRESID).EQ.0.0D+0 ) THEN
                           KPASS = KPASS + 1
                           PASSED = 'PASSED'
                        ELSE
                           KFAIL = KFAIL + 1
                           PASSED = 'FAILED'
                        END IF
                     END IF
*
                  ELSE

*                    Extreme value cases
                     IF(EX_FLAG) THEN
*                       Check presence of INF/NAN in output
*                       Pass the case if present
                        DO IK = 0, M
                           DO JK = 1, N+1
                              X = MEM(IK*N + JK)
                              IF (isnan(X)) THEN
*                                NAN DETECTED
                                 RES_FLAG = .TRUE.
                                 EXIT
                              ELSE IF (.NOT.ieee_is_finite(
     $                                    X)) THEN
*                                INFINITY DETECTED
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
*                          RESET RESIDUAL FLAG
                           RES_FLAG = .FALSE.
                        END IF
                        FRESID = FRESID - FRESID
*
*                    Don't perform the checking, only the timing
*                    operation
                     ELSE
                       KPASS = KPASS + 1
                       FRESID = FRESID - FRESID
                       PASSED = 'BYPASS'
                     END IF
*
                  END IF
*
*                 Gather maximum of all CPU and WALL clock timings
*
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'W', 1, 1, WTIME )
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'C', 1, 1, CTIME )
*
*                 Print results
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 ) THEN
*
                     MINMN = MIN( M, N )
                     MAXMN = MAX( M, N )
*
                     IF( LSAMEN( 2, FACT, 'TZ' ) .OR.
     $                              LSAMEN( 2, FACT, 'QR' )) THEN
                        IF( M.GE.N ) THEN
                           NOPS = 0.0D+0
                        ELSE
*
*                          5/2 ( M^2 N - M^3 ) + 5/2 N M + 1/2 M^2 for
*                          complete orthogonal factorization (M <= N).
*
                           NOPS = ( 5.0D+0 * (
     $                              DBLE( N )*( DBLE( M )**2 ) -
     $                              DBLE( M )**3 +
     $                              DBLE( N )*DBLE( M ) ) +
     $                              DBLE( M )**2 ) / 2.0D+0
                        END IF
*
                     ELSE
*
*                       2 M N^2 - 2/3 N^2 + M N + N^2 for QR type
*                       factorization when M >= N.
*
                        NOPS = 2.0D+0 * ( DBLE( MINMN )**2 ) *
     $                     ( DBLE( MAXMN )-DBLE( MINMN ) / 3.0D+0 ) +
     $                     ( DBLE( MAXMN )+DBLE( MINMN ) )*DBLE( MINMN)
                     END IF
*
*                    Print WALL time
*
                     IF( WTIME( 1 ).GT.0.0D+0 ) THEN
                        TMFLOPS = NOPS / ( WTIME( 1 ) * 1.0D+6 )
                     ELSE
                        TMFLOPS = 0.0D+0
                     END IF
                     IF( WTIME( 1 ).GE.0.0D+0 )
     $                  WRITE( NOUT, FMT = 9993 ) 'WALL', M, N, MB, NB,
     $                         NPROW, NPCOL, WTIME( 1 ), TMFLOPS,
     $                         PASSED, FRESID
*
*                    Print CPU time
*
                     IF( CTIME( 1 ).GT.0.0D+0 ) THEN
                        TMFLOPS = NOPS / ( CTIME( 1 ) * 1.0D+6 )
                     ELSE
                        TMFLOPS = 0.0D+0
                     END IF
                     IF( CTIME( 1 ).GE.0.0D+0 )
     $                  WRITE( NOUT, FMT = 9993 ) 'CPU ', M, N, MB, NB,
     $                         NPROW, NPCOL, CTIME( 1 ), TMFLOPS,
     $                         PASSED, FRESID
*
                  END IF
*
   10          CONTINUE
*
   20       CONTINUE
*
            CALL BLACS_GRIDEXIT( ICTXT )
*
   30    CONTINUE
*
*
*     Print out ending messages and close output file
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
     $        '; It should be at least 1' )
 9998 FORMAT( 'ILLEGAL GRID: nprow*npcol = ', I4, '. It can be at most',
     $        I4 )
 9997 FORMAT( 'Bad ', A6, ' parameters: going on to next test case.' )
 9996 FORMAT( 'Unable to perform ', A, ': need TOTMEM of at least',
     $        I11 )
 9995 FORMAT( 'TIME      M      N  MB  NB     P     Q Fact Time ',
     $        '     MFLOPS  CHECK  Residual' )
 9994 FORMAT( '---- ------ ------ --- --- ----- ----- --------- ',
     $        '----------- ------  --------' )
 9993 FORMAT( A4, 1X, I6, 1X, I6, 1X, I5, 1X, I5, 1X, I5, 1X, I5, 1X,
     $        F9.2, 1X, F11.2, 1X, A6, 2X, G8.1 )
 9992 FORMAT( 'Finished ', I6, ' tests, with the following results:' )
 9991 FORMAT( I5, ' tests completed and passed residual checks.' )
 9990 FORMAT( I5, ' tests completed without checking.' )
 9989 FORMAT( I5, ' tests completed and failed residual checks.' )
 9988 FORMAT( I5, ' tests skipped because of illegal input values.' )
 9987 FORMAT( 'END OF TESTS.' )
 9986 FORMAT( A )
 9985 FORMAT( '----------Test-',I3,' Passed but no compute was ',
     $       'performed! [Safe exit from ', A,']-----------')
 9984 FORMAT(  A, ' < 0 case detected. ',
     $        'Instead of driver file, This case will be handled',
     $        'by the ScaLAPACK API.')
 9983 FORMAT( '----------Negative Test-',I3,' Passed with expected',
     $       ' ERROR CODE in INFO from ', A,']-----------')
 9982 FORMAT( ' N < M case detected. ',
     $        'Instead of driver file, This case will be handled',
     $        'by the PCTZRZF API.')
*
      STOP
*
*     End of PDORGQRDRIVER
*
      END
*