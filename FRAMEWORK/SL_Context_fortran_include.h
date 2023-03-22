
/* ************************************************************************
 * Copyright (c) 2023 Advanced Micro Devices, Inc.
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

#ifndef SL_CONTEXT_FORTRAN_H
#define SL_CONTEXT_FORTRAN_H

#if _WIN32
#define AOCL_DTL_TRACE_ENTRY_F CONTINUE
#define AOCL_DTL_TRACE_EXIT_F CONTINUE
#define aocl_scalapack_init_  AOCL_SCALAPACK_INIT
#else
#define AOCL_DTL_TRACE_ENTRY_F CALL AOCL_SL_DTL_TRACE_ENTRY(FILE_NAME, __LINE__, ' ')
#define AOCL_DTL_TRACE_EXIT_F  CALL SL_DTL_TRACE_EXIT_F (FILE_NAME, __LINE__, ' ')
#endif

#endif /* SL_CONTEXT_FORTRAN_H  */
