      SUBROUTINE PDMATGEN( ICTXT, AFORM, DIAG, M, N, MB, NB, A, LDA,
     $                     IAROW, IACOL, ISEED, IROFF, IRNUM, ICOFF,
     $                     ICNUM, MYROW, MYCOL, NPROW, NPCOL )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*     Modifications Copyright (c) 2024 Advanced Micro Devices, Inc. All rights reserved.
*
*     .. Scalar Arguments ..
      CHARACTER*1        AFORM, DIAG
      INTEGER            IACOL, IAROW, ICNUM, ICOFF, ICTXT, IRNUM,
     $                   IROFF, ISEED, LDA, M, MB, MYCOL, MYROW, N,
     $                   NB, NPCOL, NPROW
*     ..
*     .. Array Arguments ..
      DOUBLE PRECISION   A( LDA, * )
*     ..
*
*  Purpose
*  =======
*
*  PDMATGEN : Parallel Real Double precision MATrix GENerator.
*  Generate (or regenerate) a distributed matrix A (or sub-matrix of A).
*
*  Arguments
*  =========
*
*  ICTXT   (global input) INTEGER
*          The BLACS context handle, indicating the global context of
*          the operation. The context itself is global.
*
*  AFORM   (global input) CHARACTER*1
*          if AFORM = 'S' : A is returned is a symmetric matrix.
*          if AFORM = 'H' : A is returned is a Hermitian matrix.
*          if AFORM = 'T' : A is overwritten with the transpose of
*                           what would normally be generated.
*          if AFORM = 'C' : A is overwritten with the conjugate trans-
*                           pose of what would normally be generated.
*          otherwise a random matrix is generated.
*
*  DIAG    (global input) CHARACTER*1
*          if DIAG = 'D' : A is diagonally dominant.
*
*  M       (global input) INTEGER
*          The number of rows in the generated distributed matrix.
*
*  N       (global input) INTEGER
*          The number of columns in the generated distributed
*          matrix.
*
*  MB      (global input) INTEGER
*          The row blocking factor of the distributed matrix A.
*
*  NB      (global input) INTEGER
*          The column blocking factor of the distributed matrix A.
*
*  A       (local output) DOUBLE PRECISION, pointer into the local
*          memory to an array of dimension ( LDA, * ) containing the
*          local pieces of the distributed matrix.
*
*  LDA     (local input) INTEGER
*          The leading dimension of the array containing the local
*          pieces of the distributed matrix A.
*
*  IAROW   (global input) INTEGER
*          The row processor coordinate which holds the first block
*          of the distributed matrix A.
*
*  IACOL   (global input) INTEGER
*          The column processor coordinate which holds the first
*          block of the distributed matrix A.
*
*  ISEED   (global input) INTEGER
*          The seed number to generate the distributed matrix A.
*
*  IROFF   (local input) INTEGER
*          The number of local rows of A that have already been
*          generated.  It should be a multiple of MB.
*
*  IRNUM   (local input) INTEGER
*          The number of local rows to be generated.
*
*  ICOFF   (local input) INTEGER
*          The number of local columns of A that have already been
*          generated.  It should be a multiple of NB.
*
*  ICNUM   (local input) INTEGER
*          The number of local columns to be generated.
*
*  MYROW   (local input) INTEGER
*          The row process coordinate of the calling process.
*
*  MYCOL   (local input) INTEGER
*          The column process coordinate of the calling process.
*
*  NPROW   (global input) INTEGER
*          The number of process rows in the grid.
*
*  NPCOL   (global input) INTEGER
*          The number of process columns in the grid.
*
*  Notes
*  =====
*
*  The code is originally developed by David Walker, ORNL,
*  and modified by Jaeyoung Choi, ORNL.
*
*  Reference: G. Fox et al.
*  Section 12.3 of "Solving problems on concurrent processors Vol. I"
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            MULT0, MULT1, IADD0, IADD1
      PARAMETER        ( MULT0=20077, MULT1=16838, IADD0=12345,
     $                   IADD1=0 )
      DOUBLE PRECISION   ONE, TWO
      PARAMETER          ( ONE = 1.0D+0, TWO = 2.0D+0 )
*     ..
*     .. Local Scalars ..
      LOGICAL            SYMM, HERM, TRAN, EXT_FLAG
      INTEGER            I, IC, IK, INFO, IOFFC, IOFFR, IR, J, JK,
     $                   JUMP1, JUMP2, JUMP3, JUMP4, JUMP5, JUMP6,
     $                   JUMP7, MAXMN, MEND, MOFF, MP, MRCOL, MRROW,
     $                   NEND, NOFF, NPMB, NQ, NQNB
*     ..
*     .. Local Arrays ..
      INTEGER            IADD(2), IA1(2), IA2(2), IA3(2), IA4(2),
     $                   IA5(2), IB1(2), IB2(2), IB3(2), IC1(2), IC2(2),
     $                   IC3(2), IC4(2), IC5(2), IRAN1(2), IRAN2(2),
     $                   IRAN3(2), IRAN4(2), ITMP1(2), ITMP2(2),
     $                   ITMP3(2), JSEED(2), MULT(2)
*     ..
*     .. External Subroutines ..
      EXTERNAL           JUMPIT, PXERBLA, SETRAN, XJUMPM
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ABS, MAX, MOD
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      INTEGER            ICEIL, NUMROC
      INTEGER            CNT1, CNT2, CNT,TOT_CNT, DIV_FACTOR, REGION
      DOUBLE PRECISION   PDRAND
      EXTERNAL           ICEIL, NUMROC, LSAME, PDRAND
*
      CHARACTER*80 arg
      INTEGER numArgs, count
      LOGICAL :: help_flag = .false.
      INTEGER :: NAN_PERCENT = 0
      INTEGER :: INF_PERCENT = 0
*     ..
*     .. Executable Statements ..
*
*     Test the input arguments
*
      MP   = NUMROC( M, MB, MYROW, IAROW, NPROW )
      NQ   = NUMROC( N, NB, MYCOL, IACOL, NPCOL )
      SYMM = LSAME( AFORM, 'S' )
      HERM = LSAME( AFORM, 'H' )
      TRAN = LSAME( AFORM, 'T' )
      EXT_FLAG = .FALSE.

*     Take command-line arguments if requested
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
                  EXT_FLAG = .TRUE.
               END IF
            case ("-nan")
               call get_command_argument(count + 1, arg)
            read(arg, *) NAN_PERCENT
               IF (NAN_PERCENT .GT. 0) THEN
                  EXT_FLAG = .TRUE.
               END IF
            case default
               print *, "Invalid option: ", arg
               help_flag = .true.
               exit
         end select
      end do

      IF ( INF_PERCENT + NAN_PERCENT > 100) THEN
        print *,"Sum of INF and NaN is", INF_PERCENT+NAN_PERCENT,"%"
        help_flag = .true.
      END IF
      IF ( INF_PERCENT < 0 .OR. NAN_PERCENT < 0) THEN
         print *, "Negative INF / NaN value is not allowed"
         help_flag = .true.
      END IF

*     Display help message if requested
      IF (help_flag .AND. IAM.EQ.0) THEN
         print *, ""
         print *, "Options:"
         print *, "  -h, --help            Display this help message"
         print *, "  -inf <int>            INF percentage in input",
     $               " matrix (default: 0 %)"
         print *, "  -nan <int>            NaN percentage in input",
     $               " matrix (default: 0 %)"
         print *, ""
         print *, "  Note: INF + NaN values in input matrix",
     $               " should be in the range of 0-100 %"
         print *, ""
         stop
      END IF
*
      INFO = 0
      IF( .NOT.LSAME( DIAG, 'D' ) .AND.
     $         .NOT.LSAME( DIAG, 'N' )        ) THEN
         INFO = 3
      ELSE IF( SYMM.OR.HERM ) THEN
         IF( M.NE.N ) THEN
            INFO = 5
         ELSE IF( MB.NE.NB ) THEN
            INFO = 7
         END IF
      ELSE IF( M.LT.0 ) THEN
         INFO = 4
      ELSE IF( N.LT.0 ) THEN
         INFO = 5
      ELSE IF( MB.LT.1 ) THEN
         INFO = 6
      ELSE IF( NB.LT.1 ) THEN
         INFO = 7
      ELSE IF( LDA.LT.0 ) THEN
         INFO = 9
      ELSE IF( ( IAROW.LT.0 ).OR.( IAROW.GE.NPROW ) ) THEN
         INFO = 10
      ELSE IF( ( IACOL.LT.0 ).OR.( IACOL.GE.NPCOL ) ) THEN
         INFO = 11
      ELSE IF( MOD(IROFF,MB).GT.0 ) THEN
         INFO = 13
      ELSE IF( IRNUM.GT.(MP-IROFF) ) THEN
         INFO = 14
      ELSE IF( MOD(ICOFF,NB).GT.0 ) THEN
         INFO = 15
      ELSE IF( ICNUM.GT.(NQ-ICOFF) ) THEN
         INFO = 16
      ELSE IF( ( MYROW.LT.0 ).OR.( MYROW.GE.NPROW ) ) THEN
         INFO = 17
      ELSE IF( ( MYCOL.LT.0 ).OR.( MYCOL.GE.NPCOL ) ) THEN
         INFO = 18
      END IF
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PDMATGEN', INFO )
         RETURN
      END IF
*
      MRROW = MOD( NPROW+MYROW-IAROW, NPROW )
      MRCOL = MOD( NPCOL+MYCOL-IACOL, NPCOL )
      NPMB  = NPROW * MB
      NQNB  = NPCOL * NB
      MOFF  = IROFF / MB
      NOFF  = ICOFF / NB
      MEND  = ICEIL(IRNUM, MB) + MOFF
      NEND  = ICEIL(ICNUM, NB) + NOFF
*
      MULT(1)  = MULT0
      MULT(2)  = MULT1
      IADD(1)  = IADD0
      IADD(2)  = IADD1
      JSEED(1) = ISEED
      JSEED(2) = 0
*
*     Extreme-value parameter caclculations
      IF( LSAME( DIAG, 'D' ) ) THEN
             DIV_FACTOR = 2
      ELSE
             DIV_FACTOR = 4
      END IF
*     Find type of matrix to identify where to fill INF/NAN,
*     If UPPER_TRIANGULAR_MATRIX., start above DIAG
      IF( LSAME(AFORM, 'U' ) ) THEN
           REGION = (IRNUM * ICNUM)/DIV_FACTOR
*     If LOWER_TRIANGULAR/GENERAL MATRIX, start at beginning
      ELSE
           REGION = 1
      END IF
      IF (EXT_FLAG) THEN
           ZERO1 = 0.0E0
           ONE1 = 1.0E0
*          Calculate the number of NANs/INFs per grid
           CNT1 = (IRNUM * ICNUM * NAN_PERCENT)/100
           CNT2 = (IRNUM * ICNUM * INF_PERCENT)/100
           CNT1 = CEILING(REAL(CNT1))
           CNT2 = CEILING(REAL(CNT2))
*          When Percentage requested by the user is low
*          Replace atleast one element with NAN/INF
*          Applicable for smaller matrices [2x2]
           IF(NAN_PERCENT .GT. 0 .AND. CNT1 .EQ. 0 ) THEN
             CNT1 = CNT1 + 1
             PRINT *, 'NAN Percentage is too low,',
     $                'Including one NAN element'
           END IF
           IF(INF_PERCENT .GT. 0 .AND. CNT2 .EQ. 0 ) THEN
             CNT2 = CNT2 + 1
             PRINT *, 'INF Percentage is too low,',
     $                'Including one INF element'
           END IF
      END IF
*
*     Symmetric or Hermitian matrix will be generated.
*
      IF( (SYMM.OR.HERM) .AND. .NOT.(EXT_FLAG) ) THEN
*
*        First, generate the lower triangular part (with diagonal block)
*
         JUMP1 = 1
         JUMP2 = NPMB
         JUMP3 = M
         JUMP4 = NQNB
         JUMP5 = NB
         JUMP6 = MRCOL
         JUMP7 = MB*MRROW
*
         CALL XJUMPM( JUMP1, MULT, IADD, JSEED, IRAN1, IA1,   IC1 )
         CALL XJUMPM( JUMP2, MULT, IADD, IRAN1, ITMP1, IA2,   IC2 )
         CALL XJUMPM( JUMP3, MULT, IADD, IRAN1, ITMP1, IA3,   IC3 )
         CALL XJUMPM( JUMP4, IA3,  IC3,  IRAN1, ITMP1, IA4,   IC4 )
         CALL XJUMPM( JUMP5, IA3,  IC3,  IRAN1, ITMP1, IA5,   IC5 )
         CALL XJUMPM( JUMP6, IA5,  IC5,  IRAN1, ITMP3, ITMP1, ITMP2 )
         CALL XJUMPM( JUMP7, MULT, IADD, ITMP3, IRAN1, ITMP1, ITMP2 )
         CALL XJUMPM( NOFF,  IA4,  IC4,  IRAN1, ITMP1, ITMP2, ITMP3 )
         CALL XJUMPM( MOFF,  IA2,  IC2,  ITMP1, IRAN1, ITMP2, ITMP3 )
         CALL SETRAN( IRAN1, IA1,  IC1 )
*
         DO 10 I = 1, 2
            IB1(I) = IRAN1(I)
            IB2(I) = IRAN1(I)
            IB3(I) = IRAN1(I)
   10    CONTINUE
*
         JK = 1
         DO 80 IC = NOFF+1, NEND
            IOFFC = ((IC-1)*NPCOL+MRCOL) * NB
            DO 70 I = 1, NB
               IF( JK .GT. ICNUM ) GO TO 90
*
               IK = 1
               DO 50 IR = MOFF+1, MEND
                  IOFFR = ((IR-1)*NPROW+MRROW) * MB
*
                  IF( IOFFR .GT. IOFFC ) THEN
                     DO 20 J = 1, MB
                        IF( IK .GT. IRNUM ) GO TO 60
                        A(IK,JK) = ONE - TWO*PDRAND(0)
                        IK = IK + 1
   20                CONTINUE
*
                  ELSE IF( IOFFC .EQ. IOFFR ) THEN
                     IK = IK + I - 1
                     IF( IK .GT. IRNUM ) GO TO 60
                     DO 30 J = 1, I-1
                        A(IK,JK) = ONE - TWO*PDRAND(0)
   30                CONTINUE
                     A(IK,JK) = ONE - TWO*PDRAND(0)
                     DO 40 J = 1, MB-I
                        IF( IK+J .GT. IRNUM ) GO TO 60
                        A(IK+J,JK) = ONE - TWO*PDRAND(0)
                        A(IK,JK+J) = A(IK+J,JK)
   40                CONTINUE
                     IK = IK + MB - I + 1
                  ELSE
                     IK = IK + MB
                  END IF
*
                  CALL JUMPIT( IA2, IC2, IB1, IRAN2 )
                  IB1(1) = IRAN2(1)
                  IB1(2) = IRAN2(2)
   50          CONTINUE
*
   60          CONTINUE
               JK = JK + 1
               CALL JUMPIT( IA3, IC3, IB2, IRAN3 )
               IB1(1) = IRAN3(1)
               IB1(2) = IRAN3(2)
               IB2(1) = IRAN3(1)
               IB2(2) = IRAN3(2)
   70       CONTINUE
*
            CALL JUMPIT( IA4, IC4, IB3, IRAN4 )
            IB1(1) = IRAN4(1)
            IB1(2) = IRAN4(2)
            IB2(1) = IRAN4(1)
            IB2(2) = IRAN4(2)
            IB3(1) = IRAN4(1)
            IB3(2) = IRAN4(2)
   80    CONTINUE
*
*        Next, generate the upper triangular part.
*
   90    CONTINUE
         MULT(1)  = MULT0
         MULT(2)  = MULT1
         IADD(1)  = IADD0
         IADD(2)  = IADD1
         JSEED(1) = ISEED
         JSEED(2) = 0
*
         JUMP1 = 1
         JUMP2 = NQNB
         JUMP3 = N
         JUMP4 = NPMB
         JUMP5 = MB
         JUMP6 = MRROW
         JUMP7 = NB*MRCOL
*
         CALL XJUMPM( JUMP1, MULT, IADD, JSEED, IRAN1, IA1,   IC1 )
         CALL XJUMPM( JUMP2, MULT, IADD, IRAN1, ITMP1, IA2,   IC2 )
         CALL XJUMPM( JUMP3, MULT, IADD, IRAN1, ITMP1, IA3,   IC3 )
         CALL XJUMPM( JUMP4, IA3,  IC3,  IRAN1, ITMP1, IA4,   IC4 )
         CALL XJUMPM( JUMP5, IA3,  IC3,  IRAN1, ITMP1, IA5,   IC5 )
         CALL XJUMPM( JUMP6, IA5,  IC5,  IRAN1, ITMP3, ITMP1, ITMP2 )
         CALL XJUMPM( JUMP7, MULT, IADD, ITMP3, IRAN1, ITMP1, ITMP2 )
         CALL XJUMPM( MOFF,  IA4,  IC4,  IRAN1, ITMP1, ITMP2, ITMP3 )
         CALL XJUMPM( NOFF,  IA2,  IC2,  ITMP1, IRAN1, ITMP2, ITMP3 )
         CALL SETRAN( IRAN1, IA1,  IC1 )
*
         DO 100 I = 1, 2
            IB1(I) = IRAN1(I)
            IB2(I) = IRAN1(I)
            IB3(I) = IRAN1(I)
  100    CONTINUE
*
         IK = 1
         DO 150 IR = MOFF+1, MEND
            IOFFR = ((IR-1)*NPROW+MRROW) * MB
            DO 140 J = 1, MB
               IF( IK .GT. IRNUM ) GO TO 160
               JK = 1
               DO 120 IC = NOFF+1, NEND
                  IOFFC = ((IC-1)*NPCOL+MRCOL) * NB
                  IF( IOFFC .GT. IOFFR ) THEN
                     DO 110 I = 1, NB
                        IF( JK .GT. ICNUM ) GO TO 130
                        A(IK,JK) = ONE - TWO*PDRAND(0)
                        JK = JK + 1
  110                CONTINUE
                  ELSE
                     JK = JK + NB
                  END IF
                  CALL JUMPIT( IA2, IC2, IB1, IRAN2 )
                  IB1(1) = IRAN2(1)
                  IB1(2) = IRAN2(2)
  120          CONTINUE
*
  130          CONTINUE
               IK = IK + 1
               CALL JUMPIT( IA3, IC3, IB2, IRAN3 )
               IB1(1) = IRAN3(1)
               IB1(2) = IRAN3(2)
               IB2(1) = IRAN3(1)
               IB2(2) = IRAN3(2)
  140       CONTINUE
*
            CALL JUMPIT( IA4, IC4, IB3, IRAN4 )
            IB1(1) = IRAN4(1)
            IB1(2) = IRAN4(2)
            IB2(1) = IRAN4(1)
            IB2(2) = IRAN4(2)
            IB3(1) = IRAN4(1)
            IB3(2) = IRAN4(2)
  150    CONTINUE
  160    CONTINUE
*
*     (Conjugate) Transposed matrix A will be generated.
*
      ELSE IF(( TRAN .OR. LSAME( AFORM, 'C' )) .AND.
     $              .NOT.(EXT_FLAG) ) THEN
*
         JUMP1 = 1
         JUMP2 = NQNB
         JUMP3 = N
         JUMP4 = NPMB
         JUMP5 = MB
         JUMP6 = MRROW
         JUMP7 = NB*MRCOL
*
         CALL XJUMPM( JUMP1, MULT, IADD, JSEED, IRAN1, IA1,   IC1 )
         CALL XJUMPM( JUMP2, MULT, IADD, IRAN1, ITMP1, IA2,   IC2 )
         CALL XJUMPM( JUMP3, MULT, IADD, IRAN1, ITMP1, IA3,   IC3 )
         CALL XJUMPM( JUMP4, IA3,  IC3,  IRAN1, ITMP1, IA4,   IC4 )
         CALL XJUMPM( JUMP5, IA3,  IC3,  IRAN1, ITMP1, IA5,   IC5 )
         CALL XJUMPM( JUMP6, IA5,  IC5,  IRAN1, ITMP3, ITMP1, ITMP2 )
         CALL XJUMPM( JUMP7, MULT, IADD, ITMP3, IRAN1, ITMP1, ITMP2 )
         CALL XJUMPM( MOFF,  IA4,  IC4,  IRAN1, ITMP1, ITMP2, ITMP3 )
         CALL XJUMPM( NOFF,  IA2,  IC2,  ITMP1, IRAN1, ITMP2, ITMP3 )
         CALL SETRAN( IRAN1, IA1,  IC1 )
*
         DO 170 I = 1, 2
            IB1(I) = IRAN1(I)
            IB2(I) = IRAN1(I)
            IB3(I) = IRAN1(I)
  170    CONTINUE
*
         IK = 1
         DO 220 IR = MOFF+1, MEND
            IOFFR = ((IR-1)*NPROW+MRROW) * MB
            DO 210 J = 1, MB
               IF( IK .GT. IRNUM ) GO TO 230
               JK = 1
               DO 190 IC = NOFF+1, NEND
                  IOFFC = ((IC-1)*NPCOL+MRCOL) * NB
                  DO 180 I = 1, NB
                     IF( JK .GT. ICNUM ) GO TO 200
                     A(IK,JK) = ONE - TWO*PDRAND(0)
                     JK = JK + 1
  180             CONTINUE
                  CALL JUMPIT( IA2, IC2, IB1, IRAN2 )
                  IB1(1) = IRAN2(1)
                  IB1(2) = IRAN2(2)
  190          CONTINUE
*
  200          CONTINUE
               IK = IK + 1
               CALL JUMPIT( IA3, IC3, IB2, IRAN3 )
               IB1(1) = IRAN3(1)
               IB1(2) = IRAN3(2)
               IB2(1) = IRAN3(1)
               IB2(2) = IRAN3(2)
  210       CONTINUE
*
            CALL JUMPIT( IA4, IC4, IB3, IRAN4 )
            IB1(1) = IRAN4(1)
            IB1(2) = IRAN4(2)
            IB2(1) = IRAN4(1)
            IB2(2) = IRAN4(2)
            IB3(1) = IRAN4(1)
            IB3(2) = IRAN4(2)
  220    CONTINUE
  230    CONTINUE
*
*     A random matrix is generated.
*
      ELSE

         TOT_CNT = 0
         CNT = 0
*
         JUMP1 = 1
         JUMP2 = NPMB
         JUMP3 = M
         JUMP4 = NQNB
         JUMP5 = NB
         JUMP6 = MRCOL
         JUMP7 = MB*MRROW
*
         CALL XJUMPM( JUMP1, MULT, IADD, JSEED, IRAN1, IA1,   IC1 )
         CALL XJUMPM( JUMP2, MULT, IADD, IRAN1, ITMP1, IA2,   IC2 )
         CALL XJUMPM( JUMP3, MULT, IADD, IRAN1, ITMP1, IA3,   IC3 )
         CALL XJUMPM( JUMP4, IA3,  IC3,  IRAN1, ITMP1, IA4,   IC4 )
         CALL XJUMPM( JUMP5, IA3,  IC3,  IRAN1, ITMP1, IA5,   IC5 )
         CALL XJUMPM( JUMP6, IA5,  IC5,  IRAN1, ITMP3, ITMP1, ITMP2 )
         CALL XJUMPM( JUMP7, MULT, IADD, ITMP3, IRAN1, ITMP1, ITMP2 )
         CALL XJUMPM( NOFF,  IA4,  IC4,  IRAN1, ITMP1, ITMP2, ITMP3 )
         CALL XJUMPM( MOFF,  IA2,  IC2,  ITMP1, IRAN1, ITMP2, ITMP3 )
         CALL SETRAN( IRAN1, IA1,  IC1 )
*
         DO 240 I = 1, 2
            IB1(I) = IRAN1(I)
            IB2(I) = IRAN1(I)
            IB3(I) = IRAN1(I)
  240    CONTINUE
*
         JK = 1
         DO 290 IC = NOFF+1, NEND
            IOFFC = ((IC-1)*NPCOL+MRCOL) * NB
            DO 280 I = 1, NB
               IF( JK .GT. ICNUM ) GO TO 300
               IK = 1
               DO 260 IR = MOFF+1, MEND
                  IOFFR = ((IR-1)*NPROW+MRROW) * MB
                  DO 250 J = 1, MB
                     IF( IK .GT. IRNUM ) GO TO 270
*                    Replace with NANs/INFs for extreme values
                     IF(EXT_FLAG .AND. CNT .LE. (CNT1 + CNT2) .AND.
     $                    TOT_CNT .GE. REGION) THEN
                        IF ( CNT .LT. CNT1) THEN
                           A(IK, JK) = ZERO1/ZERO1
                        ELSE IF ( CNT .LT. (CNT1 + CNT2)) THEN
                           A(IK, JK) = ONE1/ZERO1
                        END IF
                        CNT = CNT + 1
                        TOT_CNT = TOT_CNT + 1
                     ELSE
                        A(IK,JK) = ONE - TWO*PDRAND(0)
                        TOT_CNT = TOT_CNT + 1
                     END IF
                     IK = IK + 1
  250             CONTINUE
                  CALL JUMPIT( IA2, IC2, IB1, IRAN2 )
                  IB1(1) = IRAN2(1)
                  IB1(2) = IRAN2(2)
  260          CONTINUE
*
  270          CONTINUE
               JK = JK + 1
               CALL JUMPIT( IA3, IC3, IB2, IRAN3 )
               IB1(1) = IRAN3(1)
               IB1(2) = IRAN3(2)
               IB2(1) = IRAN3(1)
               IB2(2) = IRAN3(2)
  280       CONTINUE
*
            CALL JUMPIT( IA4, IC4, IB3, IRAN4 )
            IB1(1) = IRAN4(1)
            IB1(2) = IRAN4(2)
            IB2(1) = IRAN4(1)
            IB2(2) = IRAN4(2)
            IB3(1) = IRAN4(1)
            IB3(2) = IRAN4(2)
  290    CONTINUE
  300    CONTINUE
      END IF
*
*     Diagonally dominant matrix will be generated.
*
      IF( LSAME( DIAG, 'D' ) ) THEN
         IF( MB.NE.NB ) THEN
            WRITE(*,*) 'Diagonally dominant matrices with rowNB not'//
     $                 ' equal colNB is not supported!'
            RETURN
         END IF
*
         TOT_CNT = 0
         CNT = 0
         MAXMN = MAX(M, N)
         JK    = 1
         DO 340 IC = NOFF+1, NEND
            IOFFC = ((IC-1)*NPCOL+MRCOL) * NB
            IK    = 1
            DO 320 IR = MOFF+1, MEND
               IOFFR = ((IR-1)*NPROW+MRROW) * MB
               IF( IOFFC.EQ.IOFFR ) THEN
                  DO 310 J = 0, MB-1
                     IF( IK .GT. IRNUM ) GO TO 330
                     IF(EXT_FLAG .AND. CNT .LE. (CNT1 + CNT2) .AND.
     $                     TOT_CNT .GT. (N/2) ) THEN
                         IF ( CNT .LT. CNT1) THEN
                           A(IK, JK+J) = ZERO1/ZERO1
                         ELSE IF ( CNT .LT. (CNT1 + CNT2)) THEN
                           A(IK, JK+J) = ONE1/ZERO1
                         END IF
                         CNT = CNT + 1
                         TOT_CNT = TOT_CNT + 1
                     ELSE
                         A(IK,JK+J) = ABS(A(IK,JK+J)) + MAXMN
                         TOT_CNT = TOT_CNT + 1
                     END IF
                     IK = IK + 1
  310             CONTINUE
               ELSE
                  IK = IK + MB
               END IF
  320       CONTINUE
  330       CONTINUE
            JK = JK + NB
  340    CONTINUE
      END IF
*
      RETURN
*
*     End of PDMATGEN
*
      END