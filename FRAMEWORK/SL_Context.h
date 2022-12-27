
/* ************************************************************************
 * Copyright (c) 2022 Advanced Micro Devices, Inc.
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
#ifndef SL_CONTEXT_H
#define SL_CONTEXT_H
#include <stdbool.h>
/* -- Type and macro definitions -----------------------------------------------  */
#if defined( SCALAPACK_NO_CONTEXT)
/* This branch defines a pthread-like API, scalapack_pthread_*(), and implements it
// in terms of "dummy" code that doesn't depend on POSIX threads or any other
// threading mechanism.
// NOTE: THIS CODE DOES NOT IMPLEMENT THREADING AND IS NOT THREAD-SAFE!
// -- pthread types -- */
typedef int scalapack_pthread_mutex_t;
typedef int scalapack_pthread_once_t;
/* -- pthreads macros --  */
#define SL_PTHREAD_MUTEX_INITIALIZER 0
#define SL_PTHREAD_ONCE_INIT 0
#elif defined(_WIN32)
/* #ifdef _MSC_VER */ /* !defined(SCALAPACK_NO_CONTEXT) */
#include <windows.h>
// This branch defines a pthread-like API, scalapack_pthread_*(), and implements it
// in terms of Windows API calls.
// -- pthread types --
typedef SRWLOCK   scalapack_pthread_mutex_t;
typedef INIT_ONCE scalapack_pthread_once_t;
// -- pthreads macros --
#define SL_PTHREAD_MUTEX_INITIALIZER SRWLOCK_INIT
#define SL_PTHREAD_ONCE_INIT INIT_ONCE_STATIC_INIT
#else /* !defined(SCALAPACK_NO_CONTEXT) && !defined(_MSC_VER)*/
#include <pthread.h>
/* This branch defines a pthreads-like API, scalapack_pthreads_*(), and implements it
 in terms of the corresponding pthreads_*() types, macros, and function calls.
 -- pthread types --  */
typedef pthread_mutex_t scalapack_pthread_mutex_t;
typedef pthread_once_t  scalapack_pthread_once_t;
/* -- pthreads macros --  */
#define SL_PTHREAD_MUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER
#define SL_PTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#endif
/* -- Function definitions -----------------------------------------------------
 -- pthread_mutex_*() -- */
int scalapack_pthread_mutex_lock(scalapack_pthread_mutex_t *mutex);
int scalapack_pthread_mutex_unlock(scalapack_pthread_mutex_t *mutex);
/* -- pthread_once() -- */
void scalapack_pthread_once(scalapack_pthread_once_t *once, void (*init)(void));
/******************************************************************************************
 * \brief scalapack_context is a structure holding the below information:
  1) Enable/Disable status of DTL logging and AOCL_Progress.
  2) In future additionally following could be added to the structure:
      - The number of threads
      - Target CPU ISA information
          char    is_fma;
          char    is_avx2;
          char    is_avx512;
  3) It gets initialised by scalapack_init_once().
 *****************************************************************************************/
typedef struct _aocl_scalapack_global_context
{
    int   num_threads; /* Number of Threads */
    int  is_dtl_enabled;  /* DTL log */
    int  is_progress_enabled; /* AOCL-progress */

} aocl_scalapack_global_context;
extern aocl_scalapack_global_context  scalapack_context;
typedef aocl_scalapack_global_context aocl_scalapack_global_context_;
typedef aocl_scalapack_global_context AOCL_SCALAPACK_GLOBAL_CONTEXT;
/*! \ingroup aux_module
 *  \brief Initialise various framework variables including
 *    context
 *
 *  \retval none.
 
void aocl_scalapack_init(); */
void aocl_scalapack_init_();
void AOCL_SCALAPACK_INIT();
/* Alias Declarations to enable F2C calls
#define aocl_scalapack_init_ aocl_scalapack_init
#define AOCL_SCALAPACK_INIT_ aocl_scalapack_init
#define AOCL_SCALAPACK_INIT  aocl_scalapack_init*/

/*! \ingroup aux_module
 *  \brief Deallocate and clean all initalized buffers
 */
void aocl_scalapack_finalize();
#endif /* SL_CONTEXT_H  */
