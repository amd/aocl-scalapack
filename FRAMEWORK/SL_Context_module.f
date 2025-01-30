
* ************************************************************************
* Copyright (c) 2025 Advanced Micro Devices, Inc.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
* ************************************************************************ */
      MODULE LINK_TO_C_GLOBALS
         USE, INTRINSIC::ISO_C_BINDING
         TYPE, BIND(C)::AOCL_SCALAPACK_GLOBAL_CONTEXT
           INTEGER(C_INT)::NUM_THREADS
           INTEGER(C_INT)::IS_TRACE_ENABLED
           INTEGER(C_INT)::IS_LOG_ENABLED
           INTEGER(C_INT)::IS_PROGRESS_ENABLED
#ifdef ENABLE_ILP64
           INTEGER(C_LONG)::RANK
           INTEGER(C_LONG)::NUM_PROCS
#else
           INTEGER(C_INT)::RANK
           INTEGER(C_INT)::NUM_PROCS
#endif 
         END TYPE
         TYPE(AOCL_SCALAPACK_GLOBAL_CONTEXT),BIND(C)::SCALAPACK_CONTEXT
*  ..
*  ..    LOG variables declaration ..
*  ..    LOG BUFFER size is large enough to capture the scalar argument
*  ..    values..
         CHARACTER LOG_BUF*1024
!$omp threadprivate(LOG_BUF)
*  ..
*  ..    Variable to hold the 'End of string' character in C language
         CHARACTER*2, PARAMETER :: eos_str = '' // C_NULL_CHAR
*  ..
*  ..
      END MODULE LINK_TO_C_GLOBALS

*
*  =====================================================================
*        SUBROUTINE SL_DTL_TRACE_ENTRY_F
*  =====================================================================
      SUBROUTINE SL_DTL_TRACE_ENTRY_F( FILENAME, LINENUMBER, MESSAGE )
*
      USE LINK_TO_C_GLOBALS
*  .. Scalar Arguments ..
      INTEGER         LINENUMBER
*  ..
*  .. Array Arguments ..
      CHARACTER       FILENAME( * ), MESSAGE( * )
      IF(SCALAPACK_CONTEXT%IS_TRACE_ENABLED.EQ.1) THEN
         CALL AOCL_SL_DTL_TRACE_ENTRY(FILENAME, LINENUMBER, MESSAGE)
      END IF
      RETURN
*
*     End of SL_DTL_TRACE_ENTRY_F
*
      END
*
*  =====================================================================
*        SUBROUTINE SL_DTL_TRACE_EXIT_F
*  =====================================================================
      SUBROUTINE SL_DTL_TRACE_EXIT_F( FILENAME, LINENUMBER, MESSAGE )
*
      USE LINK_TO_C_GLOBALS
*  .. Scalar Arguments ..
      INTEGER         LINENUMBER
*  ..
*  .. Array Arguments ..
      CHARACTER       FILENAME( * ), MESSAGE( * )
      IF( SCALAPACK_CONTEXT%IS_TRACE_ENABLED.EQ.1 ) THEN
         CALL AOCL_SL_DTL_TRACE_EXIT(FILENAME, LINENUMBER, MESSAGE)
      END IF
      RETURN
*
*     End of SL_DTL_TRACE_ENTRY_F
*
      END
*
*  =====================================================================
*        SUBROUTINE SL_DTL_LOG_ENTRY_F
*  =====================================================================
      SUBROUTINE SL_DTL_LOG_ENTRY_F( FILENAME, LINENUMBER, MESSAGE )
*
      USE LINK_TO_C_GLOBALS
*  .. Scalar Arguments ..
      INTEGER         LINENUMBER
*  ..
*  .. Array Arguments ..
      CHARACTER       FILENAME( * ), MESSAGE( * )
      IF(SCALAPACK_CONTEXT%IS_LOG_ENABLED.EQ.1) THEN
         CALL AOCL_SL_DTL_TRACE_ENTRY(FILENAME, LINENUMBER, MESSAGE)
      END IF
      RETURN
*
*     End of SL_DTL_TRACE_ENTRY_F
*
      END

