*
*     Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      SUBROUTINE PDLABAD( ICTXT, SMALL, LARGE )
*
*  -- ScaLAPACK auxiliary routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      INTEGER            ICTXT
      DOUBLE PRECISION   LARGE, SMALL
*     ..
*
*  Purpose
*  =======
*
*  PDLABAD takes as input the values computed by PDLAMCH for underflow
*  and overflow, and returns the square root of each of these values if
*  the log of LARGE is sufficiently large.  This subroutine is intended
*  to identify machines with a large exponent range, such as the Crays,
*  and redefine the underflow and overflow limits to be the square roots
*  of the values computed by PDLAMCH.  This subroutine is needed because
*  PDLAMCH does not compensate for poor arithmetic in the upper half of
*  the exponent range, as is found on a Cray.
*
*  In addition, this routine performs a global minimization and maximi-
*  zation on these values, to support heterogeneous computing networks.
*
*  Arguments
*  =========
*
*  ICTXT   (global input) INTEGER
*          The BLACS context handle in which the computation takes
*          place.
*
*  SMALL   (local input/local output) DOUBLE PRECISION
*          On entry, the underflow threshold as computed by PDLAMCH.
*          On exit, if LOG10(LARGE) is sufficiently large, the square
*          root of SMALL, otherwise unchanged.
*
*  LARGE   (local input/local output) DOUBLE PRECISION
*          On entry, the overflow threshold as computed by PDLAMCH.
*          On exit, if LOG10(LARGE) is sufficiently large, the square
*          root of LARGE, otherwise unchanged.
*
*  =====================================================================
*
*     .. Local Scalars ..
      INTEGER            IDUMM
*     ..
*     .. External Subroutines ..
      EXTERNAL           DGAMN2D, DGAMX2D
*     ..
*     .. Intrinsic Functions ..
      INTRINSIC          LOG10, SQRT
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
         WRITE(LOG_BUF,102)  ICTXT, LARGE, SMALL, eos_str
 102     FORMAT('PDLABAD inputs: ,ICTXT:',I5,', LARGE:',F9.4,
     $           ', SMALL:',F9.4, A1 )
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
*     If it looks like we're on a Cray, take the square root of
*     SMALL and LARGE to avoid overflow and underflow problems.
*
      IF( LOG10( LARGE ).GT.2000.D0 ) THEN
         SMALL = SQRT( SMALL )
         LARGE = SQRT( LARGE )
      END IF
      IDUMM = 0
*
      CALL DGAMX2D( ICTXT, 'All', ' ', 1, 1, SMALL, 1, IDUMM,
     $              IDUMM, -1, -1, IDUMM )
      CALL DGAMN2D( ICTXT, 'All', ' ', 1, 1, LARGE, 1, IDUMM,
     $              IDUMM, -1, -1, IDUMM )
*
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
      RETURN
*
*     End of PDLABAD
*
      END
