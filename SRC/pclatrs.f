*
*     Modifications Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PCLATRS( UPLO, TRANS, DIAG, NORMIN, N, A, IA,
     $                    JA, DESCA, X, IX, JX, DESCX, SCALE, CNORM,
     $                    WORK )
*
*  -- ScaLAPACK auxiliary routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      CHARACTER          DIAG, NORMIN, TRANS, UPLO
      INTEGER            IA, IX, JA, JX, N
      REAL               SCALE
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), DESCX( * )
      REAL               CNORM( * )
      COMPLEX            A( * ), X( * ), WORK( * )
*     ..
*
*  Purpose
*  =======
*
*  PCLATRS solves a triangular system. This routine in unfinished
*  at this time, but will be part of the next release.
*
*  =====================================================================
*
*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )
      REAL               ONE
      PARAMETER          ( ONE = 1.0E+0 )
*
*     .. Local Scalars ..
      INTEGER            ICTXT, IIX, IROFF, JJX, MYCOL, MYROW, NP,
     $                   NPCOL, NPROW, LDX, IXCOL, IXROW
*     ..
*     .. External Functions ..
      INTEGER            NUMROC
      EXTERNAL           NUMROC
*     ..
*     .. External Subroutines ..
      EXTERNAL           BLACS_GRIDINFO, CGEBR2D, CGEBS2D, INFOG2L,
     $                   PCTRSV
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
         WRITE(LOG_BUF,102)  DIAG, NORMIN, TRANS, UPLO,
     $            IA, IX, JA, JX, N, SCALE, NPROW, NPCOL,
     $            MYROW, MYCOL, eos_str
 102     FORMAT('PCLATRS inputs: ,DIAG:',A5,', NORMIN:',A5,
     $           ', TRANS:',A5,', UPLO:',A5,', IA:',I5,
     $           ', IX:',I5,', JA:',I5,', JX:',I5,
     $           ', N:',I5,', SCALE:',F9.4,',  NPROW: ', I5,
     $           ', NPCOL: ', I5 ,', MYROW: ', I5,
     $           ', MYCOL: ', I5, A1)
         AOCL_DTL_LOG_ENTRY_F
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
*     *****  NO SCALING ***** Call PCTRSV for all cases  *****
*
      SCALE = ONE
      CALL PCTRSV( UPLO, TRANS, DIAG, N, A, IA, JA, DESCA, X, IX, JX,
     $             DESCX, 1 )
*
      CALL INFOG2L( IX, JX, DESCX, NPROW, NPCOL, MYROW, MYCOL, IIX, JJX,
     $              IXROW, IXCOL )
      LDX = DESCX( LLD_ )
      IROFF = MOD( IX-1, DESCX(MB_) )
      NP = NUMROC( N+IROFF, DESCX( MB_ ), MYROW, IXROW, NPROW )
      IF( MYROW.EQ.IXROW )
     $   NP = NP - IROFF
      IF( MYCOL.EQ.IXCOL ) THEN
         CALL CGEBS2D( ICTXT, 'R', ' ', NP, 1, X( IIX+(JJX-1)*LDX ),
     $                 LDX )
      ELSE
         CALL CGEBR2D( ICTXT, 'R', ' ', NP, 1, X( IIX+(JJX-1)*LDX ),
     $                 LDX, MYROW, IXCOL )
      END IF
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PCLATRS
*
      END
