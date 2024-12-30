*
*
      SUBROUTINE PSSQPSUBTST( WKNOWN, JOBZ, UPLO, N, THRESH, ABSTOL, A,
     $                        COPYA, Z, IA, JA, DESCA, WIN, WNEW,
     $                        IPREPAD, IPOSTPAD, WORK, LWORK, LWORK1,
     $                        RESULT, TSTNRM, QTQNRM, NOUT )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     November 15, 1997
*     Modifications Copyright (c) 2024-2025 Advanced Micro Devices, Inc. All rights reserved.
*
      use,intrinsic :: ieee_arithmetic
*     .. Scalar Arguments ..
      LOGICAL            WKNOWN
      CHARACTER          JOBZ, UPLO
      INTEGER            IA, IPOSTPAD, IPREPAD, JA, LWORK, LWORK1, N,
     $                   NOUT, RESULT
      REAL               ABSTOL, QTQNRM, THRESH, TSTNRM
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      REAL               A( * ), COPYA( * ), WIN( * ), WNEW( * ),
     $                   WORK( * ), Z( * )
*     ..
*
*  Purpose
*  =======
*
*  PSSQPSUBTST calls PSSYEV and then tests the output of
*  PSSYEV
*  If JOBZ = 'V' then the following two tests are performed:
*     |AQ -QL| / (abstol + eps * norm(A) ) < N*THRESH
*     |QT * Q - I| / eps * norm(A) < N*THRESH
*  If WKNOWN then
*     we check to make sure that the eigenvalues match expectations
*     i.e. |WIN - WNEW(1+IPREPAD)| / (eps * |WIN|) < THRESH
*     where WIN is the array of eigenvalues as computed by
*     PSSYEV when eigenvectors are requested
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
*  JOBZ    (global input) CHARACTER*1
*          Specifies whether or not to compute the eigenvectors:
*          = 'N':  Compute eigenvalues only.
*          = 'V':  Compute eigenvalues and eigenvectors.
*          Must be 'V' on first call to PSSQPSUBTST
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
*  THRESH  (global input) REAL
*          A test will count as "failed" if the "error", computed as
*          described below, exceeds THRESH.  Note that the error
*          is scaled to be O(1), so THRESH should be a reasonably
*          small multiple of 1, e.g., 10 or 100.  In particular,
*          it should not depend on the precision (single vs. double)
*          or the size of the matrix.  It must be at least zero.
*
*  ABSTOL  (global input) REAL
*          The absolute tolerance for the eigenvalues. An
*          eigenvalue is considered to be located if it has
*          been determined to lie in an interval whose width
*          is "abstol" or less. If "abstol" is less than or equal
*          to zero, then ulp*|T| will be used, where |T| is
*          the 1-norm of the matrix.
*
*  A       (local workspace) REAL array
*          global dimension (N, N), local dimension (DESCA(DLEN_), NQ)
*          A is distributed in a block cyclic manner over both rows
*          and columns.
*          See PSSYEV for a description of block cyclic layout.
*          The test matrix, which is then modified by PSSYEV
*          A has already been padded front and back, use A(1+IPREPAD)
*
*  COPYA   (local input) REAL array, dimension(N*N)
*          COPYA holds a copy of the original matrix A
*          identical in both form and content to A
*
*  Z       (local workspace) REAL array, dim (N*N)
*          Z is distributed in the same manner as A
*          Z contains the eigenvector matrix
*          Z is used as workspace by the test routines
*          PSSEPCHK and PSSEPQTQ.
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
*  WIN     (global input) REAL array, dimension (N)
*          If .not. WKNOWN, WIN is ignored on input
*          Otherwise, WIN() is taken as the standard by which the
*          eigenvalues are to be compared against.
*
*  WNEW    (global workspace) REAL array, dimension (N)
*          The eigenvalues as computed by this call to PSSYEV.
*          WNEW has already been padded front and back,
*          use WNEW(1+IPREPAD)
*
*  WORK    (local workspace) REAL array, dimension (LWORK)
*          WORK has already been padded front and back,
*          use WORK(1+IPREPAD)
*
*  LWORK   (local input) INTEGER
*          The actual length of the array WORK after padding.
*
*
*  LWORK1  (local input) INTEGER
*          The amount of real workspace to pass to PSSYEV
*
*  RESULT  (global output) INTEGER
*          The result of this call to PSSYEV
*          RESULT = -3   =>  This process did not participate
*          RESULT = 0    =>  All tests passed
*          RESULT = 1    =>  ONe or more tests failed
*
*  TSTNRM  (global output) REAL
*          |AQ- QL| / (ABSTOL+EPS*|A|)*N
*
*  QTQNRM  (global output) REAL
*          |QTQ -I| / N*EPS
*
*     .. Parameters ..
*
      INTEGER            BLOCK_CYCLIC_2D, DLEN_, DT_, CTXT_, M_, N_,
     $                   MB_, NB_, RSRC_, CSRC_, LLD_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DT_ = 1,
     $                   CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                   RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      REAL               FIVE, NEGONE, PADVAL, ZERO
      PARAMETER          ( PADVAL = 13.5285E+0, FIVE = 5.0E+0,
     $                   NEGONE = -1.0E+0, ZERO = 0.0E+0 )
*     ..
*     .. Local Scalars ..
      INTEGER            I, IAM, INFO, ISIZESUBTST, ISIZESYEVX,
     $                   ISIZETST, J, EIGS, MINSIZE, MQ, MYCOL, MYROW,
     $                   NP, NPCOL, NPROW, NQ, RESAQ, RESQTQ,
     $                   SIZECHK, SIZEMQRLEFT, SIZEMQRRIGHT, SIZEQRF,
     $                   SIZEQTQ, SIZESUBTST, SIZESYEV, SIZESYEVX,
     $                   SIZETMS, SIZETST, SIZESYEVD, ISIZESYEVD
      REAL               EPS, EPSNORMA, ERROR, MAXERROR, MINERROR,
     $                   NORMWIN, SAFMIN
*     ..
*     .. Local Arrays ..
      INTEGER            DESCZ( DLEN_ ), ITMP( 2 ),
     $                   IWORK( 2 )
*     ..
*     .. External Functions ..
*
      LOGICAL            LSAME
      INTEGER            NUMROC
      REAL               PSLAMCH, PSLANSY
      EXTERNAL           LSAME, NUMROC, PSLAMCH, PSLANSY
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, DESCINIT, IGAMN2D, IGAMX2D,
     $                   PSCHEKPAD, PSELSET, PSFILLPAD, PSLASIZESQP,
     $                   PSSEPCHK, PSSEPQTQ, PSSYEV, SGAMN2D, SGAMX2D,
     $                   SLACPY, SLBOOT, SLTIMER
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, MAX, MIN, MOD
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
      CALL PSLASIZESQP( DESCA, IPREPAD, IPOSTPAD, SIZEMQRLEFT,
     $                  SIZEMQRRIGHT, SIZEQRF, SIZETMS, SIZEQTQ,
     $                  SIZECHK, SIZESYEVX, ISIZESYEVX, SIZESYEV,
     $                  SIZESYEVD, ISIZESYEVD, SIZESUBTST, ISIZESUBTST,
     $                  SIZETST, ISIZETST )
*
      TSTNRM = NEGONE
      QTQNRM = NEGONE
      EPS = PSLAMCH( DESCA( CTXT_ ), 'Eps' )
      SAFMIN = PSLAMCH( DESCA( CTXT_ ), 'Safe min' )
*
      NORMWIN = SAFMIN / EPS
      IF( N.GE.1 )
     $   NORMWIN = MAX( ABS( WIN( 1+IPREPAD ) ),
     $                  ABS( WIN( N+IPREPAD ) ), NORMWIN )
*
*     Make sure that we aren't using information from previous calls
*
      DO 10 I = 1, LWORK1, 1
         WORK( I+IPREPAD ) = 14.3E+0
   10 CONTINUE
*
      DO 30 I = 1, N
         WNEW( I+IPREPAD ) = 3.14159E+0
   30 CONTINUE
*
      DO 40 I = 1, 2
         IWORK( I ) = 0
   40 CONTINUE
*
      IF( LSAME( JOBZ, 'N' ) ) THEN
         EIGS = 0
      ELSE
         EIGS = N
      END IF
*
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
      RESULT = -3
      IF( MYROW.GE.NPROW .OR. MYROW.LT.0 )
     $   GO TO 150
      RESULT = 0
*
      NP = NUMROC( N, DESCA( MB_ ), MYROW, 0, NPROW )
      NQ = NUMROC( N, DESCA( NB_ ), MYCOL, 0, NPCOL )
      MQ = NUMROC( EIGS, DESCA( NB_ ), MYCOL, 0, NPCOL )
*
*     Find the amount of workspace needed with or without eigenvectors.
*
      CALL PSLASIZESYEV( JOBZ, N, DESCA, MINSIZE )
*
      CALL SLACPY( 'A', NP, NQ, COPYA, DESCA( LLD_ ), A( 1+IPREPAD ),
     $             DESCA( LLD_ ) )
*
      CALL PSFILLPAD( DESCA( CTXT_ ), NP, NQ, A, DESCA( LLD_ ), IPREPAD,
     $                IPOSTPAD, PADVAL )
*
      CALL PSFILLPAD( DESCZ( CTXT_ ), NP, MQ, Z, DESCZ( LLD_ ), IPREPAD,
     $                IPOSTPAD, PADVAL+1.0E+0 )
*
      CALL PSFILLPAD( DESCA( CTXT_ ), N, 1, WNEW, N, IPREPAD, IPOSTPAD,
     $                PADVAL+2.0E+0 )
*
      CALL PSFILLPAD( DESCA( CTXT_ ), LWORK1, 1, WORK, LWORK1, IPREPAD,
     $                IPOSTPAD, PADVAL+4.0E+0 )
*
*     Make sure that PSSYEV does not cheat (i.e. use answers
*     already computed.)
*
      DO 60 I = 1, N, 1
         DO 50 J = 1, EIGS, 1
            CALL PSELSET( Z( 1+IPREPAD ), I, J, DESCA, 13.0E+0 )
   50    CONTINUE
   60 CONTINUE
*
      CALL SLBOOT
      CALL SLTIMER( 1 )
      CALL SLTIMER( 6 )
      CALL PSSYEV( JOBZ, UPLO, N, A( 1+IPREPAD ), IA, JA, DESCA,
     $             WNEW( 1+IPREPAD ), Z( 1+IPREPAD ), IA, JA, DESCA,
     $             WORK( 1+IPREPAD ), LWORK1, INFO )
      CALL SLTIMER( 6 )
      CALL SLTIMER( 1 )
*
*     Skip checkpad conidtions for negative cases
      IF( THRESH.LE.0 .OR. N.LT.0) THEN
         RESULT = 0
      ELSE
         CALL PSCHEKPAD( DESCA( CTXT_ ), 'PSSYEV-A', NP, NQ, A,
     $                   DESCA( LLD_ ), IPREPAD, IPOSTPAD, PADVAL )
*
         CALL PSCHEKPAD( DESCZ( CTXT_ ), 'PSSYEV-Z', NP, MQ, Z,
     $                   DESCZ( LLD_ ), IPREPAD, IPOSTPAD,
     $                   PADVAL+1.0E+0 )
*
         CALL PSCHEKPAD( DESCA( CTXT_ ), 'PSSYEV-WNEW', N, 1, WNEW, N,
     $                   IPREPAD, IPOSTPAD, PADVAL+2.0E+0 )
*
         CALL PSCHEKPAD( DESCA( CTXT_ ), 'PSSYEV-WORK', LWORK1, 1,
     $                   WORK, LWORK1, IPREPAD, IPOSTPAD,
     $                   PADVAL+4.0E+0 )
*
*     Check INFO
*
*

*      When N < 0/Invalid, PSSYEV INFO = -3
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
           IF (.NOT.(RES_FLAG)) THEN
             RESULT = 1
           ELSE
             RESULT = 0
*    RESET RESIDUAL FLAG
             RES_FLAG = .FALSE.
           END IF
           GO TO 150
         END IF

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
     $            WRITE( NOUT, FMT = 9994 )
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
*     This is a more exhaustive check that provided by PSSYEV.
*
            DO 70 I = 1, N
               WORK( I ) = WNEW( I+IPREPAD )
               WORK( I+N ) = WNEW( I+IPREPAD )
 70         CONTINUE
*
            CALL SGAMN2D( DESCA( CTXT_ ), 'a', ' ', N, 1, WORK, N, 1,
     $                    1, -1, -1, 0 )
            CALL SGAMX2D( DESCA( CTXT_ ), 'a', ' ', N, 1,
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
 80         CONTINUE
 90         CONTINUE
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
            EPSNORMA = PSLANSY( 'I', UPLO, N, COPYA, IA, JA, DESCA,
     $                 WORK )*EPS
         END IF
*
*     Note that a couple key variables get redefined in PSSEPCHK
*     as described by this table:
*
*     PSSEPTST name         PSSEPCHK name
*     -------------         -------------
*     COPYA                 A
*     Z                     Q
*     A                     C
*
*
         IF( LSAME( JOBZ, 'V' ) ) THEN
*
*     Perform the |AQ - QE| test
*
            CALL PSFILLPAD( DESCA( CTXT_ ), SIZECHK, 1, WORK, SIZECHK,
     $                      IPREPAD, IPOSTPAD, 4.3E+0 )
*
            RESAQ = 0
*
            CALL PSSEPCHK( N, N, COPYA, IA, JA, DESCA,
     $                     MAX( ABSTOL+EPSNORMA, SAFMIN ), THRESH,
     $                     Z( 1+IPREPAD ), IA, JA, DESCZ,
     $                     A( 1+IPREPAD ), IA, JA, DESCA,
     $                     WNEW( 1+IPREPAD ), WORK( 1+IPREPAD ),
     $                     SIZECHK, TSTNRM, RESAQ )
*
            CALL PSCHEKPAD( DESCA( CTXT_ ), 'PSSEPCHK-WORK', SIZECHK, 1,
     $                      WORK, SIZECHK, IPREPAD, IPOSTPAD, 4.3E+0 )
*
            IF( RESAQ.NE.0 ) THEN
               RESULT = 1
               WRITE( NOUT, FMT = 9993 )
            END IF
*
*     Perform the |QTQ - I| test
*
            CALL PSFILLPAD( DESCA( CTXT_ ), SIZEQTQ, 1, WORK, SIZEQTQ,
     $                      IPREPAD, IPOSTPAD, 4.3E+0 )
*
            RESQTQ = 0
*
            CALL PSSEPQTQ( N, N, THRESH, Z( 1+IPREPAD ), IA, JA, DESCZ,
     $                     A( 1+IPREPAD ), IA, JA, DESCA,
     $                     IWORK( 1 ), IWORK( 1 ), WORK( 1 ),
     $                     WORK( IPREPAD+1 ), SIZEQTQ, QTQNRM, INFO,
     $                     RESQTQ )
*
            CALL PSCHEKPAD( DESCA( CTXT_ ), 'PSSEPQTQ-WORK', SIZEQTQ, 1,
     $                      WORK, SIZEQTQ, IPREPAD, IPOSTPAD, 4.3E+0 )
*
            IF( RESQTQ.NE.0 ) THEN
               RESULT = 1
               WRITE( NOUT, FMT = 9992 )
            END IF
*
            IF( INFO.NE.0 ) THEN
               IF( IAM.EQ.0 )
     $              WRITE( NOUT, FMT = 9998 )INFO
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
 140        CONTINUE
            MINERROR = MIN( MAXERROR, MINERROR )
*
            IF( MINERROR.GT.NORMWIN*FIVE*THRESH*EPS ) THEN
               IF( IAM.EQ.0 )
     $              WRITE( NOUT, FMT = 9997 )MINERROR, NORMWIN
               RESULT = 1
            END IF
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
 9999 FORMAT( 'PSSYEV returned INFO=', I7 )
 9998 FORMAT( 'PSSEPQTQ in PSSQPSUBTST returned INFO=', I7 )
 9997 FORMAT( 'PSSQPSUBTST minerror =', D11.2, ' normwin=', D11.2 )
 9996 FORMAT( 'PSSYEV returned INFO=', I7,
     $      ' despite adequate workspace' )
 9995 FORMAT( 'Different processes return different eigenvalues' )
 9994 FORMAT( 'Heterogeneity detected by PSSYEV' )
 9993 FORMAT( 'PSSYEV failed the |AQ -QE| test' )
 9992 FORMAT( 'PSSYEV failed the |QTQ -I| test' )
 9991 FORMAT( 'N < 0, negative test case detected with expected'
     $        ' INFO = -3, Passing this case')
*
*     End of PSSQPSUBTST
*
      END
