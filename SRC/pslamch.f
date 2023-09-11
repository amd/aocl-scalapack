*
*     Copyright (c) 2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*
#include "SL_Context_fortran_include.h"
*
      REAL               FUNCTION PSLAMCH( ICTXT, CMACH )
*
*  -- ScaLAPACK auxiliary routine (version 1.7) --
*     University of Tennessee, Knoxville, Oak Ridge National Laboratory,
*     and University of California, Berkeley.
*     May 1, 1997
*
      USE LINK_TO_C_GLOBALS
*     .. Scalar Arguments ..
      CHARACTER          CMACH
      INTEGER            ICTXT
*     ..
*
*  Purpose
*  =======
*
*  PSLAMCH determines single precision machine parameters.
*
*  Arguments
*  =========
*
*  ICTXT   (global input) INTEGER
*          The BLACS context handle in which the computation takes
*          place.
*
*  CMACH   (global input) CHARACTER*1
*          Specifies the value to be returned by PSLAMCH:
*          = 'E' or 'e',   PSLAMCH := eps
*          = 'S' or 's ,   PSLAMCH := sfmin
*          = 'B' or 'b',   PSLAMCH := base
*          = 'P' or 'p',   PSLAMCH := eps*base
*          = 'N' or 'n',   PSLAMCH := t
*          = 'R' or 'r',   PSLAMCH := rnd
*          = 'M' or 'm',   PSLAMCH := emin
*          = 'U' or 'u',   PSLAMCH := rmin
*          = 'L' or 'l',   PSLAMCH := emax
*          = 'O' or 'o',   PSLAMCH := rmax
*
*          where
*
*          eps   = relative machine precision
*          sfmin = safe minimum, such that 1/sfmin does not overflow
*          base  = base of the machine
*          prec  = eps*base
*          t     = number of (base) digits in the mantissa
*          rnd   = 1.0 when rounding occurs in addition, 0.0 otherwise
*          emin  = minimum exponent before (gradual) underflow
*          rmin  = underflow threshold - base**(emin-1)
*          emax  = largest exponent before overflow
*          rmax  = overflow threshold  - (base**emax)*(1-eps)
*
*  =====================================================================
*
*     .. Local Scalars ..
      INTEGER            IDUMM
      REAL               TEMP
*     ..
*     .. External Subroutines ..
      EXTERNAL           SGAMN2D, SGAMX2D
*     ..
*     .. External Functions ..
      LOGICAL            LSAME
      REAL               SLAMCH
      EXTERNAL           LSAME, SLAMCH
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
         WRITE(LOG_BUF,102)  CMACH, ICTXT, eos_str
 102     FORMAT('PSLAMCH inputs: ,CMACH:',A5,', ICTXT:',I5, A1 )
         AOCL_DTL_LOG_ENTRY_F
      END IF
*
      TEMP = SLAMCH( CMACH )
      IDUMM = 0
*
      IF( LSAME( CMACH, 'E' ).OR.LSAME( CMACH, 'S' ).OR.
     $    LSAME( CMACH, 'M' ).OR.LSAME( CMACH, 'U' ) ) THEN
         CALL SGAMX2D( ICTXT, 'All', ' ', 1, 1, TEMP, 1, IDUMM,
     $                 IDUMM, -1, -1, IDUMM )
      ELSE IF( LSAME( CMACH, 'L' ).OR.LSAME( CMACH, 'O' ) ) THEN
         CALL SGAMN2D( ICTXT, 'All', ' ', 1, 1, TEMP, 1, IDUMM,
     $                 IDUMM, -1, -1, IDUMM )
      END IF
*
      PSLAMCH = TEMP
*
*     Capture the subroutine exit in the trace file
*
      AOCL_DTL_TRACE_EXIT_F
*
*     End of PSLAMCH
*
      END
