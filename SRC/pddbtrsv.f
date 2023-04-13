*
*     Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PDDBTRSV( UPLO, TRANS, N, BWL, BWU, NRHS, A, JA, DESCA,
     $                     B, IB, DESCB, AF, LAF, WORK, LWORK, INFO )
*
*  -- ScaLAPACK routine (version 2.0.2) --
*     Univ. of Tennessee, Univ. of California Berkeley, Univ. of Colorado Denver
*     May 1 2012
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      CHARACTER          TRANS, UPLO
      INTEGER            BWL, BWU, IB, INFO, JA, LAF, LWORK, N, NRHS
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), DESCB( * )
      DOUBLE PRECISION   A( * ), AF( * ), B( * ), WORK( * )
*     ..
*
*
*  Purpose
*  =======
*
*  PDDBTRSV solves a banded triangular system of linear equations
*
*                      A(1:N, JA:JA+N-1) * X = B(IB:IB+N-1, 1:NRHS)
*                                 or
*                      A(1:N, JA:JA+N-1)^T * X = B(IB:IB+N-1, 1:NRHS)
*
*  where A(1:N, JA:JA+N-1) is a banded
*  triangular matrix factor produced by the
*  Gaussian elimination code PD@(dom_pre)BTRF
*  and is stored in A(1:N,JA:JA+N-1) and AF.
*  The matrix stored in A(1:N, JA:JA+N-1) is either
*  upper or lower triangular according to UPLO,
*  and the choice of solving A(1:N, JA:JA+N-1) or A(1:N, JA:JA+N-1)^T
*  is dictated by the user by the parameter TRANS.
*
*  Routine PDDBTRF MUST be called first.
*
*  =====================================================================
*
*  Arguments
*  =========
*
*  UPLO    (global input) CHARACTER
*          = 'U':  Upper triangle of A(1:N, JA:JA+N-1) is stored;
*          = 'L':  Lower triangle of A(1:N, JA:JA+N-1) is stored.
*
*  TRANS   (global input) CHARACTER
*          = 'N':  Solve with A(1:N, JA:JA+N-1);
*          = 'T' or 'C':  Solve with A(1:N, JA:JA+N-1)^T;
*
*  N       (global input) INTEGER
*          The number of rows and columns to be operated on, i.e. the
*          order of the distributed submatrix A(1:N, JA:JA+N-1). N >= 0.
*
*  BWL     (global input) INTEGER
*          Number of subdiagonals. 0 <= BWL <= N-1
*
*  BWU     (global input) INTEGER
*          Number of superdiagonals. 0 <= BWU <= N-1
*
*  NRHS    (global input) INTEGER
*          The number of right hand sides, i.e., the number of columns
*          of the distributed submatrix B(IB:IB+N-1, 1:NRHS).
*          NRHS >= 0.
*
*  A       (local input/local output) DOUBLE PRECISION pointer into
*          local memory to an array with first dimension
*          LLD_A >=(bwl+bwu+1) (stored in DESCA).
*          On entry, this array contains the local pieces of the
*          N-by-N unsymmetric banded distributed Cholesky factor L or
*          L^T A(1:N, JA:JA+N-1).
*          This local portion is stored in the packed banded format
*            used in LAPACK. Please see the Notes below and the
*            ScaLAPACK manual for more detail on the format of
*            distributed matrices.
*
*  JA      (global input) INTEGER
*          The index in the global array A that points to the start of
*          the matrix to be operated on (which may be either all of A
*          or a submatrix of A).
*
*  DESCA   (global and local input) INTEGER array of dimension DLEN.
*          if 1D type (DTYPE_A=501), DLEN >= 7;
*          if 2D type (DTYPE_A=1), DLEN >= 9 .
*          The array descriptor for the distributed matrix A.
*          Contains information of mapping of A to memory. Please
*          see NOTES below for full description and options.
*
*  B       (local input/local output) DOUBLE PRECISION pointer into
*          local memory to an array of local lead dimension lld_b>=NB.
*          On entry, this array contains the
*          the local pieces of the right hand sides
*          B(IB:IB+N-1, 1:NRHS).
*          On exit, this contains the local piece of the solutions
*          distributed matrix X.
*
*  IB      (global input) INTEGER
*          The row index in the global array B that points to the first
*          row of the matrix to be operated on (which may be either
*          all of B or a submatrix of B).
*
*  DESCB   (global and local input) INTEGER array of dimension DLEN.
*          if 1D type (DTYPE_B=502), DLEN >=7;
*          if 2D type (DTYPE_B=1), DLEN >= 9.
*          The array descriptor for the distributed matrix B.
*          Contains information of mapping of B to memory. Please
*          see NOTES below for full description and options.
*
*  AF      (local output) DOUBLE PRECISION array, dimension LAF.
*          Auxiliary Fillin Space.
*          Fillin is created during the factorization routine
*          PDDBTRF and this is stored in AF. If a linear system
*          is to be solved using PDDBTRS after the factorization
*          routine, AF *must not be altered* after the factorization.
*
*  LAF     (local input) INTEGER
*          Size of user-input Auxiliary Fillin space AF. Must be >=
*          NB*(bwl+bwu)+6*max(bwl,bwu)*max(bwl,bwu)
*          If LAF is not large enough, an error code will be returned
*          and the minimum acceptable size will be returned in AF( 1 )
*
*  WORK    (local workspace/local output)
*          DOUBLE PRECISION temporary workspace. This space may
*          be overwritten in between calls to routines. WORK must be
*          the size given in LWORK.
*          On exit, WORK( 1 ) contains the minimal LWORK.
*
*  LWORK   (local input or global input) INTEGER
*          Size of user-input workspace WORK.
*          If LWORK is too small, the minimal acceptable size will be
*          returned in WORK(1) and an error code is returned. LWORK>=
*          (max(bwl,bwu)*NRHS)
*
*  INFO    (global output) INTEGER
*          = 0:  successful exit
*          < 0:  If the i-th argument is an array and the j-entry had
*                an illegal value, then INFO = -(i*100+j), if the i-th
*                argument is a scalar and had an illegal value, then
*                INFO = -i.
*
*  =====================================================================
*
*
*  Restrictions
*  ============
*
*  The following are restrictions on the input parameters. Some of these
*    are temporary and will be removed in future releases, while others
*    may reflect fundamental technical limitations.
*
*    Non-cyclic restriction: VERY IMPORTANT!
*      P*NB>= mod(JA-1,NB)+N.
*      The mapping for matrices must be blocked, reflecting the nature
*      of the divide and conquer algorithm as a task-parallel algorithm.
*      This formula in words is: no processor may have more than one
*      chunk of the matrix.
*
*    Blocksize cannot be too small:
*      If the matrix spans more than one processor, the following
*      restriction on NB, the size of each block on each processor,
*      must hold:
*      NB >= 2*MAX(BWL,BWU)
*      The bulk of parallel computation is done on the matrix of size
*      O(NB) on each processor. If this is too small, divide and conquer
*      is a poor choice of algorithm.
*
*    Submatrix reference:
*      JA = IB
*      Alignment restriction that prevents unnecessary communication.
*
*
*  =====================================================================
*
*
*  Notes
*  =====
*
*  If the factorization routine and the solve routine are to be called
*    separately (to solve various sets of righthand sides using the same
*    coefficient matrix), the auxiliary space AF *must not be altered*
*    between calls to the factorization routine and the solve routine.
*
*  The best algorithm for solving banded and tridiagonal linear systems
*    depends on a variety of parameters, especially the bandwidth.
*    Currently, only algorithms designed for the case N/P >> bw are
*    implemented. These go by many names, including Divide and Conquer,
*    Partitioning, domain decomposition-type, etc.
*
*  Algorithm description: Divide and Conquer
*
*    The Divide and Conqer algorithm assumes the matrix is narrowly
*      banded compared with the number of equations. In this situation,
*      it is best to distribute the input matrix A one-dimensionally,
*      with columns atomic and rows divided amongst the processes.
*      The basic algorithm divides the banded matrix up into
*      P pieces with one stored on each processor,
*      and then proceeds in 2 phases for the factorization or 3 for the
*      solution of a linear system.
*      1) Local Phase:
*         The individual pieces are factored independently and in
*         parallel. These factors are applied to the matrix creating
*         fillin, which is stored in a non-inspectable way in auxiliary
*         space AF. Mathematically, this is equivalent to reordering
*         the matrix A as P A P^T and then factoring the principal
*         leading submatrix of size equal to the sum of the sizes of
*         the matrices factored on each processor. The factors of
*         these submatrices overwrite the corresponding parts of A
*         in memory.
*      2) Reduced System Phase:
*         A small (max(bwl,bwu)* (P-1)) system is formed representing
*         interaction of the larger blocks, and is stored (as are its
*         factors) in the space AF. A parallel Block Cyclic Reduction
*         algorithm is used. For a linear system, a parallel front solve
*         followed by an analagous backsolve, both using the structure
*         of the factored matrix, are performed.
*      3) Backsubsitution Phase:
*         For a linear system, a local backsubstitution is performed on
*         each processor in parallel.
*
*
*  Descriptors
*  ===========
*
*  Descriptors now have *types* and differ from ScaLAPACK 1.0.
*
*  Note: banded codes can use either the old two dimensional
*    or new one-dimensional descriptors, though the processor grid in
*    both cases *must be one-dimensional*. We describe both types below.
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
*
*  One-dimensional descriptors:
*
*  One-dimensional descriptors are a new addition to ScaLAPACK since
*    version 1.0. They simplify and shorten the descriptor for 1D
*    arrays.
*
*  Since ScaLAPACK supports two-dimensional arrays as the fundamental
*    object, we allow 1D arrays to be distributed either over the
*    first dimension of the array (as if the grid were P-by-1) or the
*    2nd dimension (as if the grid were 1-by-P). This choice is
*    indicated by the descriptor type (501 or 502)
*    as described below.
*
*    IMPORTANT NOTE: the actual BLACS grid represented by the
*    CTXT entry in the descriptor may be *either*  P-by-1 or 1-by-P
*    irrespective of which one-dimensional descriptor type
*    (501 or 502) is input.
*    This routine will interpret the grid properly either way.
*    ScaLAPACK routines *do not support intercontext operations* so that
*    the grid passed to a single ScaLAPACK routine *must be the same*
*    for all array descriptors passed to that routine.
*
*    NOTE: In all cases where 1D descriptors are used, 2D descriptors
*    may also be used, since a one-dimensional array is a special case
*    of a two-dimensional array with one dimension of size unity.
*    The two-dimensional array used in this case *must* be of the
*    proper orientation:
*      If the appropriate one-dimensional descriptor is DTYPEA=501
*      (1 by P type), then the two dimensional descriptor must
*      have a CTXT value that refers to a 1 by P BLACS grid;
*      If the appropriate one-dimensional descriptor is DTYPEA=502
*      (P by 1 type), then the two dimensional descriptor must
*      have a CTXT value that refers to a P by 1 BLACS grid.
*
*
*  Summary of allowed descriptors, types, and BLACS grids:
*  DTYPE           501         502         1         1
*  BLACS grid      1xP or Px1  1xP or Px1  1xP       Px1
*  -----------------------------------------------------
*  A               OK          NO          OK        NO
*  B               NO          OK          NO        OK
*
*  Note that a consequence of this chart is that it is not possible
*    for *both* DTYPE_A and DTYPE_B to be 2D_type(1), as these lead
*    to opposite requirements for the orientation of the BLACS grid,
*    and as noted before, the *same* BLACS context must be used in
*    all descriptors in a single ScaLAPACK subroutine call.
*
*  Let A be a generic term for any 1D block cyclicly distributed array.
*  Such a global array has an associated description vector DESCA.
*  In the following comments, the character _ should be read as
*  "of the global array".
*
*  NOTATION        STORED IN  EXPLANATION
*  --------------- ---------- ------------------------------------------
*  DTYPE_A(global) DESCA( 1 ) The descriptor type. For 1D grids,
*                                TYPE_A = 501: 1-by-P grid.
*                                TYPE_A = 502: P-by-1 grid.
*  CTXT_A (global) DESCA( 2 ) The BLACS context handle, indicating
*                                the BLACS process grid A is distribu-
*                                ted over. The context itself is glo-
*                                bal, but the handle (the integer
*                                value) may vary.
*  N_A    (global) DESCA( 3 ) The size of the array dimension being
*                                distributed.
*  NB_A   (global) DESCA( 4 ) The blocking factor used to distribute
*                                the distributed dimension of the array.
*  SRC_A  (global) DESCA( 5 ) The process row or column over which the
*                                first row or column of the array
*                                is distributed.
*  LLD_A  (local)  DESCA( 6 ) The leading dimension of the local array
*                                storing the local blocks of the distri-
*                                buted array A. Minimum value of LLD_A
*                                depends on TYPE_A.
*                                TYPE_A = 501: LLD_A >=
*                                   size of undistributed dimension, 1.
*                                TYPE_A = 502: LLD_A >=NB_A, 1.
*  Reserved        DESCA( 7 ) Reserved for future use.
*
*
*
*  =====================================================================
*
*  Code Developer: Andrew J. Cleary, University of Tennessee.
*    Current address: Lawrence Livermore National Labs.
*  Last modified by:  Peter Arbenz, Institute of Scientific Computing,
*    ETH, Zurich.
*
*  =====================================================================
*
*     .. Parameters ..
      DOUBLE PRECISION   ONE
      PARAMETER          ( ONE = 1.0D+0 )
      DOUBLE PRECISION   ZERO
      PARAMETER          ( ZERO = 0.0D+0 )
      INTEGER            INT_ONE
      PARAMETER          ( INT_ONE = 1 )
      INTEGER            DESCMULT, BIGNUM
      PARAMETER          ( DESCMULT = 100, BIGNUM = DESCMULT*DESCMULT )
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
*     ..
*     .. Local Scalars ..
      INTEGER            CSRC, FIRST_PROC, ICTXT, ICTXT_NEW, ICTXT_SAVE,
     $                   IDUM1, IDUM2, IDUM3, JA_NEW, LEVEL_DIST, LLDA,
     $                   LLDB, MAX_BW, MBW2, MYCOL, MYROW, MY_NUM_COLS,
     $                   NB, NP, NPCOL, NPROW, NP_SAVE, ODD_SIZE, OFST,
     $                   PART_OFFSET, PART_SIZE, RETURN_CODE, STORE_M_B,
     $                   STORE_N_A, WORK_SIZE_MIN, WORK_U
*     ..
*     .. Local Arrays ..
      INTEGER            DESCA_1XP( 7 ), DESCB_PX1( 7 ),
     $                   PARAM_CHECK( 18, 3 )
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDEXIT, BLACS_GRIDINFO, DESC_CONVERT,
     $                   DGEMM, DGERV2D, DGESD2D, DLAMOV, DMATADD,
     $                   DTBTRS, DTRMM, GLOBCHK, PXERBLA, RESHAPE
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      INTEGER            NUMROC
      EXTERNAL           LSAME, NUMROC
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          ICHAR, MAX, MIN, MOD
*     ..
*     .. LOG variables declaration ..
*     ..
*     BUFFER size: Function name and Process grid info (128 Bytes) +
*       Variable names + Variable values(num_vars *10)
      CHARACTER  BUFFER*384
      CHARACTER*2, PARAMETER :: eos_str = '' // C_NULL_CHAR
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
*     Test the input parameters
*
      INFO = 0
*
*     Convert descriptor into standard form for easy access to
*        parameters, check that grid is of right shape.
*
      DESCA_1XP( 1 ) = 501
      DESCB_PX1( 1 ) = 502
*
      CALL DESC_CONVERT( DESCA, DESCA_1XP, RETURN_CODE )
*
      IF( RETURN_CODE.NE.0 ) THEN
         INFO = -( 9*100+2 )
      END IF
*
      CALL DESC_CONVERT( DESCB, DESCB_PX1, RETURN_CODE )
*
      IF( RETURN_CODE.NE.0 ) THEN
         INFO = -( 12*100+2 )
      END IF
*
*     Consistency checks for DESCA and DESCB.
*
*     Context must be the same
      IF( DESCA_1XP( 2 ).NE.DESCB_PX1( 2 ) ) THEN
         INFO = -( 12*100+2 )
      END IF
*
*        These are alignment restrictions that may or may not be removed
*        in future releases. -Andy Cleary, April 14, 1996.
*
*     Block sizes must be the same
      IF( DESCA_1XP( 4 ).NE.DESCB_PX1( 4 ) ) THEN
         INFO = -( 12*100+4 )
      END IF
*
*     Source processor must be the same
*
      IF( DESCA_1XP( 5 ).NE.DESCB_PX1( 5 ) ) THEN
         INFO = -( 12*100+5 )
      END IF
*
*     Get values out of descriptor for use in code.
*
      ICTXT = DESCA_1XP( 2 )
      CSRC = DESCA_1XP( 5 )
      NB = DESCA_1XP( 4 )
      LLDA = DESCA_1XP( 6 )
      STORE_N_A = DESCA_1XP( 3 )
      LLDB = DESCB_PX1( 6 )
      STORE_M_B = DESCB_PX1( 3 )
*
*     Get grid parameters
*
*
*     Size of separator blocks is maximum of bandwidths
*
      MAX_BW = MAX( BWL, BWU )
      MBW2 = MAX_BW*MAX_BW
*
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(BUFFER,102)  TRANS, UPLO, BWL, BWU, IB, INFO,
     $            JA, LAF, LWORK, N, NRHS, NPROW,
     $            NPCOL, MYROW, MYCOL, eos_str
 102     FORMAT('PDDBTRSV inputs:,TRANS:',A5,',UPLO:',A5,
     $           ',BWL:',I5,',BWU:',I5,',IB:',I5,',INFO:',I5,
     $           ',JA:',I5,',LAF:',I5,',LWORK:',I5,
     $           ',N:',I5,',NRHS:',I5,',NPROW:',I5,
     $           ',NPCOL:',I5 ,',MYROW:',I5,',MYCOL:',I5,A5)
         AOCL_DTL_LOG_ENTRY_F
      END IF
      NP = NPROW*NPCOL
*
*
*
      IF( LSAME( UPLO, 'U' ) ) THEN
         IDUM1 = ICHAR( 'U' )
      ELSE IF( LSAME( UPLO, 'L' ) ) THEN
         IDUM1 = ICHAR( 'L' )
      ELSE
         INFO = -1
      END IF
*
      IF( LSAME( TRANS, 'N' ) ) THEN
         IDUM2 = ICHAR( 'N' )
      ELSE IF( LSAME( TRANS, 'T' ) ) THEN
         IDUM2 = ICHAR( 'T' )
      ELSE IF( LSAME( TRANS, 'C' ) ) THEN
         IDUM2 = ICHAR( 'T' )
      ELSE
         INFO = -2
      END IF
*
      IF( LWORK.LT.-1 ) THEN
         INFO = -16
      ELSE IF( LWORK.EQ.-1 ) THEN
         IDUM3 = -1
      ELSE
         IDUM3 = 1
      END IF
*
      IF( N.LT.0 ) THEN
         INFO = -3
      END IF
*
      IF( N+JA-1.GT.STORE_N_A ) THEN
         INFO = -( 9*100+6 )
      END IF
*
      IF( ( BWL.GT.N-1 ) .OR. ( BWL.LT.0 ) ) THEN
         INFO = -4
      END IF
*
      IF( ( BWU.GT.N-1 ) .OR. ( BWU.LT.0 ) ) THEN
         INFO = -5
      END IF
*
      IF( LLDA.LT.( BWL+BWU+1 ) ) THEN
         INFO = -( 9*100+6 )
      END IF
*
      IF( NB.LE.0 ) THEN
         INFO = -( 9*100+4 )
      END IF
*
      IF( N+IB-1.GT.STORE_M_B ) THEN
         INFO = -( 12*100+3 )
      END IF
*
      IF( LLDB.LT.NB ) THEN
         INFO = -( 12*100+6 )
      END IF
*
      IF( NRHS.LT.0 ) THEN
         INFO = -6
      END IF
*
*     Current alignment restriction
*
      IF( JA.NE.IB ) THEN
         INFO = -8
      END IF
*
*     Argument checking that is specific to Divide & Conquer routine
*
      IF( NPROW.NE.1 ) THEN
         INFO = -( 9*100+2 )
      END IF
*
      IF( N.GT.NP*NB-MOD( JA-1, NB ) ) THEN
         INFO = -( 3 )
         CALL PXERBLA( ICTXT,
     $                 'PDDBTRSV, D&C alg.: only 1 block per proc',
     $                 -INFO )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      IF( ( JA+N-1.GT.NB ) .AND. ( NB.LT.2*MAX( BWL, BWU ) ) ) THEN
         INFO = -( 9*100+4 )
         CALL PXERBLA( ICTXT, 'PDDBTRSV, D&C alg.: NB too small',
     $                 -INFO )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*
      WORK_SIZE_MIN = MAX( BWL, BWU )*NRHS
*
      WORK( 1 ) = WORK_SIZE_MIN
*
      IF( LWORK.LT.WORK_SIZE_MIN ) THEN
         IF( LWORK.NE.-1 ) THEN
            INFO = -16
            CALL PXERBLA( ICTXT, 'PDDBTRSV: worksize error', -INFO )
         END IF
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Pack params and positions into arrays for global consistency check
*
      PARAM_CHECK( 18, 1 ) = DESCB( 5 )
      PARAM_CHECK( 17, 1 ) = DESCB( 4 )
      PARAM_CHECK( 16, 1 ) = DESCB( 3 )
      PARAM_CHECK( 15, 1 ) = DESCB( 2 )
      PARAM_CHECK( 14, 1 ) = DESCB( 1 )
      PARAM_CHECK( 13, 1 ) = IB
      PARAM_CHECK( 12, 1 ) = DESCA( 5 )
      PARAM_CHECK( 11, 1 ) = DESCA( 4 )
      PARAM_CHECK( 10, 1 ) = DESCA( 3 )
      PARAM_CHECK( 9, 1 ) = DESCA( 1 )
      PARAM_CHECK( 8, 1 ) = JA
      PARAM_CHECK( 7, 1 ) = NRHS
      PARAM_CHECK( 6, 1 ) = BWU
      PARAM_CHECK( 5, 1 ) = BWL
      PARAM_CHECK( 4, 1 ) = N
      PARAM_CHECK( 3, 1 ) = IDUM3
      PARAM_CHECK( 2, 1 ) = IDUM2
      PARAM_CHECK( 1, 1 ) = IDUM1
*
      PARAM_CHECK( 18, 2 ) = 1205
      PARAM_CHECK( 17, 2 ) = 1204
      PARAM_CHECK( 16, 2 ) = 1203
      PARAM_CHECK( 15, 2 ) = 1202
      PARAM_CHECK( 14, 2 ) = 1201
      PARAM_CHECK( 13, 2 ) = 11
      PARAM_CHECK( 12, 2 ) = 905
      PARAM_CHECK( 11, 2 ) = 904
      PARAM_CHECK( 10, 2 ) = 903
      PARAM_CHECK( 9, 2 ) = 901
      PARAM_CHECK( 8, 2 ) = 8
      PARAM_CHECK( 7, 2 ) = 6
      PARAM_CHECK( 6, 2 ) = 5
      PARAM_CHECK( 5, 2 ) = 4
      PARAM_CHECK( 4, 2 ) = 3
      PARAM_CHECK( 3, 2 ) = 16
      PARAM_CHECK( 2, 2 ) = 2
      PARAM_CHECK( 1, 2 ) = 1
*
*     Want to find errors with MIN( ), so if no error, set it to a big
*     number. If there already is an error, multiply by the the
*     descriptor multiplier.
*
      IF( INFO.GE.0 ) THEN
         INFO = BIGNUM
      ELSE IF( INFO.LT.-DESCMULT ) THEN
         INFO = -INFO
      ELSE
         INFO = -INFO*DESCMULT
      END IF
*
*     Check consistency across processors
*
      CALL GLOBCHK( ICTXT, 18, PARAM_CHECK, 18, PARAM_CHECK( 1, 3 ),
     $              INFO )
*
*     Prepare output: set info = 0 if no error, and divide by DESCMULT
*     if error is not in a descriptor entry.
*
      IF( INFO.EQ.BIGNUM ) THEN
         INFO = 0
      ELSE IF( MOD( INFO, DESCMULT ).EQ.0 ) THEN
         INFO = -INFO / DESCMULT
      ELSE
         INFO = -INFO
      END IF
*
      IF( INFO.LT.0 ) THEN
         CALL PXERBLA( ICTXT, 'PDDBTRSV', -INFO )
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*     Quick return if possible
*
      IF( N.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      IF( NRHS.EQ.0 ) THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
*
*     Adjust addressing into matrix space to properly get into
*        the beginning part of the relevant data
*
      PART_OFFSET = NB*( ( JA-1 ) / ( NPCOL*NB ) )
*
      IF( ( MYCOL-CSRC ).LT.( JA-PART_OFFSET-1 ) / NB ) THEN
         PART_OFFSET = PART_OFFSET + NB
      END IF
*
      IF( MYCOL.LT.CSRC ) THEN
         PART_OFFSET = PART_OFFSET - NB
      END IF
*
*     Form a new BLACS grid (the "standard form" grid) with only procs
*        holding part of the matrix, of size 1xNP where NP is adjusted,
*        starting at csrc=0, with JA modified to reflect dropped procs.
*
*     First processor to hold part of the matrix:
*
      FIRST_PROC = MOD( ( JA-1 ) / NB+CSRC, NPCOL )
*
*     Calculate new JA one while dropping off unused processors.
*
      JA_NEW = MOD( JA-1, NB ) + 1
*
*     Save and compute new value of NP
*
      NP_SAVE = NP
      NP = ( JA_NEW+N-2 ) / NB + 1
*
*     Call utility routine that forms "standard-form" grid
*
      CALL RESHAPE( ICTXT, INT_ONE, ICTXT_NEW, INT_ONE, FIRST_PROC,
     $              INT_ONE, NP )
*
*     Use new context from standard grid as context.
*
      ICTXT_SAVE = ICTXT
      ICTXT = ICTXT_NEW
      DESCA_1XP( 2 ) = ICTXT_NEW
      DESCB_PX1( 2 ) = ICTXT_NEW
*
*     Get information about new grid.
*
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )
*
*     Drop out processors that do not have part of the matrix.
*
      IF( MYROW.LT.0 ) THEN
         GO TO 200
      END IF
*
*     ********************************
*     Values reused throughout routine
*
*     User-input value of partition size
*
      PART_SIZE = NB
*
*     Number of columns in each processor
*
      MY_NUM_COLS = NUMROC( N, PART_SIZE, MYCOL, 0, NPCOL )
*
*     Offset in columns to beginning of main partition in each proc
*
      IF( MYCOL.EQ.0 ) THEN
         PART_OFFSET = PART_OFFSET + MOD( JA_NEW-1, PART_SIZE )
         MY_NUM_COLS = MY_NUM_COLS - MOD( JA_NEW-1, PART_SIZE )
      END IF
*
*     Offset in elements
*
      OFST = PART_OFFSET*LLDA
*
*     Size of main (or odd) partition in each processor
*
      ODD_SIZE = MY_NUM_COLS
      IF( MYCOL.LT.NP-1 ) THEN
         ODD_SIZE = ODD_SIZE - MAX_BW
      END IF
*
*     Offset to workspace for Upper triangular factor
*
      WORK_U = BWU*ODD_SIZE + 3*MBW2
*
*
*
*     Begin main code
*
      IF( LSAME( UPLO, 'L' ) ) THEN
*
         IF( LSAME( TRANS, 'N' ) ) THEN
*
*        Frontsolve
*
*
******************************************
*       Local computation phase
******************************************
*
*       Use main partition in each processor to solve locally
*
            CALL DTBTRS( UPLO, 'N', 'U', ODD_SIZE, BWL, NRHS,
     $                   A( OFST+1+BWU ), LLDA, B( PART_OFFSET+1 ),
     $                   LLDB, INFO )
*
*
            IF( MYCOL.LT.NP-1 ) THEN
*         Use factorization of odd-even connection block to modify
*           locally stored portion of right hand side(s)
*
*
*           First copy and multiply it into temporary storage,
*             then use it on RHS
*
               CALL DLAMOV( 'N', BWL, NRHS,
     $                      B( PART_OFFSET+ODD_SIZE-BWL+1 ), LLDB,
     $                      WORK( 1 ), MAX_BW )
*
               CALL DTRMM( 'L', 'U', 'N', 'N', BWL, NRHS, -ONE,
     $                     A( ( OFST+( BWL+BWU+1 )+( ODD_SIZE-BWL )*
     $                     LLDA ) ), LLDA-1, WORK( 1 ), MAX_BW )
*
               CALL DMATADD( BWL, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*       Clear garbage out of workspace block
*
            DO 10 IDUM1 = 1, WORK_SIZE_MIN
               WORK( IDUM1 ) = 0.0
   10       CONTINUE
*
*
            IF( MYCOL.NE.0 ) THEN
*
*         Use the "spike" fillin to calculate contribution to previous
*           processor's righthand-side.
*
               CALL DGEMM( 'N', 'N', BWU, NRHS, ODD_SIZE, -ONE, AF( 1 ),
     $                     BWU, B( PART_OFFSET+1 ), LLDB, ZERO,
     $                     WORK( 1+MAX_BW-BWU ), MAX_BW )
*
            END IF
*
*
************************************************
*       Formation and solution of reduced system
************************************************
*
*
*       Send modifications to prior processor's right hand sides
*
            IF( MYCOL.GT.0 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-1 )
*
            END IF
*
*       Receive modifications to processor's right hand sides
*
            IF( MYCOL.LT.NPCOL-1 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+1 )
*
*         Combine contribution to locally stored right hand sides
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*
*       The last processor does not participate in the solution of the
*       reduced system, having sent its contribution already.
            IF( MYCOL.EQ.NPCOL-1 ) THEN
               GO TO 40
            END IF
*
*
*       *************************************
*       Modification Loop
*
*       The distance for sending and receiving for each level starts
*         at 1 for the first level.
            LEVEL_DIST = 1
*
*       Do until this proc is needed to modify other procs' equations
*
   20       CONTINUE
            IF( MOD( ( MYCOL+1 ) / LEVEL_DIST, 2 ).NE.0 )
     $         GO TO 30
*
*         Receive and add contribution to righthand sides from left
*
            IF( MYCOL-LEVEL_DIST.GE.0 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*         Receive and add contribution to righthand sides from right
*
            IF( MYCOL+LEVEL_DIST.LT.NPCOL-1 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
            LEVEL_DIST = LEVEL_DIST*2
*
            GO TO 20
   30       CONTINUE
*       [End of GOTO Loop]
*
*
*
*       *********************************
*       Calculate and use this proc's blocks to modify other procs
*
*       Solve with diagonal block
*
            CALL DTBTRS( 'L', 'N', 'U', MAX_BW, MIN( BWL, MAX_BW-1 ),
     $                   NRHS, AF( ODD_SIZE*BWU+MBW2+1 ), MAX_BW+1,
     $                   B( PART_OFFSET+ODD_SIZE+1 ), LLDB, INFO )
*
            IF( INFO.NE.0 ) THEN
               GO TO 190
            END IF
*
*
*
*       *********
            IF( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-2 ) THEN
*
*         Calculate contribution from this block to next diagonal block
*
               CALL DGEMM( 'T', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( ( ODD_SIZE )*BWU+1 ), MAX_BW,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB, ZERO,
     $                     WORK( 1 ), MAX_BW )
*
*         Send contribution to diagonal block's owning processor.
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
            END IF
*       End of "if( mycol/level_dist .le. (npcol-1)/level_dist-2 )..."
*
*       ************
            IF( ( MYCOL / LEVEL_DIST.GT.0 ) .AND.
     $          ( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-1 ) )
     $           THEN
*
*
*         Use offdiagonal block to calculate modification to diag block
*           of processor to the left
*
               CALL DGEMM( 'N', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( ODD_SIZE*BWU+2*MBW2+1 ), MAX_BW,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB, ZERO,
     $                     WORK( 1 ), MAX_BW )
*
*         Send contribution to diagonal block's owning processor.
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
            END IF
*       End of "if( mycol/level_dist.le. (npcol-1)/level_dist -1 )..."
*
   40       CONTINUE
*
         ELSE
*
******************** BACKSOLVE *************************************
*
********************************************************************
*     .. Begin reduced system phase of algorithm ..
********************************************************************
*
*
*
*       The last processor does not participate in the solution of the
*       reduced system and just waits to receive its solution.
            IF( MYCOL.EQ.NPCOL-1 ) THEN
               GO TO 90
            END IF
*
*       Determine number of steps in tree loop
*
            LEVEL_DIST = 1
   50       CONTINUE
            IF( MOD( ( MYCOL+1 ) / LEVEL_DIST, 2 ).NE.0 )
     $         GO TO 60
*
            LEVEL_DIST = LEVEL_DIST*2
*
            GO TO 50
   60       CONTINUE
*
*
            IF( ( MYCOL / LEVEL_DIST.GT.0 ) .AND.
     $          ( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-1 ) )
     $           THEN
*
*         Receive solution from processor to left
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
*
*         Use offdiagonal block to calculate modification to RHS stored
*           on this processor
*
               CALL DGEMM( 'T', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( ODD_SIZE*BWU+2*MBW2+1 ), MAX_BW,
     $                     WORK( 1 ), MAX_BW, ONE,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
            END IF
*       End of "if( mycol/level_dist.le. (npcol-1)/level_dist -1 )..."
*
*
            IF( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-2 ) THEN
*
*         Receive solution from processor to right
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
*         Calculate contribution from this block to next diagonal block
*
               CALL DGEMM( 'N', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( ( ODD_SIZE )*BWU+1 ), MAX_BW, WORK( 1 ),
     $                     MAX_BW, ONE, B( PART_OFFSET+ODD_SIZE+1 ),
     $                     LLDB )
*
            END IF
*       End of "if( mycol/level_dist .le. (npcol-1)/level_dist-2 )..."
*
*
*       Solve with diagonal block
*
            CALL DTBTRS( 'L', 'T', 'U', MAX_BW, MIN( BWL, MAX_BW-1 ),
     $                   NRHS, AF( ODD_SIZE*BWU+MBW2+1 ), MAX_BW+1,
     $                   B( PART_OFFSET+ODD_SIZE+1 ), LLDB, INFO )
*
            IF( INFO.NE.0 ) THEN
               GO TO 190
            END IF
*
*
*
***Modification Loop *******
*
   70       CONTINUE
            IF( LEVEL_DIST.EQ.1 )
     $         GO TO 80
*
            LEVEL_DIST = LEVEL_DIST / 2
*
*         Send solution to the right
*
            IF( MYCOL+LEVEL_DIST.LT.NPCOL-1 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL+LEVEL_DIST )
*
            END IF
*
*         Send solution to left
*
            IF( MYCOL-LEVEL_DIST.GE.0 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL-LEVEL_DIST )
*
            END IF
*
            GO TO 70
   80       CONTINUE
*       [End of GOTO Loop]
*
   90       CONTINUE
*          [Processor npcol - 1 jumped to here to await next stage]
*
*******************************
*       Reduced system has been solved, communicate solutions to nearest
*         neighbors in preparation for local computation phase.
*
*
*       Send elements of solution to next proc
*
            IF( MYCOL.LT.NPCOL-1 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL+1 )
*
            END IF
*
*       Receive modifications to processor's right hand sides
*
            IF( MYCOL.GT.0 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-1 )
*
            END IF
*
*
*
**********************************************
*       Local computation phase
**********************************************
*
            IF( MYCOL.NE.0 ) THEN
*         Use the "spike" fillin to calculate contribution from previous
*           processor's solution.
*
               CALL DGEMM( 'T', 'N', ODD_SIZE, NRHS, BWU, -ONE, AF( 1 ),
     $                     BWU, WORK( 1+MAX_BW-BWU ), MAX_BW, ONE,
     $                     B( PART_OFFSET+1 ), LLDB )
*
            END IF
*
*
            IF( MYCOL.LT.NP-1 ) THEN
*         Use factorization of odd-even connection block to modify
*           locally stored portion of right hand side(s)
*
*
*         First copy and multiply it into temporary storage,
*           then use it on RHS
*
               CALL DLAMOV( 'N', BWL, NRHS, B( PART_OFFSET+ODD_SIZE+1 ),
     $                      LLDB, WORK( 1+MAX_BW-BWL ), MAX_BW )
*
               CALL DTRMM( 'L', 'U', 'T', 'N', BWL, NRHS, -ONE,
     $                     A( ( OFST+( BWL+BWU+1 )+( ODD_SIZE-BWL )*
     $                     LLDA ) ), LLDA-1, WORK( 1+MAX_BW-BWL ),
     $                     MAX_BW )
*
               CALL DMATADD( BWL, NRHS, ONE, WORK( 1+MAX_BW-BWL ),
     $                       MAX_BW, ONE, B( PART_OFFSET+ODD_SIZE-BWL+
     $                       1 ), LLDB )
*
            END IF
*
*       Use main partition in each processor to solve locally
*
            CALL DTBTRS( UPLO, 'T', 'U', ODD_SIZE, BWL, NRHS,
     $                   A( OFST+1+BWU ), LLDA, B( PART_OFFSET+1 ),
     $                   LLDB, INFO )
*
         END IF
*     End of "IF( LSAME( TRANS, 'N' ) )"...
*
*
      ELSE
***************************************************************
*     CASE UPLO = 'U'                                         *
***************************************************************
         IF( LSAME( TRANS, 'T' ) ) THEN
*
*        Frontsolve
*
*
******************************************
*       Local computation phase
******************************************
*
*       Use main partition in each processor to solve locally
*
            CALL DTBTRS( UPLO, 'T', 'N', ODD_SIZE, BWU, NRHS,
     $                   A( OFST+1 ), LLDA, B( PART_OFFSET+1 ), LLDB,
     $                   INFO )
*
*
            IF( MYCOL.LT.NP-1 ) THEN
*         Use factorization of odd-even connection block to modify
*           locally stored portion of right hand side(s)
*
*
*           First copy and multiply it into temporary storage,
*             then use it on RHS
*
               CALL DLAMOV( 'N', BWU, NRHS,
     $                      B( PART_OFFSET+ODD_SIZE-BWU+1 ), LLDB,
     $                      WORK( 1 ), MAX_BW )
*
               CALL DTRMM( 'L', 'L', 'T', 'N', BWU, NRHS, -ONE,
     $                     A( ( OFST+1+ODD_SIZE*LLDA ) ), LLDA-1,
     $                     WORK( 1 ), MAX_BW )
*
               CALL DMATADD( BWU, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*       Clear garbage out of workspace block
*
            DO 100 IDUM1 = 1, WORK_SIZE_MIN
               WORK( IDUM1 ) = 0.0
  100       CONTINUE
*
*
            IF( MYCOL.NE.0 ) THEN
*         Use the "spike" fillin to calculate contribution to previous
*           processor's righthand-side.
*
               CALL DGEMM( 'N', 'N', BWL, NRHS, ODD_SIZE, -ONE,
     $                     AF( WORK_U+1 ), BWL, B( PART_OFFSET+1 ),
     $                     LLDB, ZERO, WORK( 1+MAX_BW-BWL ), MAX_BW )
            END IF
*
*
************************************************
*       Formation and solution of reduced system
************************************************
*
*
*       Send modifications to prior processor's right hand sides
*
            IF( MYCOL.GT.0 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-1 )
*
            END IF
*
*       Receive modifications to processor's right hand sides
*
            IF( MYCOL.LT.NPCOL-1 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+1 )
*
*         Combine contribution to locally stored right hand sides
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*
*       The last processor does not participate in the solution of the
*       reduced system, having sent its contribution already.
            IF( MYCOL.EQ.NPCOL-1 ) THEN
               GO TO 130
            END IF
*
*
*       *************************************
*       Modification Loop
*
*       The distance for sending and receiving for each level starts
*         at 1 for the first level.
            LEVEL_DIST = 1
*
*       Do until this proc is needed to modify other procs' equations
*
  110       CONTINUE
            IF( MOD( ( MYCOL+1 ) / LEVEL_DIST, 2 ).NE.0 )
     $         GO TO 120
*
*         Receive and add contribution to righthand sides from left
*
            IF( MYCOL-LEVEL_DIST.GE.0 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
*         Receive and add contribution to righthand sides from right
*
            IF( MYCOL+LEVEL_DIST.LT.NPCOL-1 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
               CALL DMATADD( MAX_BW, NRHS, ONE, WORK( 1 ), MAX_BW, ONE,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*
            LEVEL_DIST = LEVEL_DIST*2
*
            GO TO 110
  120       CONTINUE
*       [End of GOTO Loop]
*
*
*
*       *********************************
*       Calculate and use this proc's blocks to modify other procs
*
*       Solve with diagonal block
*
            CALL DTBTRS( 'U', 'T', 'N', MAX_BW, MIN( BWU, MAX_BW-1 ),
     $                   NRHS, AF( ODD_SIZE*BWU+MBW2+1-MIN( BWU,
     $                   MAX_BW-1 ) ), MAX_BW+1,
     $                   B( PART_OFFSET+ODD_SIZE+1 ), LLDB, INFO )
*
            IF( INFO.NE.0 ) THEN
               GO TO 190
            END IF
*
*
*
*       *********
            IF( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-2 ) THEN
*
*         Calculate contribution from this block to next diagonal block
*
               CALL DGEMM( 'T', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( WORK_U+( ODD_SIZE )*BWL+1 ), MAX_BW,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB, ZERO,
     $                     WORK( 1 ), MAX_BW )
*
*         Send contribution to diagonal block's owning processor.
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
            END IF
*       End of "if( mycol/level_dist .le. (npcol-1)/level_dist-2 )..."
*
*       ************
            IF( ( MYCOL / LEVEL_DIST.GT.0 ) .AND.
     $          ( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-1 ) )
     $           THEN
*
*
*         Use offdiagonal block to calculate modification to diag block
*           of processor to the left
*
               CALL DGEMM( 'N', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( WORK_U+ODD_SIZE*BWL+2*MBW2+1 ), MAX_BW,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB, ZERO,
     $                     WORK( 1 ), MAX_BW )
*
*         Send contribution to diagonal block's owning processor.
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
            END IF
*       End of "if( mycol/level_dist.le. (npcol-1)/level_dist -1 )..."
*
  130       CONTINUE
*
         ELSE
*
******************** BACKSOLVE *************************************
*
********************************************************************
*     .. Begin reduced system phase of algorithm ..
********************************************************************
*
*
*
*       The last processor does not participate in the solution of the
*       reduced system and just waits to receive its solution.
            IF( MYCOL.EQ.NPCOL-1 ) THEN
               GO TO 180
            END IF
*
*       Determine number of steps in tree loop
*
            LEVEL_DIST = 1
  140       CONTINUE
            IF( MOD( ( MYCOL+1 ) / LEVEL_DIST, 2 ).NE.0 )
     $         GO TO 150
*
            LEVEL_DIST = LEVEL_DIST*2
*
            GO TO 140
  150       CONTINUE
*
*
            IF( ( MYCOL / LEVEL_DIST.GT.0 ) .AND.
     $          ( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-1 ) )
     $           THEN
*
*         Receive solution from processor to left
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-LEVEL_DIST )
*
*
*         Use offdiagonal block to calculate modification to RHS stored
*           on this processor
*
               CALL DGEMM( 'T', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( WORK_U+ODD_SIZE*BWL+2*MBW2+1 ), MAX_BW,
     $                     WORK( 1 ), MAX_BW, ONE,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
            END IF
*       End of "if( mycol/level_dist.le. (npcol-1)/level_dist -1 )..."
*
*
            IF( MYCOL / LEVEL_DIST.LE.( NPCOL-1 ) / LEVEL_DIST-2 ) THEN
*
*         Receive solution from processor to right
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL+LEVEL_DIST )
*
*         Calculate contribution from this block to next diagonal block
*
               CALL DGEMM( 'N', 'N', MAX_BW, NRHS, MAX_BW, -ONE,
     $                     AF( WORK_U+( ODD_SIZE )*BWL+1 ), MAX_BW,
     $                     WORK( 1 ), MAX_BW, ONE,
     $                     B( PART_OFFSET+ODD_SIZE+1 ), LLDB )
*
            END IF
*       End of "if( mycol/level_dist .le. (npcol-1)/level_dist-2 )..."
*
*
*       Solve with diagonal block
*
            CALL DTBTRS( 'U', 'N', 'N', MAX_BW, MIN( BWU, MAX_BW-1 ),
     $                   NRHS, AF( ODD_SIZE*BWU+MBW2+1-MIN( BWU,
     $                   MAX_BW-1 ) ), MAX_BW+1,
     $                   B( PART_OFFSET+ODD_SIZE+1 ), LLDB, INFO )
*
            IF( INFO.NE.0 ) THEN
               GO TO 190
            END IF
*
*
*
***Modification Loop *******
*
  160       CONTINUE
            IF( LEVEL_DIST.EQ.1 )
     $         GO TO 170
*
            LEVEL_DIST = LEVEL_DIST / 2
*
*         Send solution to the right
*
            IF( MYCOL+LEVEL_DIST.LT.NPCOL-1 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL+LEVEL_DIST )
*
            END IF
*
*         Send solution to left
*
            IF( MYCOL-LEVEL_DIST.GE.0 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL-LEVEL_DIST )
*
            END IF
*
            GO TO 160
  170       CONTINUE
*       [End of GOTO Loop]
*
  180       CONTINUE
*          [Processor npcol - 1 jumped to here to await next stage]
*
*******************************
*       Reduced system has been solved, communicate solutions to nearest
*         neighbors in preparation for local computation phase.
*
*
*       Send elements of solution to next proc
*
            IF( MYCOL.LT.NPCOL-1 ) THEN
*
               CALL DGESD2D( ICTXT, MAX_BW, NRHS,
     $                       B( PART_OFFSET+ODD_SIZE+1 ), LLDB, 0,
     $                       MYCOL+1 )
*
            END IF
*
*       Receive modifications to processor's right hand sides
*
            IF( MYCOL.GT.0 ) THEN
*
               CALL DGERV2D( ICTXT, MAX_BW, NRHS, WORK( 1 ), MAX_BW, 0,
     $                       MYCOL-1 )
*
            END IF
*
*
*
**********************************************
*       Local computation phase
**********************************************
*
            IF( MYCOL.NE.0 ) THEN
*         Use the "spike" fillin to calculate contribution from previous
*           processor's solution.
*
               CALL DGEMM( 'T', 'N', ODD_SIZE, NRHS, BWL, -ONE,
     $                     AF( WORK_U+1 ), BWL, WORK( 1+MAX_BW-BWL ),
     $                     MAX_BW, ONE, B( PART_OFFSET+1 ), LLDB )
*
            END IF
*
*
            IF( MYCOL.LT.NP-1 ) THEN
*         Use factorization of odd-even connection block to modify
*           locally stored portion of right hand side(s)
*
*
*         First copy and multiply it into temporary storage,
*           then use it on RHS
*
               CALL DLAMOV( 'N', BWU, NRHS, B( PART_OFFSET+ODD_SIZE+1 ),
     $                      LLDB, WORK( 1+MAX_BW-BWU ), MAX_BW+BWL )
*
               CALL DTRMM( 'L', 'L', 'N', 'N', BWU, NRHS, -ONE,
     $                     A( ( OFST+1+ODD_SIZE*LLDA ) ), LLDA-1,
     $                     WORK( 1+MAX_BW-BWU ), MAX_BW+BWL )
*
               CALL DMATADD( BWU, NRHS, ONE, WORK( 1+MAX_BW-BWU ),
     $                       MAX_BW+BWL, ONE, B( PART_OFFSET+ODD_SIZE-
     $                       BWU+1 ), LLDB )
*
            END IF
*
*       Use main partition in each processor to solve locally
*
            CALL DTBTRS( UPLO, 'N', 'N', ODD_SIZE, BWU, NRHS,
     $                   A( OFST+1 ), LLDA, B( PART_OFFSET+1 ), LLDB,
     $                   INFO )
*
         END IF
*     End of "IF( LSAME( TRANS, 'N' ) )"...
*
*
      END IF
*     End of "IF( LSAME( UPLO, 'L' ) )"...
  190 CONTINUE
*
*
*     Free BLACS space used to hold standard-form grid.
*
      IF( ICTXT_SAVE.NE.ICTXT_NEW ) THEN
         CALL BLACS_GRIDEXIT( ICTXT_NEW )
      END IF
*
  200 CONTINUE
*
*     Restore saved input parameters
*
      ICTXT = ICTXT_SAVE
      NP = NP_SAVE
*
*     Output minimum worksize
*
      WORK( 1 ) = WORK_SIZE_MIN
*
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PDDBTRSV
*
      END
