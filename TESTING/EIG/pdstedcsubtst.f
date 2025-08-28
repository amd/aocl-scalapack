      SUBROUTINE PDSTEDCSUBTST( WKNOWN, UPLO, N, THRESH, ABSTOL, A,
     $                        COPYA, Z, IA, JA, DESCA, WIN, WNEW,
     $                        IPREPAD, IPOSTPAD, WORK, LWORK, LWORK1,
     $                        IWORK, LIWORK,
     $                        RESULT, TSTNRM, QTQNRM, NOUT )
*
*  -- ScaLAPACK testing routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     March 16, 2000
*     Modifications Copyright (c) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.

*
*
      use,intrinsic :: ieee_arithmetic
      
      IMPLICIT NONE
      
*     .. Scalar Arguments ..
      LOGICAL            WKNOWN
      CHARACTER          UPLO, JOBZ
      INTEGER            IA, IPOSTPAD, IPREPAD, JA, LWORK, LWORK1, N,
     $                   NOUT, RESULT, LIWORK
      DOUBLE PRECISION               ABSTOL, QTQNRM, THRESH, TSTNRM
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), IWORK( * )
      DOUBLE PRECISION   A( * ), COPYA( * ), WIN( * ),
     $                   WNEW( * ), WORK( * ), Z( * )
*     ..
*
*  Purpose
*  =======
*
*  PDSTEDCSUBTST calls PDSTEDC and then tests the output of
*  PDSTEDC
*  The following two tests are performed:
*     |AQ -QL| / (abstol + eps * norm(A) ) < N*THRESH
*     |QT * Q - I| / eps * norm(A) < N*THRESH
*  If WKNOWN then
*     we check to make sure that the eigenvalues match expectations
*     i.e. |WIN - WNEW(1+IPREPAD)| / (eps * |WIN|) < THRESH
*     where WIN is the array of eigenvalues as computed by
*     PDSTEDC when eigenvectors are requested
*
*  Arguments
*  =========
*
*     NP = the number of rows local to a given process.
*     NQ = the number of columns local to a given process.
*
*  WKNOWN  (global input) INTEGER
*          .FALSE.:  WIN does not contain the eigenvalues
*          .TRUE.:   WIN does contain the eigenvalues
*
*  UPLO    (global input) CHARACTER*1
*          Specifies whether the upper or lower triangular part of the
*          symmetric matrix A is stored:
*          = 'U':  Upper triangular
*          = 'L':  Lower triangular
*
*  N       (global input) INTEGER
*          Size of the matrix to be tested.  (global size)
*
*  THRESH  (global input) DOUBLE PRECISION
*          A test will count as "failed" if the "error", computed as
*          described below, exceeds THRESH.  Note that the error
*          is scaled to be O(1), so THRESH should be a reasonably
*          small multiple of 1, e.g., 10 or 100.  In particular,
*          it should not depend on the precision (single vs. double)
*          or the size of the matrix.  It must be at least zero.
*
*  ABSTOL  (global input) DOUBLE PRECISION
*          The absolute tolerance for the eigenvalues. An
*          eigenvalue is considered to be located if it has
*          been determined to lie in an interval whose width
*          is "abstol" or less. If "abstol" is less than or equal
*          to zero, then ulp*|T| will be used, where |T| is
*          the 1-norm of the matrix. If eigenvectors are
*
*  A       (local workspace) DOUBLE PRECISION array
*          global dimension (N, N), local dimension (DESCA(DLEN_), NQ)
*            A is distributed in a block cyclic manner over both rows
*            and columns.
*          See PDSTEDC for a description of block cyclic layout.
*          The test matrix, which is then modified by PDSTEDC
*          A has already been padded front and back, use A(1+IPREPAD)
*
*  COPYA   (local input) DOUBLE PRECISION array, dimension(N*N)
*          COPYA holds a copy of the original matrix A
*          identical in both form and content to A
*
*  Z       (local workspace) DOUBLE PRECISION array, dim (N*N)
*          Z is distributed in the same manner as A
*          Z contains the eigenvector matrix
*          Z is used as workspace by the test routines
*          PDSEPCHK and PDSEPQTQ.
*          Z has already been padded front and back, use Z(1+IPREPAD)
*
*  IA      (global input) INTEGER
*          On entry, IA specifies the global row index of the submatrix
*          of the global matrix A, COPYA and Z to operate on.
*
*  JA      (global input) INTEGER
*          On entry, IA specifies the global column index of the submat
*          of the global matrix A, COPYA and Z to operate on.
*
*  DESCA   (global/local input) INTEGER array of dimension 8
*          The array descriptor for the matrix A, COPYA and Z.
*
*  WIN     (global input) DOUBLE PRECISION array, dimension (N)
*          If .not. WKNOWN, WIN is ignored on input
*          Otherwise, WIN() is taken as the standard by which the
*          eigenvalues are to be compared against.
*
*  WNEW    (global workspace)  DOUBLE PRECISION array, dimension (N)
*          The eigenvalues as computed by this call to PDSTEDC.
*          WNEW has already been padded front and back,
*          use WNEW(1+IPREPAD)
*
*  WORK    (local workspace) DOUBLE PRECISION array, dimension (LWORK)
*          WORK has already been padded front and back,
*          use WORK(1+IPREPAD)
*
*  LWORK   (local input) INTEGER
*          The actual length of the array WORK after padding.
*
*
*  LWORK1  (local input) INTEGER
*          The amount of real workspace to pass to PDSTEDC
*
*  IWORK   (local workspace) INTEGER array, dimension (LIWORK)
*          IWORK has already been padded front and back,
*          use IWORK(1+IPREPAD)
*
*  LIWORK  (local input) INTEGER
*          The length of the array IWORK after padding.
*
*  RESULT  (global output) INTEGER
*          The result of this call to PDSTEDC
*          RESULT = -3   =>  This process did not participate
*          RESULT = 0    =>  All tests passed
*          RESULT = 1    =>  ONe or more tests failed
*
*  TSTNRM  (global output) DOUBLE PRECISION
*          |AQ- QL| / (ABSTOL+EPS*|A|)*N
*
*  QTQNRM  (global output) DOUBLE PRECISION
*          |QTQ -I| / N*EPS
*
*     .. Parameters ..
*
      INTEGER            BLOCK_CYCLIC_2D, DLEN_, DT_, CTXT_, M_, N_,
     $                   MB_, NB_, RSRC_, CSRC_, LLD_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DT_ = 1,
     $                   CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                   RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      DOUBLE PRECISION   FIVE, NEGONE, PADVAL, ZERO
      PARAMETER          ( PADVAL = 13.5285D+0, FIVE = 5.0D+0,
     $                   NEGONE = -1.0D+0, ZERO = 0.0D+0 )
*     ..
*     .. Local Scalars ..
      INTEGER            I, IAM, INFO, ISIZESUBTST, ISIZESYEVX,
     $                   ISIZETST, J,  MINSIZE, MQ, MYCOL, MYROW,
     $                   NP, NPCOL, NPROW, NQ, RESAQ, RESQTQ,
     $                   SIZECHK, SIZEMQRLEFT, SIZEMQRRIGHT, SIZEQRF,
     $                   SIZEQTQ, SIZESUBTST, SIZESYEV, SIZESYEVX,
     $                   SIZETMS, SIZETST, SIZESYEVD, ISIZESYEVD,
     $                   TRILWMIN, IK, JK, IINFO
      DOUBLE PRECISION   EPS, EPSNORMA, ERROR, MAXERROR, MINERROR,
     $                   NORMWIN, SAFMIN
      LOGICAL            UPPER
*     .. Added explicit declarations for previously implicit symbols ..
      INTEGER            IZ, JZ, NB, IROFFA, ICOFFA, IROFFZ, ICOFFZ,
     $                   IAROW, IACOL, INDTAU, INDE, INDD, INDE2,
     $                   INDWORK, LLWORK, INDWORK2, LLWORK2, ISCALE,
     $                   OFFSET
      LOGICAL            LQUERY
      DOUBLE PRECISION   LWMIN, LIWMIN, SMLNUM, BIGNUM, ONE,
     $                   RMIN, RMAX, SIGMA, ANRM
*     ................................................................
*     ..
*     .. Local Arrays ..
      INTEGER            DESCZ( DLEN_ ), ITMP( 2 ), IDUM1( 2 ),
     $                   IDUM2( 2 )
*     ..
*     .. External Functions ..
*
      LOGICAL            LSAME
      INTEGER            NUMROC, INDXG2P
      DOUBLE PRECISION   PDLAMCH, PDLANSY
      EXTERNAL           LSAME, NUMROC, INDXG2P, PDLAMCH, PDLANSY
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, DESCINIT, IGAMN2D, IGAMX2D,
     $                   PDCHEKPAD, PDELSET, PDFILLPAD, PDLASIZESQP,
     $                   PDSEPCHK, PDSEPQTQ, PDSYEVD, DGAMN2D,
     $                   DGAMX2D, DLACPY, SLBOOT, SLTIMER,
     $                   CHK1MAT, PCHK1MAT,
     $                   PDLARED1D, PDLASCL, PDLASET, PDORMTR, PDSTEDC,
     $                   PDSYTRD, PXERBLA, DSCAL
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, MAX, MIN, MOD, ICHAR
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
      CALL PDLASIZESQP( DESCA, IPREPAD, IPOSTPAD, SIZEMQRLEFT,
     $                  SIZEMQRRIGHT, SIZEQRF, SIZETMS, SIZEQTQ,
     $                  SIZECHK, SIZESYEVX, ISIZESYEVX, SIZESYEV,
     $                  SIZESYEVD, ISIZESYEVD, SIZESUBTST, ISIZESUBTST,
     $                  SIZETST, ISIZETST )
*
      TSTNRM = NEGONE
      QTQNRM = NEGONE
      EPS = PDLAMCH( DESCA( CTXT_ ), 'Eps' )
      SAFMIN = PDLAMCH( DESCA( CTXT_ ), 'Safe min' )
      ONE = 1.0D0
*
      NORMWIN = SAFMIN / EPS
      IF( N.GE.1 )
     $   NORMWIN = MAX( ABS( WIN( 1+IPREPAD ) ),
     $                  ABS( WIN( N+IPREPAD ) ), NORMWIN )
*
*     Make sure that we aren't using information from previous calls
*
      DO 10 I = 1, LWORK1, 1
         WORK( I+IPREPAD ) = 14.3D+0
   10 CONTINUE
*
      DO 30 I = 1, N
         WNEW( I+IPREPAD ) = 3.14159D+0
   30 CONTINUE
*
      CALL DESCINIT( DESCZ, DESCA( M_ ), DESCA( N_ ), DESCA( MB_ ),
     $               DESCA( NB_ ), DESCA( RSRC_ ), DESCA( CSRC_ ),
     $               DESCA( CTXT_ ), DESCA( LLD_ ), INFO )
*
      CALL BLACS_GRIDINFO( DESCA( CTXT_ ), NPROW, NPCOL, MYROW, MYCOL )
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

      IAM = 1
      IF( MYROW.EQ.0 .AND. MYCOL.EQ.0 )
     $   IAM = 0
*
*     If this process is not involved in this test, bail out now
*
      IF( MYROW.GE.NPROW .OR. MYROW.LT.0 )
     $   GO TO 150
      RESULT = 0
*
      NP = NUMROC( N, DESCA( MB_ ), MYROW, 0, NPROW )
      NQ = NUMROC( N, DESCA( NB_ ), MYCOL, 0, NPCOL )
      MQ = NUMROC( N, DESCA( NB_ ), MYCOL, 0, NPCOL )
*
*     Find the amount of workspace needed with or without eigenvectors.
*
      TRILWMIN = 3*N + MAX( DESCA( NB_ )*( NP+1 ), 3*DESCA( NB_ ) )
      MINSIZE = MAX( 1 + 6*N + 2*NP*NQ, TRILWMIN ) + 2*N
*
      CALL DLACPY( 'A', NP, NQ, COPYA, DESCA( LLD_ ), A( 1+IPREPAD ),
     $             DESCA( LLD_ ) )
*
      CALL PDFILLPAD( DESCA( CTXT_ ), NP, NQ, A, DESCA( LLD_ ), IPREPAD,
     $                IPOSTPAD, PADVAL )
*
      CALL PDFILLPAD( DESCZ( CTXT_ ), NP, MQ, Z, DESCZ( LLD_ ), IPREPAD,
     $                IPOSTPAD, PADVAL+1.0D+0 )
*
      CALL PDFILLPAD( DESCA( CTXT_ ), N, 1, WNEW, N, IPREPAD, IPOSTPAD,
     $                PADVAL+2.0D+0 )
*
      CALL PDFILLPAD( DESCA( CTXT_ ), LWORK1, 1, WORK, LWORK1, IPREPAD,
     $                IPOSTPAD, PADVAL+4.0D+0 )
*
*     Make sure that PDSTEDC does not cheat (i.e. use answers
*     already computed.)
*
      DO 60 I = 1, N, 1
         DO 50 J = 1, N, 1
            CALL PDELSET( Z( 1+IPREPAD ), I, J, DESCA, 13.0D+0 )
   50    CONTINUE
   60 CONTINUE
*
*
*     Initialize Z params
*
*
      JOBZ = 'V'
      IZ = IA
      JZ = JA
*
      CALL CHK1MAT( N, 3, N, 3, IA, JA, DESCA, 7, INFO )
      CALL CHK1MAT( N, 3, N, 3, IZ, JZ, DESCA, 12, INFO )
      IF( INFO.EQ.0 ) THEN
        UPPER = LSAME( UPLO, 'U' )
        NB = DESCA( NB_ )
        IROFFA = MOD( IA-1, DESCA( MB_ ) )
        ICOFFA = MOD( JA-1, DESCA( NB_ ) )
        IROFFZ = MOD( IZ-1, DESCA( MB_ ) )
        ICOFFZ = MOD( JZ-1, DESCA( NB_ ) )
        IAROW = INDXG2P( IA, NB, MYROW, DESCA( RSRC_ ), NPROW )
        IACOL = INDXG2P( JA, NB, MYCOL, DESCA( CSRC_ ), NPCOL )
        NP = NUMROC( N, NB, MYROW, IAROW, NPROW )
        NQ = NUMROC( N, NB, MYCOL, IACOL, NPCOL )
*
        LQUERY = ( LWORK.EQ.-1 )
        TRILWMIN = 3*N + MAX( NB*( NP+1 ), 3*NB )
        LWMIN = MAX( 1+6*N+2*NP*NQ, TRILWMIN ) + 2*N
        LIWMIN = 7*N + 8*NPCOL + 2
        WORK( 1 + IPREPAD) = DBLE( LWMIN )
        IWORK( 1 + IPREPAD ) = LIWMIN
      END IF
      IF( UPPER ) THEN
        IDUM1( 1 ) = ICHAR( 'U' )
      ELSE
        IDUM1( 1 ) = ICHAR( 'L' )
      END IF
      IDUM2( 1 ) = 2
      IF( LWORK.EQ.-1 ) THEN
        IDUM1( 2 ) = -1
      ELSE
        IDUM1( 2 ) = 1
      END IF
      IDUM2( 2 ) = 14
      CALL PCHK1MAT( N, 3, N, 3, IA, JA, DESCA, 7, 2, IDUM1, IDUM2,
     $                  INFO )
*
*     Set up pointers into the WORK array
*
      INDTAU = 1
      INDE = INDTAU + N
      INDD = INDE + N
      INDE2 = INDD + N
      INDWORK = INDE2 + N
      LLWORK = LWORK - INDWORK + 1
      INDWORK2 = INDD
      LLWORK2 = LWORK - INDWORK2 + 1
*
*     Scale matrix to allowable range, if necessary.
*
      ISCALE = 0
      SAFMIN = PDLAMCH( DESCA( CTXT_ ), 'Safe minimum' )
      EPS = PDLAMCH( DESCA( CTXT_ ), 'Precision' )
      SMLNUM = SAFMIN / EPS
      BIGNUM = ONE / SMLNUM
      RMIN = SQRT( SMLNUM )
      RMAX = MIN( SQRT( BIGNUM ), ONE / SQRT( SQRT( SAFMIN ) ) )
      ANRM = PDLANSY( 'M', UPLO, N, A(1+IPREPAD), IA, JA, DESCA,
     $                WORK(1+ IPREPAD + INDWORK ) )
*
      IF( ANRM.GT.ZERO .AND. ANRM.LT.RMIN ) THEN
         ISCALE = 1
         SIGMA = RMIN / ANRM
      ELSE IF( ANRM.GT.RMAX ) THEN
         ISCALE = 1
         SIGMA = RMAX / ANRM
      END IF
*
      IF( ISCALE.EQ.1 ) THEN
         CALL PDLASCL( UPLO, ONE, SIGMA, N, N, A(1+IPREPAD), IA,
     $                   JA, DESCA, INFO )
      END IF
*
*
*     Call PDSYTRD to reduce symmetric matrix to tridiagonal form.
*

      CALL PDSYTRD( UPLO, N, A(1+IPREPAD), IA, JA, DESCA,
     $              WORK( 1+ IPREPAD + INDD ),
     $              WORK( 1+ IPREPAD + INDE2  ),
     $              WORK( 1+ IPREPAD + INDTAU ),
     $              WORK( 1+ IPREPAD + INDWORK ), LLWORK, INFO )


*
*
*     Copy the values of D, E to all processes.
*
      CALL PDLARED1D( N, IA, JA, DESCA, WORK( 1+ IPREPAD + INDD ),
     $                WNEW( 1+IPREPAD ),
     $                WORK( 1+ IPREPAD + INDWORK ), LLWORK )
*
      CALL PDLARED1D( N, IA, JA, DESCA, WORK( 1+ IPREPAD + INDE2 ),
     $                WORK(1+ IPREPAD + INDE ),
     $                WORK(1+ IPREPAD + INDWORK ), LLWORK )
*
      CALL PDLASET( 'Full', N, N, ZERO, ONE, Z(1+IPREPAD), 1, 1, DESCA)
*
      IF( UPPER ) THEN
         OFFSET = 1
      ELSE
         OFFSET = 0
      END IF
*
      CALL SLBOOT
      CALL SLTIMER( 1 )
      CALL SLTIMER( 6 )
*
*     invoke the PDSTEDC API
      CALL PDSTEDC( 'I', N, WNEW( 1+IPREPAD ),
     $         WORK( 1+ IPREPAD + INDE+OFFSET ), Z(1+IPREPAD),
     $         IZ, JZ, DESCA, WORK(1+ IPREPAD + INDWORK2 ),
     $         LLWORK2, IWORK(1+IPREPAD), LIWORK, IINFO )

      CALL SLTIMER( 6 )
      CALL SLTIMER( 1 )
*
*     Post processing on the API output
      CALL PDORMTR( 'L', UPLO, 'N', N, N, A(1+IPREPAD), IA, JA, DESCA,
     $              WORK( 1+ IPREPAD + INDTAU ), Z(1+IPREPAD), IZ, JZ,
     $              DESCA, WORK( 1+ IPREPAD + INDWORK2 ),
     $              LLWORK2, IINFO )
*
*     If matrix was scaled, then rescale eigenvalues appropriately.
*
      IF( ISCALE.EQ.1 ) THEN
         CALL DSCAL( N, ONE / SIGMA, WNEW(1+IPREPAD), 1 )
      END IF

*
*     skip checkpad conditions for negative cases
      IF( THRESH.LE.0 .AND. N .LT. 0 ) THEN
         RESULT = 0
      ELSE
         CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDSTEDC-A', NP, NQ, A,
     $                   DESCA( LLD_ ), IPREPAD, IPOSTPAD, PADVAL )
*
         CALL PDCHEKPAD( DESCZ( CTXT_ ), 'PDSTEDC-Z', NP, MQ, Z,
     $                   DESCZ( LLD_ ), IPREPAD, IPOSTPAD,
     $                   PADVAL+1.0D+0 )
*
         CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDSTEDC-WNEW', N, 1, WNEW, N,
     $                   IPREPAD, IPOSTPAD, PADVAL+2.0D+0 )
*
         CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDSTEDC-WORK', LWORK1, 1,
     $                   WORK, LWORK1, IPREPAD, IPOSTPAD,
     $                   PADVAL+4.0D+0 )
*
*     Check INFO
*
*
*      When N < 0/Invalid, PDSYEV INFO = -3
*      Expected Error code for N < 0
*      Hence this case can be passed by setting RESULT = 0

         IF(N .LT. 0 .AND. INFO .EQ. -3) THEN
           IF( IAM.EQ.0 ) THEN
             WRITE( NOUT, FMT = 9991)
           END IF
           RESULT = 0
           GO TO 150
*    Extreme-values validation block
*
         ELSE IF(EX_FLAG .AND. N.GT.0) THEN
*    Check presence of INF/NAN in output
*    Pass the case if present
           DO IK = 0, N-1
             DO JK = 1, N
               X = COPYA(IK*N + JK)
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
             RESULT = 1
           ELSE
             RESULT = 0
*    RESET RESIDUAL FLAG
             RES_FLAG = .FALSE.
           END IF
           GO TO 150
         END IF
*
*     Make sure that all processes return the same value of INFO
*
         ITMP( 1 ) = INFO
         ITMP( 2 ) = INFO
*
         CALL IGAMN2D( DESCA( CTXT_ ), 'a', ' ', 1, 1, ITMP, 1, 1, 1,
     $                 -1, -1, 0 )
         CALL IGAMX2D( DESCA( CTXT_ ), 'a', ' ', 1, 1, ITMP( 2 ), 1, 1,
     $                 1, -1, -1, 0 )
*
*
         IF( ITMP( 1 ).NE.ITMP( 2 ) ) THEN
            IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = * )
     $         'Different processes return different INFO'
            RESULT = 1
         ELSE IF( INFO.NE.0 ) THEN
            IF( IAM.EQ.0 ) THEN
               WRITE( NOUT, FMT = 9999 )INFO
               IF( INFO.EQ.(N+1) )
     $         WRITE( NOUT, FMT = 9994 )
            RESULT = 1
         END IF
         ELSE IF( INFO.EQ.14 .AND. LWORK1.GE.MINSIZE ) THEN
                  IF( IAM.EQ.0 )
     $         WRITE( NOUT, FMT = 9996 )INFO
                  RESULT = 1
         END IF
*
         IF( RESULT.EQ.0 .OR. INFO.GT.N ) THEN
*
*     Make sure that different processes return the same eigenvalues.
*     This is a more exhaustive check that provided by PDSTEDC.
*
            DO 70 I = 1, N
                  WORK( I ) = WNEW( I+IPREPAD )
               WORK( I+N ) = WNEW( I+IPREPAD )
   70          CONTINUE
*
            CALL DGAMN2D( DESCA( CTXT_ ), 'a', ' ', N, 1, WORK, N, 1,
     $                       1, -1, -1, 0 )
            CALL DGAMX2D( DESCA( CTXT_ ), 'a', ' ', N, 1,
     $                    WORK( 1+N ), N, 1, 1, -1, -1, 0 )
*
            DO 80 I = 1, N
*
               IF( ABS( WORK( I )-WORK( N+I ) ).GT.ZERO ) THEN
                     IF( IAM.EQ.0 )
     $                 WRITE( NOUT, FMT = 9995 )
                     RESULT = 1
                  GO TO 90
                  END IF
   80          CONTINUE
   90       CONTINUE
         END IF
*
         CALL IGAMX2D( DESCA( CTXT_ ), 'a', ' ', 1, 1, RESULT, 1, 1, 1,
     $                 -1, -1, 0 )
*
*     Compute eps * norm(A)
*
         IF( N.EQ.0 ) THEN
            EPSNORMA = EPS
         ELSE
            EPSNORMA = PDLANSY( 'I', UPLO, N, COPYA, IA, JA, DESCA,
     $                 WORK )*EPS
         END IF
*
*     Note that a couple key variables get redefined in PDSEPCHK
*     as described by this table:
*
*     PDSEPTST name         PDSEPCHK name
*     -------------         -------------
*     COPYA                 A
*     Z                     Q
*     A                     C
*
*
*
*     Perform the |AQ - QE| test
*
            CALL PDFILLPAD( DESCA( CTXT_ ), SIZECHK, 1, WORK, SIZECHK,
     $                      IPREPAD, IPOSTPAD, 4.3D+0 )
*
         RESAQ = 0
*
         CALL PDSEPCHK( N, N, COPYA, IA, JA, DESCA,
     $                     MAX( ABSTOL+EPSNORMA, SAFMIN ), THRESH,
     $                     Z( 1+IPREPAD ), IA, JA, DESCZ,
     $                     A( 1+IPREPAD ), IA, JA, DESCA,
     $                     WNEW( 1+IPREPAD ), WORK( 1+IPREPAD ),
     $               SIZECHK, TSTNRM, RESAQ )
*
            CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDSEPCHK-WORK', SIZECHK, 1,
     $                      WORK, SIZECHK, IPREPAD, IPOSTPAD, 4.3D+0 )
*
         IF( RESAQ.NE.0 ) THEN
            RESULT = 1
            WRITE( NOUT, FMT = 9993 )
         END IF
*
*     Perform the |QTQ - I| test
*
            CALL PDFILLPAD( DESCA( CTXT_ ), SIZEQTQ, 1, WORK, SIZEQTQ,
     $                      IPREPAD, IPOSTPAD, 4.3D+0 )
*
         RESQTQ = 0
*
*
         DO 40 I = 1, (2 + IPREPAD)
            IWORK( I ) = 0
 40      CONTINUE
         CALL PDSEPQTQ( N, N, THRESH, Z( 1+IPREPAD ), IA, JA, DESCZ,
     $                     A( 1+IPREPAD ), IA, JA, DESCA,
     $                  IWORK( 1 ), IWORK( 1 ), WORK( 1 ),
     $                  WORK( IPREPAD+1 ), SIZEQTQ, QTQNRM, INFO,
     $                  RESQTQ )
*
            CALL PDCHEKPAD( DESCA( CTXT_ ), 'PDSEPQTQ-WORK', SIZEQTQ, 1,
     $                      WORK, SIZEQTQ, IPREPAD, IPOSTPAD, 4.3D+0 )
*
         IF( RESQTQ.NE.0 ) THEN
            RESULT = 1
            WRITE( NOUT, FMT = 9992 )
         END IF
*
            IF( INFO.NE.0 ) THEN
               IF( IAM.EQ.0 )
     $            WRITE( NOUT, FMT = 9998 )INFO
               RESULT = 1
            END IF
         END IF
*
*     Check to make sure that we have the right eigenvalues
*
      IF( WKNOWN .AND. N.GT.0 ) THEN
*
*     Find the largest difference between the computed
*     and expected eigenvalues
*
            MINERROR = NORMWIN
               MAXERROR = 0
*
         DO 140 I = 1, N
            ERROR = ABS( WIN( I+IPREPAD )-WNEW( I+IPREPAD ) )
                        MAXERROR = MAX( MAXERROR, ERROR )
 140     CONTINUE
                     MINERROR = MIN( MAXERROR, MINERROR )
*
               IF( MINERROR.GT.NORMWIN*FIVE*THRESH*EPS ) THEN
                  IF( IAM.EQ.0 )
     $               WRITE( NOUT, FMT = 9997 )MINERROR, NORMWIN
                  RESULT = 1
            END IF
         END IF
*
*     All processes should report the same result
*
      CALL IGAMX2D( DESCA( CTXT_ ), 'a', ' ', 1, 1, RESULT, 1, 1, 1, -1,
     $              -1, 0 )
*
  150 CONTINUE
*
*
      RETURN
*
 9999 FORMAT( 'PDSTEDC returned INFO=', I7 )
 9998 FORMAT( 'PDSEPQTQ returned INFO=', I7 )
 9997 FORMAT( 'PDSTEDCSUBTST minerror =', D11.2, ' normwin=', D11.2 )
 9996 FORMAT( 'PDSTEDC returned INFO=', I7,
     $      ' despite adequate workspace' )
 9995 FORMAT( 'Different processes return different eigenvalues' )
 9994 FORMAT( 'Heterogeneity detected by PDSTEDC' )
 9993 FORMAT( 'PDSTEDC failed the |AQ -QE| test' )
 9992 FORMAT( 'PDSTEDC failed the |QTQ -I| test' )
 9991 FORMAT( 'N < 0, negative test case detected for PDSTEDC with'
     $        ' INFO = -3, Passing this case')
*
*     End of PDSTEDCSUBTST
*
      END



