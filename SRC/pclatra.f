*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
#include "SL_Context_fortran_include.h"
*
      COMPLEX            FUNCTION PCLATRA( N, A, IA, JA, DESCA )
*
*  -- ScaLAPACK auxiliary routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, JA, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * )
      COMPLEX            A( * )
*     ..
*
*  Purpose
*  =======
*
*  PCLATRA computes the trace of an N-by-N distributed matrix sub( A )
*  denoting A( IA:IA+N-1, JA:JA+N-1 ). The result is left on every
*  process of the grid.
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
*  N       (global input) INTEGER
*          The number of rows and columns to be operated on i.e the
*          order of the distributed submatrix sub( A ).  N >= 0.
*
*  A       (local input) COMPLEX pointer into the local memory
*          to an array of dimension ( LLD_A, LOCc(JA+N-1) ). This array
*          contains the local pieces of the distributed matrix the trace
*          is to be computed.
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
*  ====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      COMPLEX            ZERO
      PARAMETER          ( ZERO = 0.0E+0 )
*     ..
*     .. Local Scalars ..
      INTEGER            ICURCOL, ICURROW, II, IOFFA, J, JB, JJ, JN,
     $                   LDA, LL, MYCOL, MYROW, NPCOL, NPROW
      COMPLEX            TRACE
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, CGSUM2D, INFOG2L
*     ..
*     .. External Functions ..
      INTEGER            ICEIL
      EXTERNAL           ICEIL
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          MIN, MOD
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
      CALL BLACS_GRIDINFO( DESCA( CTXT_ ), NPROW, NPCOL, MYROW, MYCOL )
*
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  IA, JA, N, NPROW, NPCOL, MYROW,
     $            MYCOL, eos_str
 102     FORMAT('PCLATRA inputs: ,IA:',I5,', JA:',I5,', N:',I5,
     $           ',  NPROW: ', I5,', NPCOL: ', I5 ,', MYROW: ', I5,
     $           ', MYCOL: ', I5, A1)
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
      TRACE = ZERO
      IF( N.EQ.0 ) THEN
         PCLATRA = TRACE
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      CALL INFOG2L( IA, JA, DESCA, NPROW, NPCOL, MYROW, MYCOL, II, JJ,
     $              ICURROW, ICURCOL )
*
      JN = MIN( ICEIL( JA, DESCA( NB_ ) ) * DESCA( NB_ ), JA+N-1 )
      JB = JN-JA+1
      LDA = DESCA( LLD_ )
      IOFFA = II + ( JJ - 1 ) * LDA
*
*     Handle first diagonal block separately
*
      IF( MYROW.EQ.ICURROW .AND. MYCOL.EQ.ICURCOL ) THEN
         DO 10 LL = IOFFA, IOFFA + (JB-1)*(LDA+1), LDA+1
            TRACE = TRACE + A( LL )
   10    CONTINUE
      END IF
      IF( MYROW.EQ.ICURROW )
     $   IOFFA = IOFFA + JB
      IF( MYCOL.EQ.ICURCOL )
     $   IOFFA = IOFFA + JB*LDA
      ICURROW = MOD( ICURROW+1, NPROW )
      ICURCOL = MOD( ICURCOL+1, NPCOL )
*
*     Loop over the remaining block of columns
*
      DO 30 J = JN+1, JA+N-1, DESCA( NB_ )
         JB = MIN( JA+N-J, DESCA( NB_ ) )
*
         IF( MYROW.EQ.ICURROW .AND. MYCOL.EQ.ICURCOL ) THEN
            DO 20 LL = IOFFA, IOFFA + (JB-1)*(LDA+1), LDA+1
               TRACE = TRACE + A( LL )
   20       CONTINUE
         END IF
         IF( MYROW.EQ.ICURROW )
     $      IOFFA = IOFFA + JB
         IF( MYCOL.EQ.ICURCOL )
     $      IOFFA = IOFFA + JB*LDA
         ICURROW = MOD( ICURROW+1, NPROW )
         ICURCOL = MOD( ICURCOL+1, NPCOL )
   30 CONTINUE
*
      CALL CGSUM2D( DESCA( CTXT_ ), 'All', ' ', 1, 1, TRACE, 1, -1,
     $              MYCOL )
*
      PCLATRA = TRACE
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PCLATRA
*
      END
