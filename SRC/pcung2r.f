*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PCUNG2R( M, N, K, A, IA, JA, DESCA, TAU, WORK, LWORK,
     $                    INFO )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 25, 2001
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, INFO, JA, K, LWORK, M, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX            A( * ), TAU( * ), WORK( * )
*     ..
*
*  Purpose
*  =======
*
*  PCUNG2R generates an M-by-N complex distributed matrix Q denoting
*  A(IA:IA+M-1,JA:JA+N-1) with orthonormal columns, which is defined as
*  the first N columns of a product of K elementary reflectors of order
*  M
*
*        Q  =  H(1) H(2) . . . H(k)
*
*  as returned by PCGEQRF.
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
*  M       (global input) INTEGER
*          The number of rows to be operated on i.e the number of rows
*          of the distributed submatrix Q. M >= 0.
*
*  N       (global input) INTEGER
*          The number of columns to be operated on i.e the number of
*          columns of the distributed submatrix Q. M >= N >= 0.
*
*  K       (global input) INTEGER
*          The number of elementary reflectors whose product defines the
*          matrix Q. N >= K >= 0.
*
*  A       (local input/local output) COMPLEX pointer into the
*          local memory to an array of dimension (LLD_A,LOCc(JA+N-1)).
*          On entry, the j-th column must contain the vector which
*          defines the elementary reflector H(j), JA <= j <= JA+K-1, as
*          returned by PCGEQRF in the K columns of its array
*          argument A(IA:*,JA:JA+K-1). On exit, this array contains
*          the local pieces of the M-by-N distributed matrix Q.
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
*  TAU     (local input) COMPLEX, array, dimension LOCc(JA+K-1).
*          This array contains the scalar factors TAU(j) of the
*          elementary reflectors H(j) as returned by PCGEQRF.
*          TAU is tied to the distributed matrix A.
*
*  WORK    (local workspace/local output) COMPLEX array,
*                                                   dimension (LWORK)
*          On exit, WORK(1) returns the minimal and optimal LWORK.
*
*  LWORK   (local or global input) INTEGER
*          The dimension of the array WORK.
*          LWORK is local input and must be at least
*          LWORK >= MpA0 + MAX( 1, NqA0 ), where
*
*          IROFFA = MOD( IA-1, MB_A ), ICOFFA = MOD( JA-1, NB_A ),
*          IAROW = INDXG2P( IA, MB_A, MYROW, RSRC_A, NPROW ),
*          IACOL = INDXG2P( JA, NB_A, MYCOL, CSRC_A, NPCOL ),
*          MpA0 = NUMROC( M+IROFFA, MB_A, MYROW, IAROW, NPROW ),
*          NqA0 = NUMROC( N+ICOFFA, NB_A, MYCOL, IACOL, NPCOL ),
*
*          INDXG2P and NUMROC are ScaLAPACK tool functions;
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
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      COMPLEX            ONE, ZERO
      PARAMETER          ( ONE  = ( 1.0E+0, 0.0E+0 ),
     $                     ZERO = ( 0.0E+0, 0.0E+0 ) )
*     ..
*     .. Local Scalars ..
      LOGICAL            LQUERY
      CHARACTER          COLBTOP, ROWBTOP
      INTEGER            IACOL, IAROW, ICTXT, J, JJ, KQ, LWMIN, MPA0,
     $                   MYCOL, MYROW, NPCOL, NPROW, NQA0
      COMPLEX            TAUJ
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GRIDINFO, CHK1MAT, PCELSET,
     $                   PCLARF, PCLASET, PCSCAL, PB_TOPGET,
     $                   PB_TOPSET, PXERBLA
*     ..
*     .. External Functions ..
      INTEGER            INDXG2L, INDXG2P, NUMROC
      EXTERNAL           INDXG2L, INDXG2P, NUMROC
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          CMPLX, MAX, MIN, MOD, REAL
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
         WRITE(LOG_BUF,102)  IA, INFO, JA, K, LWORK, M,
     $            N, NPROW, NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PCUNG2R inputs: ,IA:',I9,', INFO:',I9,
     $           ', JA:',I9,', K:',I9,', LWORK:',I9,', M:',I9,
     $           ', N:',I9,',  NPROW: ', I9,
     $           ', NPCOL: ', I9 ,', MYROW: ', I9,', MYCOL: ', I9, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     Test the input parameters
*
      INFO = 0
      IF( NPROW.EQ.-1 ) THEN
         INFO = -(700+CTXT_)
      ELSE
         CALL CHK1MAT( M, 1, N, 2, IA, JA, DESCA, 7, INFO )
         IF( INFO.EQ.0 ) THEN
            IAROW = INDXG2P( IA, DESCA( MB_ ), MYROW, DESCA( RSRC_ ),
     $                       NPROW )
            IACOL = INDXG2P( JA, DESCA( NB_ ), MYCOL, DESCA( CSRC_ ),
     $                       NPCOL )
            MPA0 = NUMROC( M+MOD( IA-1, DESCA( MB_ ) ), DESCA( MB_ ),
     $                     MYROW, IAROW, NPROW )
            NQA0 = NUMROC( N+MOD( JA-1, DESCA( NB_ ) ), DESCA( NB_ ),
     $                     MYCOL, IACOL, NPCOL )
            LWMIN = MPA0 + MAX( 1, NQA0 )
*
            WORK( 1 ) = CMPLX( REAL( LWMIN ) )
            LQUERY = ( LWORK.EQ.-1 )
            IF( N.GT.M ) THEN
               INFO = -2
            ELSE IF( K.LT.0 .OR. K.GT.N ) THEN
               INFO = -3
            ELSE IF( LWORK.LT.LWMIN .AND. .NOT.LQUERY ) THEN
               INFO = -10
            END IF
         END IF
      END IF
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PCUNG2R', -INFO )
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
      IF( N.LE.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', 'D-ring' )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', ' ' )
*
*     Initialise columns ja+k:ja+n-1 to columns of the unit matrix
*
      CALL PCLASET( 'All', K, N-K, ZERO, ZERO, A, IA, JA+K, DESCA )
      CALL PCLASET( 'All', M-K, N-K, ZERO, ONE, A, IA+K, JA+K, DESCA )
*
      TAUJ = ZERO
      KQ = MAX( 1, NUMROC( JA+K-1, DESCA( NB_ ), MYCOL, DESCA( CSRC_ ),
     $                     NPCOL ) )
      DO 10 J = JA+K-1, JA, -1
*
*        Apply H(j) to A(ia+j-ja:ia+m-1,j:ja+n-1) from the left
*
         IF( J.LT.JA+N-1 ) THEN
            CALL PCELSET( A, IA+J-JA, J, DESCA, ONE )
            CALL PCLARF( 'Left', M-J+JA, JA+N-J-1, A, IA+J-JA, J, DESCA,
     $                   1, TAU, A, IA+J-JA, J+1, DESCA, WORK )
         END IF
*
         JJ = INDXG2L( J, DESCA( NB_ ), MYCOL, DESCA( CSRC_ ), NPCOL )
         IACOL = INDXG2P( J, DESCA( NB_ ), MYCOL, DESCA( CSRC_ ),
     $                    NPCOL )
         IF( MYCOL.EQ.IACOL )
     $      TAUJ = TAU( MIN( JJ, KQ ) )
         IF( J-JA.LT.M-1 )
     $      CALL PCSCAL( M-J+JA-1, -TAUJ, A, IA+J-JA+1, J, DESCA, 1 )
         CALL PCELSET( A, IA+J-JA, J, DESCA, ONE-TAUJ )
*
*        Set A(ia:ia+j-ja-1,j) to zero
*
         CALL PCLASET( 'All', J-JA, 1, ZERO, ZERO, A, IA, J, DESCA )
*
   10 CONTINUE
*
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
      CALL PB_TOPSET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
      WORK( 1 ) = CMPLX( REAL( LWMIN ) )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PCUNG2R
*
      END
