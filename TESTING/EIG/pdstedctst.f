      SUBROUTINE PDSTEDCTST( DESCA, UPLO, N, MATTYPE, SUBTESTS, THRESH,
     $                     ORDER, ABSTOL, ISEED, A, COPYA, Z, LDA, WIN,
     $                     WNEW, IFAIL, ICLUSTR, GAP, IPREPAD, IPOSTPAD,
     $                     WORK, LWORK, IWORK, LIWORK, HETERO, NOUT,
     $                     INFO )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     August 14, 2001
*     Modifications Copyright (c) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.
*
      IMPLICIT NONE
*     .. Scalar Arguments ..
      CHARACTER          HETERO, SUBTESTS, UPLO
      INTEGER            INFO, IPOSTPAD, IPREPAD, LDA, LIWORK, LWORK,
     $                   MATTYPE, N, NOUT, ORDER
      DOUBLE PRECISION   ABSTOL, THRESH
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), ICLUSTR( * ), IFAIL( * ),
     $                   ISEED( 4 ), IWORK( * )
      DOUBLE PRECISION   A( LDA, * ), COPYA( LDA, * ), GAP( * ),
     $                   WIN( * ), WNEW( * ), WORK( * ), Z( LDA, * )
*     ..
*
*  Purpose
*  =======
*
*  PDSTEDCTST builds a random matrix, runs PDSTEDC to
*  compute the eigenvalues
*  and eigenvectors and then performs two tests to
*  determine if the result
*  is good enough.  The two tests are:
*       |AQ -QL| / (abstol + ulp * norm(A) )
*  and
*       |QT * Q - I| / ulp * norm(A)
*
*  The random matrix built depends upon the following parameters:
*     N, NB, ISEED, ORDER
*
*  Arguments
*  =========
*
*     NP = the number of rows local to a given process.
*     NQ = the number of columns local to a given process.
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN_
*          The array descriptor for the distributed matrices
*
*  UPLO     (global input) CHARACTER*1
*           Specifies whether the upper or lower triangular part of the
*           symmetric matrix A is stored:
*           = 'U':  Upper triangular
*           = 'L':  Lower triangular
*
*  N        (global input) INTEGER
*           Size of the matrix to be tested.  (global size)
*
*  MATTYPE  (global input) INTEGER
*           Matrix type
*  Currently, the list of possible types is:
*
*  (1)  The zero matrix.
*  (2)  The identity matrix.
*
*  (3)  A diagonal matrix with evenly spaced entries
*       1, ..., ULP  and random signs.
*       (ULP = (first number larger than 1) - 1 )
*  (4)  A diagonal matrix with geometrically spaced entries
*       1, ..., ULP  and random signs.
*  (5)  A diagonal matrix with "clustered" entries 1, ULP, ..., ULP
*       and random signs.
*
*  (6)  Same as (4), but multiplied by SQRT( overflow threshold )
*  (7)  Same as (4), but multiplied by SQRT( underflow threshold )
*
*  (8)  A matrix of the form  U' D U, where U is orthogonal and
*       D has evenly spaced entries 1, ..., ULP with random signs
*       on the diagonal.
*
*  (9)  A matrix of the form  U' D U, where U is orthogonal and
*       D has geometrically spaced entries 1, ..., ULP with random
*       signs on the diagonal.
*
*  (10) A matrix of the form  U' D U, where U is orthogonal and
*       D has "clustered" entries 1, ULP,..., ULP with random
*       signs on the diagonal.
*
*  (11) Same as (8), but multiplied by SQRT( overflow threshold )
*  (12) Same as (8), but multiplied by SQRT( underflow threshold )
*
*  (13) symmetric matrix with random entries chosen from (-1,1).
*  (14) Same as (13), but multiplied by SQRT( overflow threshold )
*  (15) Same as (13), but multiplied by SQRT( underflow threshold )
*  (16) Same as (8), but diagonal elements are all positive.
*  (17) Same as (9), but diagonal elements are all positive.
*  (18) Same as (10), but diagonal elements are all positive.
*  (19) Same as (16), but multiplied by SQRT( overflow threshold )
*  (20) Same as (16), but multiplied by SQRT( underflow threshold )
*  (21) A tridiagonal matrix that is a direct sum of smaller diagonally
*       dominant submatrices. Each unreduced submatrix has geometrically
*       spaced diagonal entries 1, ..., ULP.
*  (22) A matrix of the form  U' D U, where U is orthogonal and
*       D has ceil(lgN) "clusters" at 0,1,2,...,ceil(lgN)-1. The
*       size of the cluster at the value I is 2^I.
*
*  SUBTESTS (global input) CHARACTER*1
*           'Y' - Perform subset tests
*           'N' - Do not perform subset tests
*
*  THRESH   (global input) DOUBLE PRECISION
*          A test will count as "failed" if the "error", computed as
*          described below, exceeds THRESH.  Note that the error
*          is scaled to be O(1), so THRESH should be a reasonably
*          small multiple of 1, e.g., 10 or 100.  In particular,
*          it should not depend on the precision (single vs. double)
*          or the size of the matrix.  It must be at least zero.
*
*  ORDER    (global input) INTEGER
*           Number of reflectors used in test matrix creation.
*           If ORDER is large, it will
*           take more time to create the test matrices but they will
*           be closer to random.
*           ORDER .lt. N not implemented
*
*  ABSTOL   (global input) DOUBLE PRECISION
*           The absolute tolerance for the eigenvalues. An
*           eigenvalue is considered to be located if it has
*           been determined to lie in an interval whose width
*           is "abstol" or less. If "abstol" is less than or equal
*           to zero, then ulp*|T| will be used, where |T| is
*           the 1-norm of the matrix. If eigenvectors are
*           desired later by inverse iteration ("PDSTEIN"),
*           "abstol" MUST NOT be bigger than ulp*|T|.
*
*           For the purposes of this test, ABSTOL=0.0 is fine.
*           THis test does not test for high relative accuracy.
*
*  ISEED   (global input/output) INTEGER array, dimension (4)
*          On entry, the seed of the random number generator; the array
*          elements must be between 0 and 4095, and ISEED(4) must be
*          odd.
*          On exit, the seed is updated.
*
*  A       (local workspace) DOUBLE PRECISION array, dim (N*N)
*          global dimension (N, N), local dimension (LDA, NQ)
*          A is distributed in a block cyclic manner over both rows
*          and columns.  The actual location of a particular element
*          in A is controlled by the values of NPROW, NPCOL, and NB.
*          The test matrix.
*
*  COPYA   (local workspace) DOUBLE PRECISION array, dim (N, N)
*          COPYA is used to hold an identical copy of the array A
*          identical in both form and content to A
*
*  Z       (local workspace) DOUBLE PRECISION array, dim (N*N)
*            Z is distributed in the same manner as A
*          Z is used as workspace by the test routines
*          PDSEPCHK and PDSEPQTQ
*
*  W       (local workspace) DOUBLE PRECISION array, dimension (N)
*          the first M entries contain the selected eigenvalues in
*          ascending order.
*
*  IFAIL   (global workspace) INTEGER array, dimension (N)
*
*  WORK    (local workspace) DOUBLE PRECISION array, dimension (LWORK)
*
*  LWORK   (local input) INTEGER
*          The length of the array WORK.  LWORK >= SIZETST as
*          returned by PDLASIZESQP
*
*  IWORK   (local workspace) INTEGER array, dimension (LIWORK)
*
*  LIWORK  (local input) INTEGER
*          The length of the array IWORK.  LIWORK >= ISIZETST as
*          returned by PDLASIZESQP
*
*  NOUT   (local input) INTEGER
*         The unit number for output file.  Only used on node 0.
*         NOUT = 6, output to screen,
*         NOUT = 0, output to stderr.
*         NOUT = 13, output to file, divide thresh by 10.0
*         NOUT = 14, output to file, divide thresh by 20.0
*         (This hack allows us to test more stringently internally
*         so that when errors on found on other computers they will
*         be serious enough to warrant our attention.)
*
*  INFO (global output) INTEGER
*         -3       This process is not involved
*         0        Test succeeded (passed |AQ -QL| and |QT*Q - I| tests)
*         1        At least one test failed
*         2        Residual test were not performed, thresh <= 0.0
*         3        Test was skipped because of inadequate memory space
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, DLEN_, DT_, CTXT_, M_, N_,
     $                   MB_, NB_, RSRC_, CSRC_, LLD_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DT_ = 1,
     $                   CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                   RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      DOUBLE PRECISION   HALF, ONE, TEN, ZERO
      PARAMETER          ( ZERO = 0.0D+0, ONE = 1.0D+0,
     $                     TEN = 10.0D+0, HALF = 0.5D+0 )
      DOUBLE PRECISION   PADVAL
      PARAMETER          ( PADVAL = 19.25D+0 )
      INTEGER            MAXTYP
      PARAMETER          ( MAXTYP = 22 )
*     ..
*
*     .. Local Scalars ..
      LOGICAL            WKNOWN
      CHARACTER          JOBZ, RANGE
      CHARACTER*14       PASSED
      INTEGER            CONTEXT, I, IAM, IHETERO, IINFO, IL, IMODE, IN,
     $                   INDD, INDWORK, ISIZESUBTST, ISIZESYEVX,
     $                   ISIZETST, ITYPE, IU, J, LLWORK, LSYEVXSIZE,
     $                   MAXSIZE, MINSIZE, MYCOL, MYROW, NB, NGEN, NLOC,
     $                   NNODES, NP, NPCOL, NPROW, NQ, RES, SIZECHK,
     $                   SIZEMQRLEFT, SIZEMQRRIGHT, SIZEQRF, SIZEQTQ,
     $                   SIZESUBTST, SIZESYEV, SIZESYEVX, SIZETMS,
     $                   SIZETST, VALSIZE, VECSIZE, ISIZESYEVD,SIZESYEVD
      DOUBLE PRECISION   ANINV, ANORM, COND, MAXQTQNRM, MAXTSTNRM, OVFL,
     $                   QTQNRM, RTOVFL, RTUNFL, TEMP1, TSTNRM, ULP,
     $                   ULPINV, UNFL, VL, VU
*     ..
*     .. Local Arrays ..
      INTEGER            ISEEDIN( 4 ), KMAGN( MAXTYP ), KMODE( MAXTYP ),
     $                   KTYPE( MAXTYP )
      DOUBLE PRECISION   CTIME( 10 ), WTIME( 10 )
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      INTEGER            NUMROC
      DOUBLE PRECISION   DLARAN, PDLAMCH
      EXTERNAL           DLARAN, LSAME, NUMROC, PDLAMCH
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, BLACS_PINFO, DLABAD, DLASRT,
     $                   DLATMS, IGAMX2D, IGEBR2D, IGEBS2D, PDCHEKPAD,
     $                   PDELSET, PDFILLPAD, PDLASET, PDLASIZESQP,
     $                   PDLASIZESYEVX, PDLATMS, PDMATGEN,
     $                   PDSTEDCSUBTST, SLCOMBINE
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, DBLE, INT, MAX, MIN, SQRT
*     ..
*     .. Data statements ..
      DATA               KTYPE / 1, 2, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 8,
     $                   8, 8, 9, 9, 9, 9, 9, 10, 11 /
      DATA               KMAGN / 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 2, 3, 1,
     $                   2, 3, 1, 1, 1, 2, 3, 1, 1 /
      DATA               KMODE / 0, 0, 4, 3, 1, 4, 4, 4, 3, 1, 4, 4, 0,
     $                   0, 0, 4, 3, 1, 4, 4, 3, 0 /
*     ..
*     .. Executable Statements ..
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
*       This is just to keep ftnchek happy
      IF( BLOCK_CYCLIC_2D*CSRC_*CTXT_*DLEN_*DT_*LLD_*MB_*M_*NB_*N_*
     $    RSRC_.LT.0 )RETURN
*
      INFO = 0
      PASSED = 'PASSED'
      CONTEXT = DESCA( CTXT_ )
      NB = DESCA( NB_ )
*
      CALL BLACS_PINFO( IAM, NNODES )
      CALL BLACS_GRIDINFO( CONTEXT, NPROW, NPCOL, MYROW, MYCOL )
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
*     Distribute HETERO across processes
*
      IF( IAM.EQ.0 ) THEN
         IF( LSAME( HETERO, 'Y' ) ) THEN
            IHETERO = 2
         ELSE
            IHETERO = 1
         END IF
         CALL IGEBS2D( CONTEXT, 'All', ' ', 1, 1, IHETERO, 1 )
      ELSE
         CALL IGEBR2D( CONTEXT, 'All', ' ', 1, 1, IHETERO, 1, 0, 0 )
      END IF
      IF( IHETERO.EQ.2 ) THEN
         HETERO = 'Y'
      ELSE
         HETERO = 'N'
      END IF
*
*     Make sure that we have enough memory
*
      CALL PDLASIZESQP( DESCA, IPREPAD, IPOSTPAD, SIZEMQRLEFT,
     $                  SIZEMQRRIGHT, SIZEQRF, SIZETMS, SIZEQTQ,
     $                  SIZECHK, SIZESYEVX, ISIZESYEVX, SIZESYEV,
     $                  SIZESYEVD, ISIZESYEVD, SIZESUBTST,
     $                  ISIZESUBTST, SIZETST, ISIZETST )
*
      IF( LWORK.LT.SIZETST ) THEN
         INFO = 3
      END IF
*
      CALL IGAMX2D( CONTEXT, 'a', ' ', 1, 1, INFO, 1, 1, 1, -1, -1, 0 )
*
      IF( INFO.EQ.0 ) THEN
*
         INDD = 1
         INDWORK = INDD + N
         LLWORK = LWORK - INDWORK + 1
*
         ULP = PDLAMCH( CONTEXT, 'P' )
         ULPINV = ONE / ULP
         UNFL = PDLAMCH( CONTEXT, 'Safe min' )
         OVFL = ONE / UNFL
         CALL DLABAD( UNFL, OVFL )
         RTUNFL = SQRT( UNFL )
         RTOVFL = SQRT( OVFL )
         ANINV = ONE / DBLE( MAX( 1, N ) )
*
*     This ensures that everyone starts out with the same seed.
*
         IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 ) THEN
            CALL IGEBS2D( CONTEXT, 'a', ' ', 4, 1, ISEED(1), 4 )
         ELSE
            CALL IGEBR2D( CONTEXT, 'a', ' ', 4, 1, ISEED(1), 4, 0, 0 )
         END IF
         ISEEDIN( 1 ) = ISEED( 1 )
         ISEEDIN( 2 ) = ISEED( 2 )
         ISEEDIN( 3 ) = ISEED( 3 )
         ISEEDIN( 4 ) = ISEED( 4 )
*
*     Compute the matrix A
*
*     Control parameters:
*
*     KMAGN  KMODE        KTYPE
*     =1  O(1)   clustered 1  zero
*     =2  large  clustered 2  identity
*     =3  small  exponential  (none)
*     =4         arithmetic   diagonal, (w/ eigenvalues)
*     =5         random log   symmetric, w/ eigenvalues
*     =6         random       (none)
*     =7                      random diagonal
*     =8                      random symmetric
*     =9                      positive definite
*     =10                     block diagonal with tridiagonal blocks
*     =11                     Geometrically sized clusters.
*
         ITYPE = KTYPE( MATTYPE )
         IMODE = KMODE( MATTYPE )
*
*     Compute norm
*
         GO TO ( 10, 20, 30 )KMAGN( MATTYPE )
*
   10    CONTINUE
         ANORM = ONE
         GO TO 40
*
   20    CONTINUE
         ANORM = ( RTOVFL*ULP )*ANINV
         GO TO 40
*
   30    CONTINUE
         ANORM = RTUNFL*N*ULPINV
         GO TO 40
*
   40    CONTINUE
         IF( MATTYPE.LE.15 ) THEN
            COND = ULPINV
         ELSE
            COND = ULPINV*ANINV / TEN
         END IF
*
*
*      IF extreme flag is enabled, opt to the general matgen
*      routine to populate the input with INF/NANs
*
         IF(EX_FLAG) THEN
           ITYPE = 8
         END IF
*
*
*     Zero
         IF( ITYPE.EQ.5 ) THEN
*
*     symmetric, eigenvalues specified
*
            CALL PDFILLPAD( DESCA( CTXT_ ), SIZETMS, 1, WORK( INDWORK ),
     $                      SIZETMS, IPREPAD, IPOSTPAD, PADVAL+2.0D+0 )
*
            IF( N.GT.0) THEN
              CALL PDLATMS( N, N, 'S', ISEED, 'S', WORK( INDD ), IMODE,
     $                    COND, ANORM, N, N, 'N', COPYA, 1, 1, DESCA,
     $                    ORDER, WORK( INDWORK+IPREPAD ), SIZETMS,
     $                    IINFO )
            END IF
*
            CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDLATMS2-WORK', SIZETMS, 1,
     $                      WORK( INDWORK ), SIZETMS, IPREPAD, IPOSTPAD,
     $                      PADVAL+2.0D+0 )
*
            WKNOWN = .FALSE.
*
         ELSE IF( ITYPE.EQ.8 ) THEN
*
*     symmetric, random eigenvalues
*
            NP = NUMROC( N, DESCA( MB_ ), MYROW, 0, NPROW )
            NQ = NUMROC( N, DESCA( NB_ ), MYCOL, 0, NPCOL )
            CALL PDMATGEN( DESCA( CTXT_ ), 'S', 'N', N, N, DESCA( MB_ ),
     $                     DESCA( NB_ ), COPYA, DESCA( LLD_ ),
     $                     DESCA( RSRC_ ), DESCA( CSRC_ ), ISEED( 1 ),
     $                     0, NP, 0, NQ, MYROW, MYCOL, NPROW, NPCOL )
            INFO = 0
            WKNOWN = .FALSE.
*
         ELSE IF( ITYPE.EQ.9 ) THEN
*
*     Positive definite, eigenvalues specified.
*
*
            CALL PDFILLPAD( DESCA( CTXT_ ), SIZETMS, 1, WORK( INDWORK ),
     $                      SIZETMS, IPREPAD, IPOSTPAD, PADVAL+3.0D+0 )
*
            IF( N.GT.0) THEN
            CALL PDLATMS( N, N, 'S', ISEED, 'S', WORK( INDD ), IMODE,
     $                    COND, ANORM, N, N, 'N', COPYA, 1, 1, DESCA,
     $                    ORDER, WORK( INDWORK+IPREPAD ), SIZETMS,
     $                    IINFO )
            END IF
*
            WKNOWN = .FALSE.
*
            CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDLATMS3-WORK', SIZETMS, 1,
     $                      WORK( INDWORK ), SIZETMS, IPREPAD, IPOSTPAD,
     $                      PADVAL+3.0D+0 )
*
         END IF
      ELSE
            IINFO = 1
      END IF
*

*
*
      IF( IINFO .EQ. 0) THEN
*
*
         IF( INFO.NE.0 .AND. N .GT. 0 .AND. .NOT.(EX_FLAG)) THEN
*
*
            PASSED = 'SKIPPED  STED'
         ELSE
*
            NP = NUMROC( N, DESCA( MB_ ), 0, 0, NPROW )
            NQ = NUMROC( N, DESCA( NB_ ), 0, 0, NPCOL )
            MINSIZE  = MAX( 1+6*N+2*NP*NQ,
     $           3*N + MAX( NB*( NP+1 ), 3*NB ) ) + 2*N
*
            CALL PDSTEDCSUBTST( WKNOWN, UPLO, N, THRESH, ABSTOL, A,
     $                        COPYA, Z, 1, 1, DESCA, WIN, WNEW, IPREPAD,
     $                        IPOSTPAD, WORK( INDWORK ), LLWORK,
     $                        MINSIZE, IWORK, ISIZESYEVD,
     $                        RES, TSTNRM, QTQNRM, NOUT )
*
*      When N < 0/Invalid, PDSTEDC INFO = -3
*      Expected Error code for N < 0
*      Hence this case can be passed by setting INFO = 0
            IF(N .LT. 0 .AND. INFO .EQ. -3) THEN
               INFO = 0
            ELSE IF( RES.NE.0 ) THEN
               MAXTSTNRM = MAX( TSTNRM, MAXTSTNRM )
               MAXQTQNRM = MAX( QTQNRM, MAXQTQNRM )
               PASSED = 'FAIL EVD test1'
               INFO = 1
            END IF
         END IF
         IF( INFO.EQ.1 .AND. N .GT.0) THEN
            IF( IAM.EQ.0 ) THEN
               WRITE( NOUT, FMT = 9994 )'C  '
               WRITE( NOUT, FMT = 9993 )ISEEDIN( 1 )
               WRITE( NOUT, FMT = 9992 )ISEEDIN( 2 )
               WRITE( NOUT, FMT = 9991 )ISEEDIN( 3 )
               WRITE( NOUT, FMT = 9990 )ISEEDIN( 4 )
               IF( LSAME( UPLO, 'L' ) ) THEN
                  WRITE( NOUT, FMT = 9994 )'      UPLO= ''L'' '
               ELSE
                  WRITE( NOUT, FMT = 9994 )'      UPLO= ''U'' '
               END IF
               WRITE( NOUT, FMT = 9989 )N
               WRITE( NOUT, FMT = 9988 )NPROW
               WRITE( NOUT, FMT = 9987 )NPCOL
               WRITE( NOUT, FMT = 9986 )NB
               WRITE( NOUT, FMT = 9985 )MATTYPE
               WRITE( NOUT, FMT = 9982 )ABSTOL
               WRITE( NOUT, FMT = 9981 )THRESH
               WRITE( NOUT, FMT = 9994 )'C  '
            END IF
         END IF
*
         CALL SLCOMBINE( CONTEXT, 'All', '>', 'W', 6, 1, WTIME )
         CALL SLCOMBINE( CONTEXT, 'All', '>', 'C', 6, 1, CTIME )
         IF( IAM.EQ.0 ) THEN
            IF( INFO.EQ.0 .OR. INFO.EQ.1 ) THEN
               IF( WTIME( 1 ).GE.0.0 ) THEN
                  WRITE( NOUT, FMT = 9999 )N, NB, NPROW, NPCOL, MATTYPE,
     $                   SUBTESTS, WTIME( 1 ), CTIME( 1 ), TSTNRM,
     $                   QTQNRM, PASSED
               ELSE
                  WRITE( NOUT, FMT = 9998 )N, NB, NPROW, NPCOL, MATTYPE,
     $                   SUBTESTS, CTIME( 1 ), MAXTSTNRM, MAXQTQNRM,
     $                   PASSED
               END IF
            ELSE IF( INFO.EQ.2 ) THEN
               IF( WTIME( 1 ).GE.0.0 ) THEN
                  WRITE( NOUT, FMT = 9997 )N, NB, NPROW, NPCOL, MATTYPE,
     $                   SUBTESTS, WTIME( 1 ), CTIME( 1 )
               ELSE
                  WRITE( NOUT, FMT = 9996 )N, NB, NPROW, NPCOL, MATTYPE,
     $                   SUBTESTS, CTIME( 1 )
               END IF
            ELSE IF( INFO.EQ.3 ) THEN
               WRITE( NOUT, FMT = 9995 )N, NB, NPROW, NPCOL, MATTYPE,
     $                SUBTESTS
            END IF
         END IF
      END IF
      RETURN
*
 9999 FORMAT( 1X, I5, 1X, I3, 1X, I3, 1X, I3, 1X, I3, 3X, A1, 1X,
     $      F8.2, 1X, F8.2, 1X, G9.2, 1X, G9.2, 1X, A14 )
 9998 FORMAT( 1X, I5, 1X, I3, 1X, I3, 1X, I3, 1X, I3, 3X, A1, 1X, 8X,
     $      1X, F8.2, 1X, G9.2, 1X, G9.2, A14 )
 9997 FORMAT( 1X, I5, 1X, I3, 1X, I3, 1X, I3, 1X, I3, 3X, A1, 1X, F8.2,
     $      1X, F8.2, 21X, 'Bypassed' )
 9996 FORMAT( 1X, I5, 1X, I3, 1X, I3, 1X, I3, 1X, I3, 3X, A1, 1X, 8X,
     $      1X, F8.2, 21X, 'Bypassed' )
 9995 FORMAT( 1X, I5, 1X, I3, 1X, I3, 1X, I3, 1X, I3, 3X, A1, 32X,
     $      'Bad MEMORY parameters' )
 9994 FORMAT( A )
 9993 FORMAT( '      ISEED( 1 ) =', I8 )
 9992 FORMAT( '      ISEED( 2 ) =', I8 )
 9991 FORMAT( '      ISEED( 3 ) =', I8 )
 9990 FORMAT( '      ISEED( 4 ) =', I8 )
 9989 FORMAT( '      N=', I8 )
 9988 FORMAT( '      NPROW=', I8 )
 9987 FORMAT( '      NPCOL=', I8 )
 9986 FORMAT( '      NB=', I8 )
 9985 FORMAT( '      MATTYPE=', I8 )
 9984 FORMAT( '      IBTYPE=', I8 )
 9983 FORMAT( '      SUBTESTS=', A1 )
 9982 FORMAT( '      ABSTOL=', D16.6 )
 9981 FORMAT( '      THRESH=', D16.6 )
 9980 FORMAT( ' Increase TOTMEM in PDSEPDRIVER' )
 9979 FORMAT( 'N < 0, negative test case detected for PDSTEDC with'
     $        ' INFO = -3, Passing this case')
*
*     End of PDSTEDCTST
*
      END




