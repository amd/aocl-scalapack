*
*     Copyright (c) 2020-23 Advanced Micro Devices, Inc.  All rights reserved.
*
*  -- AOCL ScaLAPACK routine --
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PDGETF2_COMM( M, N, A, IA, JA, DESCA, IPIV, INFO )
*

      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            IA, INFO, JA, M, N
*     ..
*     .. Array Arguments ..
      INTEGER            DESCA( * ), IPIV( * )
      DOUBLE PRECISION   A( * )

      INTEGER            I, IACOL, IAROW, ICOFF, ICTXT, IIA, IROFF, J,
     $                   JJA, MN, MYCOL, MYROW, NPCOL, NPROW

*     .. Parameters ..
      INTEGER            BLOCK_CYCLIC_2D, CSRC_, CTXT_, DLEN_, DTYPE_,
     $                   LLD_, MB_, M_, NB_, N_, RSRC_
      PARAMETER          ( BLOCK_CYCLIC_2D = 1, DLEN_ = 9, DTYPE_ = 1,
     $                     CTXT_ = 2, M_ = 3, N_ = 4, MB_ = 5, NB_ = 6,
     $                     RSRC_ = 7, CSRC_ = 8, LLD_ = 9 )

      DOUBLE PRECISION   ONE, ZERO
      PARAMETER          ( ONE = 1.0D+0, ZERO = 0.0D+0 )

*     .. External Subroutines ..
      EXTERNAL           BLACS_ABORT, BLACS_GRIDINFO, CHK1MAT, IGEBR2D,
     $                   IGEBS2D, INFOG2L, PDAMAX,
     $                   PDSCAL, PDSWAP, PB_TOPGET, PXERBLA

*     ..
*     .. DTL variables declaration ..
      CHARACTER  BUFFER*512
      CHARACTER*15, PARAMETER :: FILE_NAME = 'pdgetf2_comm.f'
*     .. Executable Statements ..
*
      CALL AOCL_SCALAPACK_INIT( )
*
      IF( SCALAPACK_CONTEXT%IS_DTL_ENABLED.EQ.1 ) THEN
*        .. Init DTL log Buffer to zero ..
         BUFFER='0'
         AOCL_DTL_TRACE_ENTRY_F
         WRITE(BUFFER,102)  IA, INFO, JA, M, N
 102     FORMAT('PDGETF2_COMM inputs:
     $ IA: ', I5,'  INFO: ', I5,'  JA: ', I5,'  M: ', I5,
     $ '  N: ', I5)
         CALL AOCL_SL_DTL_LOG_ENTRY( BUFFER )
      END IF
*
*
*     Get grid parameters.
*
      ICTXT = DESCA( CTXT_ )
      CALL BLACS_GRIDINFO( ICTXT, NPROW, NPCOL, MYROW, MYCOL )


      MN = MIN( M, N )
      CALL INFOG2L( IA, JA, DESCA, NPROW, NPCOL, MYROW, MYCOL, IIA, JJA,
     $              IAROW, IACOL )
      CALL PB_TOPGET( ICTXT, 'Broadcast', 'Rowwise', ROWBTOP )
*
      IF( MYCOL.EQ.IACOL ) THEN

         CALL IGEBS2D( ICTXT, 'Rowwise', ROWBTOP, MN, 1, IPIV( IIA ),
     $                 MN )
*
      ELSE
*
         CALL IGEBR2D( ICTXT, 'Rowwise', ROWBTOP, MN, 1, IPIV( IIA ),
     $                 MN, MYROW, IACOL )
*
      END IF
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PDGETF2_COMM
*
      END

