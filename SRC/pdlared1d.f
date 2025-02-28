*
*     Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PDLARED1D( N, IA, JA, DESC, BYCOL, BYALL, WORK, LWORK )
*
*  -- ScaLAPACK routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     December 12, 2005
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, JA, LWORK, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESC( * )
      DOUBLE PRECISION   BYALL( * ), BYCOL( * ), WORK( LWORK )
*     ..
*
*  Purpose
*  =======
*
*  PDLARED1D redistributes a 1D array
*
*  It assumes that the input array, BYCOL, is distributed across
*  rows and that all process columns contain the same copy of
*  BYCOL.  The output array, BYALL, will be identical on all processes
*  and will contain the entire array.
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
*    NP = Number of local rows in BYCOL()
*
*  N       (global input) INTEGER
*          The number of elements to be redistributed.  N >= 0.
*
*  IA      (global input) INTEGER
*          IA must be equal to 1
*
*  JA      (global input) INTEGER
*          JA must be equal to 1
*
*  DESC    (global/local input) INTEGER Array of dimension DLEN_
*          A 2D array descriptor, which describes BYCOL
*
*  BYCOL   (local input) distributed block cyclic DOUBLE PRECISION array
*          global dimension (N), local dimension (NP)
*          BYCOL is distributed across the process rows
*          All process columns are assumed to contain the same value
*
*  BYALL   (global output) DOUBLE PRECISION global dimension( N )
*          local dimension (N)
*          BYALL is exactly duplicated on all processes
*          It contains the same values as BYCOL, but it is replicated
*          across all processes rather than being distributed
*
*          BYALL(i) = BYCOL( NUMROC(i,DESC( NB_ ),MYROW,0,NPROW ) on the procs
*          whose MYROW == mod((i-1)/DESC( NB_ ),NPROW)
*
*  WORK    (local workspace) DOUBLE PRECISION dimension (LWORK)
*          Used to hold the buffers sent from one process to another
*
*  LWORK   (local input) INTEGER size of WORK array
*          LWORK >= NUMROC(N, DESC( NB_ ), 0, 0, NPCOL)
*
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, DLEN_, DTYPE_, CTXT_, M_, N_,
     $                   MB_, NB_, RSRC_, CSRC_, LLD_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                   CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                   RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
*     ..
*     .. Local Scalars ..
      INTEGER            ALLI, BUFLEN, I, II, MYCOL, MYROW, NB, NPCOL,
     $                   NPROW, PCOL
*     ..
*     .. External Functions ..
*
      INTEGER            NUMROC
      EXTERNAL           NUMROC
*     ..
*     .. External Subroutines ..
*
      EXTERNAL           BLACS_GRIDINFO, DCOPY, DGEBR2D, DGEBS2D
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          MIN
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
*     Update the log buffer with the scalar arguments details,
*     MPI process grid information and write to the log file
*
      IF( SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1 ) THEN
         WRITE(LOG_BUF,102)  IA, JA, LWORK, N, eos_str
 102     FORMAT('PDLARED1D inputs: ,IA:',I5,', JA:',I5,
     $           ', LWORK:',I5,', N:',I5, A1 )
         AOCL_DTL_LOG_ENTRY_F
      END IF
*       This is just to keep ftnchek happy
      IF( BLOCK_CYCLIC_2D*CSRC_*CTXT_*DLEN_*DTYPE_*LLD_*MB_*M_*NB_*N_*
     $    RSRC_.LT.0 )THEN
*
*        Capture the subroutine exit in the trace file
*
         AOCL_DTL_TRACE_EXIT_F
         RETURN
      END IF
*
      CALL BLACS_GRIDINFO( DESC( CTXT_ ), NPROW, NPCOL, MYROW, MYCOL )
      NB = DESC( MB_ )
*
*
      DO 30 PCOL = 0, NPCOL - 1
         BUFLEN = NUMROC( N, NB, PCOL, 0, NPCOL )
         IF( MYCOL.EQ.PCOL ) THEN
            CALL DCOPY( BUFLEN, BYCOL, 1, WORK, 1 )
            CALL DGEBS2D( DESC( CTXT_ ), 'R', ' ', 1, BUFLEN, WORK, 1 )
         ELSE
            CALL DGEBR2D( DESC( CTXT_ ), 'R', ' ', 1, BUFLEN, WORK, 1,
     $                    MYROW, PCOL )
         END IF
*
         ALLI = PCOL*NB
         DO 20 II = 1, BUFLEN, NB
            DO 10 I = 1, MIN( NB, BUFLEN-II+1 )
               BYALL( ALLI+I ) = WORK( II-1+I )
   10       CONTINUE
            ALLI = ALLI + NB*NPCOL
   20    CONTINUE
   30 CONTINUE
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PDLARED1D
*
      END
