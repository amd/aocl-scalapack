      PROGRAM PZINVDRIVER
*
*  -- ScaLAPACK testing driver (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
*  Purpose
*  =======
*
*  PZINVDRIVER is the main test program for the COMPLEX*16
*  SCALAPACK matrix inversion routines.  This test driver computes the
*  inverse of different kind of matrix and tests the results.
*
*  The program must be driven by a short data file. An annotated example
*  of a data file can be obtained by deleting the first 3 characters
*  from the following 14 lines:
*  'ScaLAPACK Matrix Inversion Testing input file'
*  'PVM machine.'
*  'INV.out'                   output file name (if any)
*  6                           device out
*  5                           number of matrix types (next line)
*  'GEN' 'UTR' 'LTR' 'UPD' LPD' GEN, UTR, LTR, UPD, LPD
*  4                           number of problems sizes
*  1000 2000 3000 4000         values of N
*  3                           number of NB's
*  4 30 35                     values of NB
*  2                           number of process grids (ordered P & Q)
*  4 2                         values of P
*  4 4                         values of Q
*  1.0                         threshold
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
*  ZPLXSZ   INTEGER, default = 16 bytes.
*           INTGSZ, DBLESZ and ZPLXSZ indicate the length in bytes on
*           the given platform for an integer, a double precision real
*           and a double precision complex.
*  MEM      COMPLEX*16 array, dimension ( TOTMEM / ZPLXSZ )
*
*           All arrays used by SCALAPACK routines are allocated from
*           this array and referenced by pointers.  The integer IPA,
*           for example, is a pointer to the starting element of MEM for
*           the matrix A.
*
*  =====================================================================
*
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
#ifndef DYNAMIC_WORK_MEM_ALLOC
      INTEGER            DBLESZ, MEMSIZ, NTESTS, TOTMEM, ZPLXSZ
      COMPLEX*16         PADVAL, ZERO
      PARAMETER          ( DBLESZ = 8, TOTMEM = 2000000,
     $                     ZPLXSZ = 16, MEMSIZ = TOTMEM / ZPLXSZ,
     $                     NTESTS = 20,
     $                     PADVAL = ( -9923.0D+0, -9923.0D+0 ),
     $                     ZERO = ( 0.0D+0, 0.0D+0 ) )
#else
      INTEGER            DBLESZ, NTESTS, TOTMEM, ZPLXSZ
	  INTEGER, PARAMETER ::  MEMSIZ = 2100000000
      COMPLEX*16         PADVAL, ZERO
      PARAMETER          ( DBLESZ = 8, TOTMEM = 2000000,
     $                     ZPLXSZ = 16, 
     $                     NTESTS = 20,
     $                     PADVAL = ( -9923.0D+0, -9923.0D+0 ),
     $                     ZERO = ( 0.0D+0, 0.0D+0 ) )
#endif
*     ..
*     .. Local Scalars ..
      CHARACTER          UPLO
      CHARACTER*3        MTYP
      CHARACTER*6        PASSED
      CHARACTER*80       OUTFILE
      LOGICAL            CHECK
      INTEGER            I, IAM, IASEED, ICTXT, IMIDPAD, INFO, IPA,
     $                   IPPIV, IPREPAD, IPOSTPAD, IPIW, IPW, ITEMP, J,
     $                   K, KTESTS, KPASS, KFAIL, KSKIP, L, LCM, LIPIV,
     $                   LIWORK, LWORK, MYCOL, MYROW, N, NB, NGRIDS,
     $                   NMAT, NMTYP, NNB, NOUT, NP, NPCOL, NPROCS,
     $                   NPROW, NQ, WORKIINV, WORKINV, WORKSIZ
      REAL               THRESH
      DOUBLE PRECISION   ANORM, FRESID, NOPS, RCOND, TMFLOPS
*     ..
*     .. Local Arrays ..
      CHARACTER*3        MATTYP( NTESTS )
      INTEGER            DESCA( DLEN_ ), IERR( 1 ), NBVAL( NTESTS ),
     $                   NVAL( NTESTS ), PVAL( NTESTS ),
     $                   QVAL( NTESTS )
      DOUBLE PRECISION   CTIME( 2 ), WTIME( 2 )
#ifndef DYNAMIC_WORK_MEM_ALLOC
      COMPLEX*16         MEM( MEMSIZ )
#else
      COMPLEX*16, allocatable :: MEM (:)
#endif
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_BARRIER, BLACS_EXIT, BLACS_GET,
     $                   BLACS_GRIDEXIT, BLACS_GRIDINFO, BLACS_GRIDINIT,
     $                   BLACS_PINFO, DESCINIT, IGSUM2D, PZCHEKPAD,
     $                   PZFILLPAD, PZGETRF, PZGETRI,
     $                   PZINVCHK, PZINVINFO, PZLASET,
     $                   PZMATGEN, PZPOTRF, PZPOTRI,
     $                   PZTRTRI, SLBOOT, SLCOMBINE, SLTIMER
*     ..
*     .. External Functions ..
      LOGICAL            LSAMEN
      INTEGER            ICEIL, ILCM, NUMROC
      DOUBLE PRECISION   PZLANGE, PZLANHE, PZLANSY, PZLANTR
      EXTERNAL           ICEIL, ILCM, LSAMEN, NUMROC, PZLANGE,
     $                   PZLANHE, PZLANSY, PZLANTR
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          DBLE, MAX
*     ..
*     .. Data Statements ..
      DATA               KTESTS, KPASS, KFAIL, KSKIP /4*0/
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
      CALL PZINVINFO( OUTFILE, NOUT, NMTYP, MATTYP, NTESTS, NMAT, NVAL,
     $                NTESTS, NNB, NBVAL, NTESTS, NGRIDS, PVAL, NTESTS,
     $                QVAL, NTESTS, THRESH, MEM, IAM, NPROCS )
      CHECK = ( THRESH.GE.0.0E+0 )
*
*     Loop over the different matrix types
*
      DO 40 I = 1, NMTYP
*
         MTYP = MATTYP( I )
*
*        Print headings
*
         IF( IAM.EQ.0 ) THEN
            WRITE( NOUT, FMT = * )
            IF( LSAMEN( 3, MTYP, 'GEN' ) ) THEN
               WRITE( NOUT, FMT = 9986 )
     $                'A is a general matrix.'
            ELSE IF( LSAMEN( 3, MTYP, 'UTR' ) ) THEN
               WRITE( NOUT, FMT = 9986 )
     $               'A is an upper triangular matrix.'
            ELSE IF( LSAMEN( 3, MTYP, 'LTR' ) ) THEN
               WRITE( NOUT, FMT = 9986 )
     $               'A is a lower triangular matrix.'
            ELSE IF( LSAMEN( 3, MTYP, 'UPD' ) ) THEN
               WRITE( NOUT, FMT = 9986 )
     $               'A is a Hermitian positive definite matrix.'
               WRITE( NOUT, FMT = 9986 )
     $               'Only the upper triangular part will be '//
     $               'referenced.'
            ELSE IF( LSAMEN( 3, MTYP, 'LPD' ) ) THEN
               WRITE( NOUT, FMT = 9986 )
     $               'A is a Hermitian positive definite matrix.'
               WRITE( NOUT, FMT = 9986 )
     $               'Only the lower triangular part will be '//
     $               'referenced.'
            END IF
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
               N = NVAL( K )
*
*              Make sure matrix information is correct
*
               IERR( 1 ) = 0
               IF( N.LT.1 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9999 ) 'MATRIX', 'N', N
                  IERR( 1 ) = 1
               END IF
*
*              Make sure no one had error
*
               CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1, 0 )
*
               IF( IERR( 1 ).GT.0 ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 ) 'matrix'
                  KSKIP = KSKIP + 1
                  GO TO 20
               END IF
*
*              Loop over different blocking sizes
*
               DO 10 L = 1, NNB
*
                  NB = NBVAL( L )
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
                  NP = NUMROC( N, NB, MYROW, 0, NPROW )
                  NQ = NUMROC( N, NB, MYCOL, 0, NPCOL )
                  IF( CHECK ) THEN
                     IPREPAD  = MAX( NB, NP )
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
                  CALL DESCINIT( DESCA, N, N, NB, NB, 0, 0, ICTXT,
     $                           MAX( 1, NP ) + IMIDPAD, IERR( 1 ) )
*
*                 Check all processes for an error
*
                  CALL IGSUM2D( ICTXT, 'All', ' ', 1, 1, IERR, 1, -1,
     $                          0 )
*
                  IF( IERR( 1 ).LT.0 ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9997 ) 'descriptor'
                     KSKIP = KSKIP + 1
                     GO TO 10
                  END IF
*
*                 Assign pointers into MEM for ScaLAPACK arrays, A is
*                 allocated starting at position MEM( IPREPAD+1 )
*
                  IPA = IPREPAD+1
*
                  LCM = ILCM( NPROW, NPCOL )
                  IF( LSAMEN( 3, MTYP, 'GEN' ) ) THEN
*
*                    Pivots are needed by LU factorization
*
                     IPPIV = IPA + DESCA( LLD_ ) * NQ + IPOSTPAD +
     $                       IPREPAD
                     LIPIV = ICEIL( INTGSZ * ( NP + NB ), ZPLXSZ )
                     IPW = IPPIV + LIPIV + IPOSTPAD + IPREPAD
*
                     LWORK = MAX( 1, NP * DESCA( NB_ ) )
                     WORKINV = LWORK + IPOSTPAD
*
*                    Figure the amount of workspace required by the
*                    general matrix inversion
*
                     IF( NPROW.EQ.NPCOL ) THEN
                        LIWORK = NQ + DESCA( NB_ )
                     ELSE
*
* change the integer workspace needed for PDGETRI
*                        LIWORK = MAX( DESCA( NB_ ), DESCA( MB_ ) *
*     $                           ICEIL( ICEIL( DESCA( LLD_ ),
*     $                                  DESCA( MB_ ) ), LCM / NPROW ) )
*     $                                  + NQ
                         LIWORK = NUMROC( DESCA( M_ ) +
     $                  DESCA( MB_ ) * NPROW
     $                  + MOD ( 1 - 1, DESCA( MB_ ) ), DESCA ( NB_ ),
     $                  MYCOL, DESCA( CSRC_ ), NPCOL ) +
     $                  MAX ( DESCA( MB_ ) * ICEIL ( ICEIL(
     $                  NUMROC( DESCA( M_ ) + DESCA( MB_ ) * NPROW,
     $                  DESCA( MB_ ), MYROW, DESCA( RSRC_ ), NPROW ),
     $                  DESCA( MB_ ) ), LCM / NPROW ), DESCA( NB_ ) )
*
                     END IF
                     WORKIINV = ICEIL( LIWORK*INTGSZ, ZPLXSZ ) +
     $                          IPOSTPAD
                     IPIW = IPW + WORKINV + IPREPAD
                     WORKSIZ = WORKINV + IPREPAD + WORKIINV
*
                  ELSE
*
*                    No pivots or workspace needed for triangular or
*                    Hermitian positive definite matrices.
*
                     IPW = IPA + DESCA( LLD_ ) * NQ + IPOSTPAD + IPREPAD
                     WORKSIZ = 1 + IPOSTPAD
*
                  END IF
*
                  IF( CHECK ) THEN
*
*                    Figure amount of work space for the norm
*                    computations
*
                     IF( LSAMEN( 3, MTYP, 'GEN'       ).OR.
     $                   LSAMEN( 2, MTYP( 2:3 ), 'TR' ) ) THEN
                        ITEMP = NQ
                     ELSE
                        ITEMP = 2 * NQ + NP
                        IF( NPROW.NE.NPCOL ) THEN
                           ITEMP = ITEMP +
     $                             NB * ICEIL( ICEIL( NP, NB ),
     $                                         LCM / NPROW )
                        END IF
                     END IF
                     WORKSIZ = MAX( WORKSIZ-IPOSTPAD,
     $                              ICEIL( DBLESZ * ITEMP, ZPLXSZ ) )
*
*                    Figure the amount of workspace required by the
*                    checking routine
*
                     WORKSIZ = MAX( WORKSIZ, 2 * NB * MAX( 1, NP ) ) +
     $                         IPOSTPAD
*
                  END IF
*
*                 Check for adequate memory for problem size
*
                  IERR( 1 ) = 0
                  IF( IPW+WORKSIZ.GT.MEMSIZ ) THEN
                     IF( IAM.EQ.0 )
     $                  WRITE( NOUT, FMT = 9996 ) 'inversion',
     $                         ( IPW + WORKSIZ ) * ZPLXSZ
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
                  IF( LSAMEN( 3, MTYP, 'GEN'       ).OR.
     $                LSAMEN( 2, MTYP( 2:3 ), 'TR' ) ) THEN
*
*                    Generate a general diagonally dominant matrix A
*
                     CALL PZMATGEN( ICTXT, 'N', 'D', DESCA( M_ ),
     $                              DESCA( N_ ), DESCA( MB_ ),
     $                              DESCA( NB_ ), MEM( IPA ),
     $                              DESCA( LLD_ ), DESCA( RSRC_ ),
     $                              DESCA( CSRC_ ), IASEED, 0, NP, 0,
     $                              NQ, MYROW, MYCOL, NPROW, NPCOL )
*
                  ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'PD' ) ) THEN
*
*                    Generate a Hermitian positive definite matrix A
*
                     CALL PZMATGEN( ICTXT, 'H', 'D', DESCA( M_ ),
     $                              DESCA( N_ ), DESCA( MB_ ),
     $                              DESCA( NB_ ), MEM( IPA ),
     $                              DESCA( LLD_ ), DESCA( RSRC_ ),
     $                              DESCA( CSRC_ ), IASEED, 0, NP, 0,
     $                              NQ, MYROW, MYCOL, NPROW, NPCOL )
*
                  END IF
*
*                 Zeros not-referenced part of A, if any.
*
                  IF( LSAMEN( 1, MTYP, 'U' ) ) THEN
*
                     UPLO = 'U'
                     CALL PZLASET( 'Lower', N-1, N-1, ZERO, ZERO,
     $                             MEM( IPA ), 2, 1, DESCA )
*
                  ELSE IF( LSAMEN( 1, MTYP, 'L' ) ) THEN
*
                     UPLO = 'L'
                     CALL PZLASET( 'Upper', N-1, N-1, ZERO, ZERO,
     $                             MEM( IPA ), 1, 2, DESCA )
*
                  ELSE
*
                     UPLO = 'G'
*
                  END IF
*
*                 Need 1-norm of A for checking
*
                  IF( CHECK ) THEN
*
                     CALL PZFILLPAD( ICTXT, NP, NQ, MEM( IPA-IPREPAD ),
     $                               DESCA( LLD_ ), IPREPAD, IPOSTPAD,
     $                               PADVAL )
                     CALL PZFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD, IPREPAD,
     $                               IPOSTPAD, PADVAL )
*
                     IF( LSAMEN( 3, MTYP, 'GEN' ) ) THEN
*
                        CALL PZFILLPAD( ICTXT, LIPIV, 1,
     $                                 MEM( IPPIV-IPREPAD ), LIPIV,
     $                                 IPREPAD, IPOSTPAD, PADVAL )
                        ANORM = PZLANGE( '1', N, N, MEM( IPA ), 1, 1,
     $                                   DESCA, MEM( IPW ) )
                        CALL PZCHEKPAD( ICTXT, 'PZLANGE', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZLANGE',
     $                                  WORKSIZ-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKSIZ-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZFILLPAD( ICTXT, WORKINV-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKINV-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZFILLPAD( ICTXT, WORKIINV-IPOSTPAD, 1,
     $                                 MEM( IPIW-IPREPAD ),
     $                                 WORKIINV-IPOSTPAD, IPREPAD,
     $                                 IPOSTPAD, PADVAL )
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'TR' ) ) THEN
*
                        ANORM = PZLANTR( '1', UPLO, 'Non unit', N, N,
     $                                   MEM( IPA ), 1, 1, DESCA,
     $                                   MEM( IPW ) )
                        CALL PZCHEKPAD( ICTXT, 'PZLANTR', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZLANTR',
     $                                  WORKSIZ-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKSIZ-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
*
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'PD' ) ) THEN
*
                        ANORM = PZLANHE( '1', UPLO, N, MEM( IPA ), 1, 1,
     $                                   DESCA, MEM( IPW ) )
                        CALL PZCHEKPAD( ICTXT, 'PZLANHE', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZLANHE',
     $                                  WORKSIZ-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKSIZ-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
*
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'SY' ) ) THEN
*
                        CALL PZFILLPAD( ICTXT, LIPIV, 1,
     $                                  MEM( IPPIV-IPREPAD ), LIPIV,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        ANORM = PZLANSY( '1', UPLO, N, MEM( IPA ), 1, 1,
     $                                   DESCA, MEM( IPW ) )
                        CALL PZCHEKPAD( ICTXT, 'PZLANSY', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZLANSY',
     $                                  WORKSIZ-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKSIZ-IPOSTPAD,
     $                                  IPREPAD,IPOSTPAD, PADVAL )
*
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'HE' ) ) THEN
                        CALL PZFILLPAD( ICTXT, LIPIV, 1,
     $                                  MEM( IPPIV-IPREPAD ), LIPIV,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        ANORM = PZLANHE( '1', UPLO, N, MEM( IPA ), 1, 1,
     $                                   DESCA, MEM( IPW ) )
                        CALL PZCHEKPAD( ICTXT, 'PZLANHE', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZLANHE',
     $                                  WORKSIZ-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKSIZ-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
*
                     END IF
*
                  END IF
*
                  CALL SLBOOT()
                  CALL BLACS_BARRIER( ICTXT, 'All' )
*
                  IF( LSAMEN( 3, MTYP, 'GEN' ) ) THEN
*
*                    Perform LU factorization
*
                     CALL SLTIMER( 1 )
                     CALL PZGETRF( N, N, MEM( IPA ), 1, 1, DESCA,
     $                             MEM( IPPIV ), INFO )
                     CALL SLTIMER( 1 )
*
                     IF( CHECK ) THEN
*
*                       Check for memory overwrite
*
                        CALL PZCHEKPAD( ICTXT, 'PZGETRF', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZGETRF', LIPIV, 1,
     $                                  MEM( IPPIV-IPREPAD ), LIPIV,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                     END IF
*
*                    Perform the general matrix inversion
*
                     CALL SLTIMER( 2 )
                     CALL PZGETRI( N, MEM( IPA ), 1, 1, DESCA,
     $                             MEM( IPPIV ), MEM( IPW ), LWORK,
     $                             MEM( IPIW ), LIWORK, INFO )
                     CALL SLTIMER( 2 )
*
                     IF( CHECK ) THEN
*
*                       Check for memory overwrite
*
                        CALL PZCHEKPAD( ICTXT, 'PZGETRI', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZGETRI', LIPIV, 1,
     $                                  MEM( IPPIV-IPREPAD ), LIPIV,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZGETRI',
     $                                  WORKIINV-IPOSTPAD, 1,
     $                                  MEM( IPIW-IPREPAD ),
     $                                  WORKIINV-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                        CALL PZCHEKPAD( ICTXT, 'PZGETRI',
     $                                  WORKINV-IPOSTPAD, 1,
     $                                  MEM( IPW-IPREPAD ),
     $                                  WORKINV-IPOSTPAD,
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                     END IF
*
                  ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'TR' ) ) THEN
*
*                    Perform the general matrix inversion
*
                     CALL SLTIMER( 2 )
                     CALL PZTRTRI( UPLO, 'Non unit', N, MEM( IPA ), 1,
     $                             1, DESCA, INFO )
                     CALL SLTIMER( 2 )
*
                     IF( CHECK ) THEN
*
*                       Check for memory overwrite
*
                        CALL PZCHEKPAD( ICTXT, 'PZTRTRI', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                     END IF
*
                  ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'PD' ) ) THEN
*
*                    Perform Cholesky factorization
*
                     CALL SLTIMER( 1 )
                     CALL PZPOTRF( UPLO, N, MEM( IPA ), 1, 1, DESCA,
     $                             INFO )
                     CALL SLTIMER( 1 )
*
                     IF( CHECK ) THEN
*
*                       Check for memory overwrite
*
                        CALL PZCHEKPAD( ICTXT, 'PZPOTRF', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                     END IF
*
*                    Perform the Hermitian positive definite matrix
*                    inversion
*
                     CALL SLTIMER( 2 )
                     CALL PZPOTRI( UPLO, N, MEM( IPA ), 1, 1, DESCA,
     $                             INFO )
                     CALL SLTIMER( 2 )
*
                     IF( CHECK ) THEN
*
*                       Check for memory overwrite
*
                        CALL PZCHEKPAD( ICTXT, 'PZPOTRI', NP, NQ,
     $                                  MEM( IPA-IPREPAD ),
     $                                  DESCA( LLD_ ),
     $                                  IPREPAD, IPOSTPAD, PADVAL )
                     END IF
*
                  END IF
*
                  IF( CHECK ) THEN
*
                     CALL PZFILLPAD( ICTXT, WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD, IPREPAD,
     $                               IPOSTPAD, PADVAL )
*
*                    Compute fresid = || inv(A)*A-I ||
*
                     CALL PZINVCHK( MTYP, N, MEM( IPA ), 1, 1, DESCA,
     $                              IASEED, ANORM, FRESID, RCOND,
     $                              MEM( IPW ) )
*
*                    Check for memory overwrite
*
                     CALL PZCHEKPAD( ICTXT, 'PZINVCHK', NP, NQ,
     $                               MEM( IPA-IPREPAD ),
     $                               DESCA( LLD_ ),
     $                               IPREPAD, IPOSTPAD, PADVAL )
                     CALL PZCHEKPAD( ICTXT, 'PZINVCHK',
     $                               WORKSIZ-IPOSTPAD, 1,
     $                               MEM( IPW-IPREPAD ),
     $                               WORKSIZ-IPOSTPAD, IPREPAD,
     $                               IPOSTPAD, PADVAL )
*
*                    Test residual and detect NaN result
*
                     IF( FRESID.LE.THRESH .AND. INFO.EQ.0 .AND.
     $                   ( (FRESID-FRESID) .EQ. 0.0D+0 ) ) THEN
                        KPASS = KPASS + 1
                        PASSED = 'PASSED'
                     ELSE
                        KFAIL = KFAIL + 1
                        IF( INFO.GT.0 ) THEN
                           PASSED = 'SINGUL'
                        ELSE
                           PASSED = 'FAILED'
                        END IF
                     END IF
*
                  ELSE
*
*                    Don't perform the checking, only the timing
*                    operation
*
                     KPASS = KPASS + 1
                     FRESID = FRESID - FRESID
                     PASSED = 'BYPASS'
*
                  END IF
*
*                 Gather maximum of all CPU and WALL clock timings
*
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'W', 2, 1, WTIME )
                  CALL SLCOMBINE( ICTXT, 'All', '>', 'C', 2, 1, CTIME )
*
*                 Print results
*
                  IF( MYROW.EQ.0 .AND. MYCOL.EQ.0  ) THEN
*
                     IF( LSAMEN( 3, MTYP, 'GEN' ) ) THEN
*
*                       8/3 N^3 - N^2 flops for LU factorization
*
                        NOPS = ( 8.0D+0 / 3.0D+0 ) * ( DBLE( N )**3 ) -
     $                         DBLE( N )**2
*
*                       16/3 N^3 for matrix inversion
*
                        NOPS = NOPS +
     $                         ( 16.0D+0 / 3.0D+0 ) * ( DBLE( N )**3 )
*
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'TR' ) ) THEN
*
*                       4/3 N^3 + 2 N^2 for triangular matrix inversion
*
                        CTIME(1) = 0.0D+0
                        WTIME(1) = 0.0D+0
                        NOPS = ( 4.0D+0 / 3.0D+0 ) * ( DBLE( N )**3 ) +
     $                         2.0D+0 * ( DBLE( N )**2 )
*
                     ELSE IF( LSAMEN( 2, MTYP( 2:3 ), 'PD' ) ) THEN
*
*                       4/3 N^3 + 3 N^2 flops for Cholesky factorization
*
                        NOPS = ( 4.0D+0 / 3.0D+0 ) * ( DBLE( N )**3 ) +
     $                         2.0D+0 * ( DBLE( N )**2 )
*
*                       8/3 N^3  + 5 N^2 flops for Cholesky inversion
*
                        NOPS = NOPS +
     $                         ( 8.0D+0 / 3.0D+0 ) * ( DBLE( N )**3 ) +
     $                         5.0D+0 * ( DBLE( N )**2 )
*
                     END IF
*
*                    Figure total megaflops -- factorization and
*                    inversion, for WALL and CPU time, and print
*                    output.
*
*                    Print WALL time if machine supports it
*
                     IF( WTIME( 1 ) + WTIME( 2 ) .GT. 0.0D+0 ) THEN
                        TMFLOPS = NOPS /
     $                            ( ( WTIME( 1 )+WTIME( 2 ) ) * 1.0D+6 )
                     ELSE
                        TMFLOPS = 0.0D+0
                     END IF
*
                     IF( WTIME( 2 ) .GE. 0.0D+0 )
     $                  WRITE( NOUT, FMT = 9993 ) 'WALL', N, NB, NPROW,
     $                         NPCOL, WTIME( 1 ), WTIME( 2 ), TMFLOPS,
     $                         RCOND, FRESID, PASSED
*
*                    Print CPU time if machine supports it
*
                     IF( CTIME( 1 ) + CTIME( 2 ) .GT. 0.0D+0 ) THEN
                        TMFLOPS = NOPS /
     $                            ( ( CTIME( 1 )+CTIME( 2 ) ) * 1.0D+6 )
                     ELSE
                        TMFLOPS = 0.0D+0
                     END IF
*
                     IF( CTIME( 2 ) .GE. 0.0D+0 )
     $                  WRITE( NOUT, FMT = 9993 ) 'CPU ', N, NB, NPROW,
     $                         NPCOL, CTIME( 1 ), CTIME( 2 ), TMFLOPS,
     $                         RCOND, FRESID, PASSED
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
   40 CONTINUE
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
 9995 FORMAT( 'TIME     N  NB     P     Q Fct Time Inv Time ',
     $        '     MFLOPS    Cond   Resid  CHECK' )
 9994 FORMAT( '---- ----- --- ----- ----- -------- -------- ',
     $        '----------- ------- ------- ------' )
 9993 FORMAT( A4, 1X, I5, 1X, I5, 1X, I5, 1X, I5, 1X, F8.2, 1X, F8.2,
     $        1X, F12.2, 1X, F7.1, 1X, F7.2, 1X, A6 )
 9992 FORMAT( 'Finished ', I6, ' tests, with the following results:' )
 9991 FORMAT( I5, ' tests completed and passed residual checks.' )
 9990 FORMAT( I5, ' tests completed without checking.' )
 9989 FORMAT( I5, ' tests completed and failed residual checks.' )
 9988 FORMAT( I5, ' tests skipped because of illegal input values.' )
 9987 FORMAT( 'END OF TESTS.' )
 9986 FORMAT( A )
*
      STOP
*
*     End of PZINVDRIVER
*
      END
