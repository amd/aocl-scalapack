*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PZUNM2L( SIDE, TRANS, M, N, K, A, IA, JA, DESCA, TAU,
     $                    C, IC, JC, DESCC, WORK, LWORK, INFO )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 25, 2001
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      CHARACTER          SIDE, TRANS
      INTEGER            IA, IC, INFO, JA, JC, K, LWORK, M, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), DESCC( * )
      COMPLEX*16         A( * ), C( * ), TAU( * ), WORK( * )
*     ..
*
*  Purpose
*  =======
*
*  PZUNM2L overwrites the general complex M-by-N distributed matrix
*  sub( C ) = C(IC:IC+M-1,JC:JC+N-1) with
*
*                      SIDE = 'L'           SIDE = 'R'
*  TRANS = 'N':      Q * sub( C )         sub( C ) * Q
*  TRANS = 'C':      Q**H * sub( C )      sub( C ) * Q**H
*
*  where Q is a complex unitary distributed matrix defined as the
*  product of K elementary reflectors
*
*        Q = H(k) . . . H(2) H(1)
*
*  as returned by PZGEQLF. Q is of order M if SIDE = 'L' and of order N
*  if SIDE = 'R'.
*
*  Notes
*  =====
*
*  Each global data object is described by an associated description
*  vector.  This vector stores the information required to establish
*  the mapping between an object element and its corresponding process
*  and memory location.
*
*  Let A be a generic term for any 2D block cyclicly distributed array.
*  Such a global array has an associated description vector DESCA.
*  In the following comments, the character _ should be read as
*  "of the global array".
*
*  NOTATION        STORED IN      EXPLANATION
*  --------------- -------------- --------------------------------------
*  DTYPE_A(global) DESCA( DTYPE_ )The descriptor type.  In this case,
*                                 DTYPE_A = 1.
*  CTXT_A (global) DESCA( CTXT_ ) The BLACS context handle, indicating
*                                 the BLACS process grid A is distribu-
*                                 ted over. The context itself is glo-
*                                 bal, but the handle (the integer
*                                 value) may vary.
*  M_A    (global) DESCA( M_ )    The number of rows in the global
*                                 array A.
*  N_A    (global) DESCA( N_ )    The number of columns in the global
*                                 array A.
*  MB_A   (global) DESCA( MB_ )   The blocking factor used to distribute
*                                 the rows of the array.
*  NB_A   (global) DESCA( NB_ )   The blocking factor used to distribute
*                                 the columns of the array.
*  RSRC_A (global) DESCA( RSRC_ ) The process row over which the first
*                                 row of the array A is distributed.
*  CSRC_A (global) DESCA( CSRC_ ) The process column over which the
*                                 first column of the array A is
*                                 distributed.
*  LLD_A  (local)  DESCA( LLD_ )  The leading dimension of the local
*                                 array.  LLD_A >= MAX(1,LOCr(M_A)).
*
*  Let K be the number of rows or columns of a distributed matrix,
*  and assume that its process grid has dimension p x q.
*  LOCr( K ) denotes the number of elements of K that a process
*  would receive if K were distributed over the p processes of its
*  process column.
*  Similarly, LOCc( K ) denotes the number of elements of K that a
*  process would receive if K were distributed over the q processes of
*  its process row.
*  The values of LOCr() and LOCc() may be determined via a call to the
*  ScaLAPACK tool function, NUMROC:
*          LOCr( M ) = NUMROC( M, MB_A, MYROW, RSRC_A, NPROW ),
*          LOCc( N ) = NUMROC( N, NB_A, MYCOL, CSRC_A, NPCOL ).
*  An upper bound for these quantities may be computed by:
*          LOCr( M ) <= ceil( ceil(M/MB_A)/NPROW )*MB_A
*          LOCc( N ) <= ceil( ceil(N/NB_A)/NPCOL )*NB_A
*
*  Arguments
*  =========
*
*  SIDE    (global input) CHARACTER
*          = 'L': apply Q or Q**H from the Left;
*          = 'R': apply Q or Q**H from the Right.
*
*  TRANS   (global input) CHARACTER
*          = 'N':  No transpose, apply Q;
*          = 'C':  Conjugate transpose, apply Q**H.
*
*  M       (global input) INTEGER
*          The number of rows to be operated on i.e the number of rows
*          of the distributed submatrix sub( C ). M >= 0.
*
*  N       (global input) INTEGER
*          The number of columns to be operated on i.e the number of
*          columns of the distributed submatrix sub( C ). N >= 0.
*
*  K       (global input) INTEGER
*          The number of elementary reflectors whose product defines the
*          matrix Q.  If SIDE = 'L', M >= K >= 0, if SIDE = 'R',
*          N >= K >= 0.
*
*  A       (local input) COMPLEX*16 pointer into the local memory
*          to an array of dimension (LLD_A,LOCc(JA+K-1)). On entry, the
*          j-th column must contain the vector which defines the elemen-
*          tary reflector H(j), JA <= j <= JA+K-1, as returned by
*          PZGEQLF in the K columns of its distributed matrix
*          argument A(IA:*,JA:JA+K-1). A(IA:*,JA:JA+K-1) is modified by
*          the routine but restored on exit.
*          If SIDE = 'L', LLD_A >= MAX( 1, LOCr(IA+M-1) ),
*          if SIDE = 'R', LLD_A >= MAX( 1, LOCr(IA+N-1) ).
*
*  IA      (global input) INTEGER
*          The row index in the global array A indicating the first
*          row of sub( A ).
*
*  JA      (global input) INTEGER
*          The column index in the global array A indicating the
*          first column of sub( A ).
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN_.
*          The array descriptor for the distributed matrix A.
*
*  TAU     (local input) COMPLEX*16, array, dimension LOCc(JA+N-1)
*          This array contains the scalar factors TAU(j) of the
*          elementary reflectors H(j) as returned by PZGEQLF.
*          TAU is tied to the distributed matrix A.
*
*  C       (local input/local output) COMPLEX*16 pointer into the
*          local memory to an array of dimension (LLD_C,LOCc(JC+N-1)).
*          On entry, the local pieces of the distributed matrix sub(C).
*          On exit, sub( C ) is overwritten by Q*sub( C ) or Q'*sub( C )
*          or sub( C )*Q' or sub( C )*Q.
*
*  IC      (global input) INTEGER
*          The row index in the global array C indicating the first
*          row of sub( C ).
*
*  JC      (global input) INTEGER
*          The column index in the global array C indicating the
*          first column of sub( C ).
*
*  DESCC   (global and local input) INTEGER array of dimension DLEN_.
*          The array descriptor for the distributed matrix C.
*
*  WORK    (local workspace/local output) COMPLEX*16 array,
*                                                    dimension (LWORK)
*          On exit, WORK(1) returns the minimal and optimal LWORK.
*
*  LWORK   (local or global input) INTEGER
*          The dimension of the array WORK.
*          LWORK is local input and must be at least
*          If SIDE = 'L', LWORK >= MpC0 + MAX( 1, NqC0 );
*          if SIDE = 'R', LWORK >= NqC0 + MAX( MAX( 1, MpC0 ), NUMROC(
*                   NUMROC( N+ICOFFC,NB_A,0,0,NPCOL ),NB_A,0,0,LCMQ ) );
*
*          where LCMQ = LCM / NPCOL with LCM = ICLM( NPROW, NPCOL ),
*
*          IROFFC = MOD( IC-1, MB_C ), ICOFFC = MOD( JC-1, NB_C ),
*          ICROW = INDXG2P( IC, MB_C, MYROW, RSRC_C, NPROW ),
*          ICCOL = INDXG2P( JC, NB_C, MYCOL, CSRC_C, NPCOL ),
*          MpC0 = NUMROC( M+IROFFC, MB_C, MYROW, ICROW, NPROW ),
*          NqC0 = NUMROC( N+ICOFFC, NB_C, MYCOL, ICCOL, NPCOL ),
*
*          ILCM, INDXG2P and NUMROC are ScaLAPACK tool functions;
*          MYROW, MYCOL, NPROW and NPCOL can be determined by calling
*          the subroutine BLACS_GRIDINFO.
*
*          If LWORK = -1, then LWORK is global input and a workspace
*          query is assumed; the routine only calculates the minimum
*          and optimal size for all work arrays. Each of these
*          values is returned in the first entry of the corresponding
*          work array, and no error message is issued by PXERBLA.
*
*
*  INFO    (local output) INTEGER
*          = 0:  successful exit
*          < 0:  If the i-th argument is an array and the j-entry had
*                an illegal value, then INFO = -(i*100+j), if the i-th
*                argument is a scalar and had an illegal value, then
*                INFO = -i.
*
*  Alignment requirements
*  ======================
*
*  The distributed submatrices A(IA:*, JA:*) and C(IC:IC+M-1,JC:JC+N-1)
*  must verify some alignment properties, namely the following
*  expressions should be true:
*
*  If SIDE = 'L',
*    ( MB_A.EQ.MB_C .AND. IROFFA.EQ.IROFFC .AND. IAROW.EQ.ICROW )
*  If SIDE = 'R',
*    ( MB_A.EQ.NB_C .AND. IROFFA.EQ.ICOFFC )
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      COMPLEX*16         ONE
      PARAMETER          ( ONE  = ( 1.0D+0, 0.0D+0 ) )
*     ..
*     .. Local Scalars ..
      LOGICAL            LEFT, LQUERY, NOTRAN
      CHARACTER          COLBTOP, ROWBTOP
      INTEGER            IACOL, IAROW, ICCOL, ICOFFC, ICROW, ICTXT, ICC,
     $                   II, IROFFA, IROFFC, J, J1, J2, J3, JCC, JJ,
     $                   LCM, LCMQ, LWMIN, MI, MP, MPC0, MYCOL, MYROW,
     $                   NI, NPCOL, NPROW, NQ, NQC0
      COMPLEX*16         AJJ
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GRIDINFO, CHK1MAT, INFOG2L,
     $                   PB_TOPGET, PB_TOPSET, PXERBLA, PZELSET,
     $                   PZELSET2, PZLARF, PZLARFC, ZGEBR2D, ZGEBS2D,
     $                   ZGERV2D, ZGESD2D, ZSCAL
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      INTEGER            ILCM, INDXG2P, NUMROC
      EXTERNAL           ILCM, INDXG2P, LSAME, NUMROC
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          DBLE, DCMPLX, DCONJG, MAX, MOD
*     ..
*     .. Executable Statements ..
*
*     Initialize framework context structure if not initialized
*
*
      CALL AOCL_SCALAPACK_INIT( )
*
*
*     Capture the subroutine entry in the trace file
*
      AOCL_DTL_TRACE_ENTRY_F
*
*     Get grid parameters
*
      ICTXT = DESCA( CTXT_ )
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  SIDE, TRANS, IA, IC, INFO,
     $            JA, JC, K, LWORK, M, N, NPROW, NPCOL,
     $            MYROW, MYCOL, eos_str
 102     FORMAT('PZUNM2L inputs: ,SIDE:',A5,', TRANS:',A5,
     $           ', IA:',I9,', IC:',I9,', INFO:',I9,
     $           ', JA:',I9,', JC:',I9,', K:',I9,', LWORK:',I9,
     $           ', M:',I9,', N:',I9,',  NPROW: ', I9,
     $           ', NPCOL: ', I9 ,', MYROW: ', I9,
     $           ', MYCOL: ', I9, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     Test the input parameters
*
      INFO = 0
      IF( NPROW.EQ.-1 ) THEN
         INFO = -(900+CTXT_)
      ELSE
         LEFT = LSAME( SIDE, 'L' )
         NOTRAN = LSAME( TRANS, 'N' )
*
*        NQ is the order of Q
*
         IF( LEFT ) THEN
            NQ = M
            CALL CHK1MAT( M, 3, K, 5, IA, JA, DESCA, 9, INFO )
         ELSE
            NQ = N
            CALL CHK1MAT( N, 4, K, 5, IA, JA, DESCA, 9, INFO )
         END IF
         CALL CHK1MAT( M, 3, N, 4, IC, JC, DESCC, 14, INFO )
         IF( INFO.EQ.0 ) THEN
            IROFFA = MOD( IA-1, DESCA( MB_ ) )
            IROFFC = MOD( IC-1, DESCC( MB_ ) )
            ICOFFC = MOD( JC-1, DESCC( NB_ ) )
            IAROW = INDXG2P( IA, DESCA( MB_ ), MYROW, DESCA( RSRC_ ),
     $                       NPROW )
            ICROW = INDXG2P( IC, DESCC( MB_ ), MYROW, DESCC( RSRC_ ),
     $                       NPROW )
            ICCOL = INDXG2P( JC, DESCC( NB_ ), MYCOL, DESCC( CSRC_ ),
     $                       NPCOL )
            MPC0 = NUMROC( M+IROFFC, DESCC( MB_ ), MYROW, ICROW, NPROW )
            NQC0 = NUMROC( N+ICOFFC, DESCC( NB_ ), MYCOL, ICCOL, NPCOL )
*
            IF( LEFT ) THEN
               LWMIN = MPC0 + MAX( 1, NQC0 )
            ELSE
               LCM = ILCM( NPROW, NPCOL )
               LCMQ = LCM / NPCOL
               LWMIN = NQC0 + MAX( MAX( 1, MPC0 ), NUMROC( NUMROC(
     $                 N+ICOFFC, DESCA( NB_ ), 0, 0, NPCOL ),
     $                 DESCA( NB_ ), 0, 0, LCMQ ) )
            END IF
*
            WORK( 1 ) = DCMPLX( DBLE( LWMIN ) )
            LQUERY = ( LWORK.EQ.-1 )
            IF( .NOT.LEFT .AND. .NOT.LSAME( SIDE, 'R' ) ) THEN
               INFO = -1
            ELSE IF( .NOT.NOTRAN .AND. .NOT.LSAME( TRANS, 'C' ) ) THEN
                INFO = -2
            ELSE IF( K.LT.0 .OR. K.GT.NQ ) THEN
               INFO = -5
            ELSE IF( .NOT.LEFT .AND. DESCA( MB_ ).NE.DESCC( NB_ ) ) THEN
               INFO = -(900+NB_)
            ELSE IF( LEFT .AND. IROFFA.NE.IROFFC ) THEN
               INFO = -12
            ELSE IF( LEFT .AND. IAROW.NE.ICROW ) THEN
               INFO = -12
            ELSE IF( .NOT.LEFT .AND. IROFFA.NE.ICOFFC ) THEN
               INFO = -13
            ELSE IF( LEFT .AND. DESCA( MB_ ).NE.DESCC( MB_ ) ) THEN
               INFO = -(1400+MB_)
            ELSE IF( ICTXT.NE.DESCC( CTXT_ ) ) THEN
               INFO = -(1400+CTXT_)
            ELSE IF( LWORK.LT.LWMIN .AND. .NOT.LQUERY ) THEN
               INFO = -16
            END IF
         END IF
      END IF
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PZUNM2L', -INFO )
         CALL BLACS_ABORT( ICTXT, 1 )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      ELSE IF( LQUERY ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Quick return if possible
*
      IF( M.EQ.0 .OR. N.EQ.0 .OR. K.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      IF( DESCA( M_ ).EQ.1 ) THEN
         CALL INFOG2L( IA, JA, DESCA, NPROW, NPCOL, MYROW, MYCOL, II,
     $                 JJ, IAROW, IACOL )
         CALL INFOG2L( IC, JC, DESCC, NPROW, NPCOL, MYROW, MYCOL, ICC,
     $                 JCC, ICROW, ICCOL )
         IF( LEFT ) THEN
            IF( MYROW.EQ.IAROW ) THEN
               NQ = NUMROC( JC+N-1, DESCC( NB_ ), MYCOL, DESCC( CSRC_ ),
     $                      NPCOL )
               IF( MYCOL.EQ.IACOL ) THEN
                  IF( NOTRAN ) THEN
                     AJJ = ONE - TAU( JJ )
                  ELSE
                     AJJ = ONE - DCONJG( TAU( JJ ) )
                  END IF
                  CALL ZGEBS2D( ICTXT, 'Rowwise', ' ', 1, 1, AJJ, 1 )
                  CALL ZSCAL( NQ-JCC+1, AJJ,
     $                        C( ICC+(JCC-1)*DESCC( LLD_ ) ),
     $                        DESCC( LLD_ ) )
               ELSE
                  CALL ZGEBR2D( ICTXT, 'Rowwise', ' ', 1, 1, AJJ, 1,
     $                          IAROW, IACOL )
                  CALL ZSCAL( NQ-JCC+1, AJJ,
     $                        C( ICC+(JCC-1)*DESCC( LLD_ ) ),
     $                        DESCC( LLD_ ) )
               END IF
            END IF
         ELSE
            IF( MYCOL.EQ.IACOL ) THEN
               IF( NOTRAN ) THEN
                  AJJ = ONE - TAU( JJ )
               ELSE
                  AJJ = ONE - DCONJG( TAU( JJ ) )
               END IF
            END IF
*
            IF( IACOL.NE.ICCOL ) THEN
               IF( MYCOL.EQ.IACOL )
     $            CALL ZGESD2D( ICTXT, 1, 1, AJJ, 1, MYROW, ICCOL )
               IF( MYCOL.EQ.ICCOL )
     $            CALL ZGERV2D( ICTXT, 1, 1, AJJ, 1, MYROW, IACOL )
            END IF
*
            IF( MYCOL.EQ.ICCOL ) THEN
               MP = NUMROC( IC+M-1, DESCC( MB_ ), MYROW, DESCC( RSRC_ ),
     $                      NPROW )
               CALL ZSCAL( MP-ICC+1, AJJ, C( ICC+(JCC-1)*
     $                     DESCC( LLD_ ) ), 1 )
            END IF
*
         END IF
*
      ELSE
*
         CALL PB_TOPGET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
         CALL PB_TOPGET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
         IF( LEFT .AND. NOTRAN .OR. .NOT.LEFT .AND. .NOT.NOTRAN ) THEN
            J1 = JA
            J2 = JA+K-1
            J3 = 1
         ELSE
            J1 = JA+K-1
            J2 = JA
            J3 = -1
         END IF
*
         IF( LEFT ) THEN
            NI = N
            IF( NOTRAN ) THEN
               CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', 'I-ring' )
            ELSE
               CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', 'D-ring' )
            END IF
            CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', ' ' )
         ELSE
            MI = M
         END IF
*
         DO 10 J = J1, J2, J3
*
            IF( LEFT ) THEN
*
*              H(j) or H(j)' is applied to C(ic:ic+m-k+j-ja,jc:jc+n-1)
*
               MI = M - K + J - JA + 1
            ELSE
*
*              H(j) or H(j)' is applied to C(ic:ic+m-1,jc:jc+n-k+j-ja)
*
               NI = N - K + J - JA + 1
            END IF
*
*           Apply H(j) or H(j)'
*
            CALL PZELSET2( AJJ, A, IA+NQ-K+J-JA, J, DESCA, ONE )
            IF( NOTRAN ) THEN
               CALL PZLARF( SIDE, MI, NI, A, IA, J, DESCA, 1, TAU, C,
     $                      IC, JC, DESCC, WORK )
            ELSE
               CALL PZLARFC( SIDE, MI, NI, A, IA, J, DESCA, 1, TAU, C,
     $                       IC, JC, DESCC, WORK )
            END IF
            CALL PZELSET( A, IA+NQ-K+J-JA, J, DESCA, AJJ )
*
   10    CONTINUE
*
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
         CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
      END IF
*
      WORK( 1 ) = DCMPLX( DBLE( LWMIN ) )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PZUNM2L
*
      END
