*
*     Copyright (c) 2020-23 Advanced Micro Devices, Inc.  All rights reserved.
*
*  -- ScaLAPACK routine --
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PDGETF2K( M, N, A, IA, JA, DESCA, IPIV, PANEL, INFO )
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, INFO, JA, M, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), IPIV( * )
      DOUBLE PRECISION   A( * )
      TYPE PD_PANEL
           INTEGER           ::   TM, LN
           INTEGER           ::   BROWS, IAROW, IACOL
           INTEGER           ::   MYROW, MYCOL, NPROW, NPCOL
           INTEGER           ::   MSGID, ICTXT
           INTEGER           ::   XII, XJJ, LDM, LDA
           INTEGER           ::   SN, K1, K2, KB
*
           INTEGER           ::   PSIZE, UCOLS, LDU, UOFF, USIZE
*
           CLASS(*), POINTER ::   PMEM
           CLASS(*), POINTER ::   LMEM
           CLASS(*), POINTER ::   UMEM
           CLASS(*), POINTER ::   AMEM
*
           CLASS(*), POINTER ::   PBUFF
           CLASS(*), POINTER ::   DTYPE
           CLASS(*), POINTER ::   REQUEST
           CLASS(*), POINTER ::   STATUS
      END TYPE PD_PANEL
*
      TYPE(PD_PANEL) :: PANEL
*     ..
*
*  Purpose
*  =======
*
*  PDGETF2K computes an LU factorization of a general M-by-N
*  distributed matrix sub( A ) = A(IA:IA+M-1,JA:JA+N-1) using
*  partial pivoting with row interchanges. The matrix is assumed
*  to be present entirely in a single column of processes in the
*  2D grid. This function is an internal function called by LU
*  factorization using lookahead panel optimization. In addition,
*  the top L11 matrix is copied to a temporary buffer in the
*  panel struct.
*
*  The factorization has the form sub( A ) = P * L * U, where P is a
*  permutation matrix, L is lower triangular with unit diagonal
*  elements (lower trapezoidal if m > n), and U is upper triangular
*  (upper trapezoidal if m < n).
*
*  This is the right-looking Parallel Level 2 BLAS version of the
*  algorithm.
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
*  This routine requires N <= NB_A-MOD(JA-1, NB_A) and square block
*  decomposition ( MB_A = NB_A ).
*
*  Arguments
*  =========
*
*  M       (global input) INTEGER
*          The number of rows to be operated on, i.e. the number of rows
*          of the distributed submatrix sub( A ). M >= 0.
*
*  N       (global input) INTEGER
*          The number of columns to be operated on, i.e. the number of
*          columns of the distributed submatrix sub( A ).
*          NB_A-MOD(JA-1, NB_A) >= N >= 0.
*
*  A       (local input/local output) DOUBLE PRECISION pointer into the
*          local memory to an array of dimension (LLD_A, LOCc(JA+N-1)).
*          On entry, this array contains the local pieces of the M-by-N
*          distributed matrix sub( A ). On exit, this array contains
*          the local pieces of the factors L and U from the factoriza-
*          tion sub( A ) = P*L*U; the unit diagonal elements of L are
*          not stored.
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
*  IPIV    (local output) INTEGER array, dimension ( LOCr(M_A)+MB_A )
*          This array contains the pivoting information.
*          IPIV(i) -> The global row local row i was swapped with.
*          This array is tied to the distributed matrix A.
*
*  PANEL   (local input) pointer to pd_panel struct
*          The PANEL structure contains pointers to i/o matrices,  their
*          sizes &  other parameters related to lookahead implementation
*
*  INFO    (local output) INTEGER
*          = 0:  successful exit
*          < 0:  If the i-th argument is an array and the j-entry had
*                an illegal value, then INFO = -(i*100+j), if the i-th
*                argument is a scalar and had an illegal value, then
*                INFO = -i.
*          > 0:  If INFO = K, U(IA+K-1,JA+K-1) is exactly zero.
*                The factorization has been completed, but the factor U
*                is exactly singular, and division by zero will occur if
*                it is used to solve a system of equations.
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      DOUBLE PRECISION   ONE, ZERO
      PARAMETER          ( ONE = 1.0D+0, ZERO = 0.0D+0 )
*     ..
*     .. Local Scalars ..
      CHARACTER          COLBTOP
      INTEGER            I, IACOL, IAROW, ICOFF, ICTXT, IIA, IROFF, J,
     $                   JJA, MN, MYCOL, MYROW, NPCOL, NPROW, PI, LDA
      DOUBLE PRECISION   GMAX
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GRIDINFO, CHK1MAT, IGEBR2D,
     $                   IGEBS2D, INFOG2L, PDAMAX, PDGER,
     $                   PDSCAL, PDSWAP, PB_TOPGET, PXERBLA
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          MIN, MOD
*     ..
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
*     Get grid parameters.
*
      ICTXT = DESCA( CTXT_ )
      LDA   = DESCA( LLD_ )
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  IA, INFO, JA, M, N, NPROW, NPCOL,
     $            MYROW, MYCOL, eos_str
 102     FORMAT('PDGETF2K inputs:,IA:',I5,',INFO:',I5,',JA:',I5,
     $           ',M:',I5,',N:',I5,',NPROW:',I5,
     $           ',NPCOL:',I5 ,',MYROW:',I5,',MYCOL:',I5,A5)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     Test the input parameters.
*
      INFO = 0
      IF( NPROW.EQ.-1 ) THEN
         INFO = -(600+CTXT_)
      ELSE
         CALL CHK1MAT( M, 1, N, 2, IA, JA, DESCA, 6, INFO )
         IF( INFO.EQ.0 ) THEN
            IROFF = MOD( IA-1, DESCA( MB_ ) )
            ICOFF = MOD( JA-1, DESCA( NB_ ) )
            IF( N+ICOFF.GT.DESCA( NB_ ) ) THEN
               INFO = -2
            ELSE IF( IROFF.NE.0 ) THEN
               INFO = -4
            ELSE IF( ICOFF.NE.0 ) THEN
               INFO = -5
            ELSE IF( DESCA( MB_ ).NE.DESCA( NB_ ) ) THEN
               INFO = -(600+NB_)
            END IF
         END IF
      END IF
*
      IF( INFO.NE.0 ) THEN
         CALL PXERBLA( ICTXT, 'PDGETF2', -INFO )
         CALL BLACS_ABORT( ICTXT, 1 )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Quick return if possible
*
      IF( M.EQ.0 .OR. N.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      MN = MIN( M, N )
      CALL INFOG2L( IA, JA, DESCA, NPROW, NPCOL, MYROW, MYCOL, IIA, JJA,
     $              IAROW, IACOL )
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Columnwise', COLBTOP )
*
      PI = 1
      IF( MYCOL.EQ.IACOL ) THEN
         DO 10 J = JA, JA+MN-1
            I = IA + J - JA
*
*           Find pivot and test for singularity.
*
            CALL PDAMAX( M-J+JA, GMAX, IPIV( PI ), A, I, J,
     $                   DESCA, 1 )
            IF( GMAX.NE.ZERO ) THEN
*
*              Apply the row interchanges to columns JA:JA+N-1
*
               CALL PDSWAP( N, A, I, JA, DESCA, DESCA( M_ ), A,
     $                      IPIV( PI ), JA, DESCA, DESCA( M_ ) )
*
*              Compute elements I+1:IA+M-1 of J-th column.
*
               IF( J-JA+1.LT.M )
     $            CALL PDSCAL( M-J+JA-1, ONE / GMAX, A, I+1, J,
     $                         DESCA, 1 )
            ELSE IF( INFO.EQ.0 ) THEN
               INFO = J - JA + 1
            END IF
*
*           Update trailing submatrix
*
            IF( J-JA+1.LT.MN ) THEN
               CALL PDGER( M-J+JA-1, N-J+JA-1, -ONE, A, I+1, J, DESCA,
     $                     1, A, I, J+1, DESCA, DESCA( M_ ), A, I+1,
     $                     J+1, DESCA )
            END IF
            PI = PI + 1
   10    CONTINUE
*
*        Copy L11 into LMEM.
*
         IF( MYROW.EQ.IAROW )
     $      CALL PDPANEL_LCOPY( A, IA, JA, LDA, N, PANEL )
*
*        Broadcast L11 with-in column
*
         CALL PDPANEL_LCAST( PANEL, N )
*
      END IF
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PDGETF2K
*
      END

