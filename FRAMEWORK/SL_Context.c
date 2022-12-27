
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
#include "SL_Context.h"
#include <stdlib.h>
#include <string.h>
#if defined(SCALAPACK_NO_CONTEXT)
// This branch defines a pthread-like API, scalapack_pthread_*(), and implements it
// in terms of "dummy" code that doesn't depend on POSIX threads or any other
// threading mechanism.
// NOTE: THIS CODE DOES NOT IMPLEMENT THREADING AND IS NOT THREAD-SAFE!
int scalapack_pthread_mutex_lock(scalapack_pthread_mutex_t *mutex)
{
    //return pthread_mutex_lock( mutex );
    return 0;
}
int scalapack_pthread_mutex_unlock(scalapack_pthread_mutex_t *mutex)
{
    //return pthread_mutex_unlock( mutex );
    return 0;
}
// -- pthread_once() --
void scalapack_pthread_once(scalapack_pthread_once_t *once, void (*init)(void))
{
    //pthread_once( once, init );
    return;
}
#elif defined(_MSC_VER) // !defined(FLA_DISABLE_SYSTEM)
#include <errno.h>
// This branch defines a pthread-like API, scalapack_pthread_*(), and implements it
// in terms of Windows API calls.
// -- pthread_mutex_*() --
int scalapack_pthread_mutex_lock(scalapack_pthread_mutex_t *mutex)
{
    AcquireSRWLockExclusive(mutex);
    return 0;
}
int scalapack_pthread_mutex_unlock(scalapack_pthread_mutex_t *mutex)
{
    ReleaseSRWLockExclusive(mutex);
    return 0;
}
// -- pthread_once() --
static bool
    scalapack_init_once_wrapper(scalapack_pthread_once_t *once, void *param, void **context)
{
    (void)once;
    (void)context;
    typedef void (*callback)(void);
    ((callback)param)();
    return TRUE;
}
void scalapack_pthread_once(scalapack_pthread_once_t *once, void (*init)(void))
{
    InitOnceExecuteOnce(once, scalapack_init_once_wrapper, init, NULL);
}
#else // !defined(SCALAPACK_NO_CONTEXT) && !defined(_MSC_VER)
// This branch defines a pthreads-like API, scalapack_pthreads_*(), and implements it
// in terms of the corresponding pthreads_*() types, macros, and function calls.
// This branch is compiled for Linux and other non-Windows environments where
// we assume that *some* implementation of pthreads is provided (although it
// may lack barriers--see below).
// -- pthread_mutex_*() --
int scalapack_pthread_mutex_lock(scalapack_pthread_mutex_t *mutex)
{
    return pthread_mutex_lock(mutex);
}
int scalapack_pthread_mutex_unlock(scalapack_pthread_mutex_t *mutex)
{
    return pthread_mutex_unlock(mutex);
}
// -- pthread_once() --
void scalapack_pthread_once(scalapack_pthread_once_t *once, void (*init)(void))
{
    pthread_once(once, init);
}
#endif // !defined(SCALAPACK_NO_CONTEXT) && !defined(_MSC_VER)
/* The global scalapack_context structure, which holds the global thread,ISA settings
   Initialize with 0.
**/
aocl_scalapack_global_context scalapack_context = {0,0,0};
/* A mutex to allow synchronous access to global_thread. */
scalapack_pthread_mutex_t global_thread_mutex = SL_PTHREAD_MUTEX_INITIALIZER;
/********************************************************************************
 * \brief scalapack_env_get_var is a function used to query the environment
 * variable and convert the string into integer and return the same
 ********************************************************************************/
int scalapack_env_get_var(const char *env, int fallback)
{
    int r_val;
    char *str;
    // Query the environment variable and store the result in str.
    str = getenv(env);
    // Set the return value based on the string obtained from getenv().
    if(str != NULL)
    {
        // If there was no error, convert the string to an integer and
        // prepare to return that integer.
        r_val = (int)strtol(str, NULL, 10);
    }
    else
    {
        // If there was an error, use the "fallback" as the return value.
        r_val = fallback;
    }
    return r_val;
}
void scalapack_thread_init_rntm_from_env(aocl_scalapack_global_context *context)
{
    int status;
    /* Check whether DTL is set in the run-time environment */
    status = scalapack_env_get_var("AOCL_SL_DTL", -1);

    if (status == -1)
    {
        context->is_dtl_enabled = 0;
    }
    else
    {
        context->is_dtl_enabled = 1;
    }

    /* Check whether AOCL-progress requirement is set in the run-time environment */
    status = scalapack_env_get_var("AOCL_SL_PROGRESS", -1);

    if (status == -1)
    {
        context->is_progress_enabled = 0;
    }
    else
    {
        context->is_progress_enabled = 1;
    }

    /* Since multithreading support is not present in the aocl-scaLAPACK,
       we set the context number of threads to 1.
       NOTE: If multithread support is enabled, then we have to set the
       desired num_threads from the environment.
    */
    context->num_threads = 1;
}
// -----------------------------------------------------------------------------
void scalapack_context_init(void)
{
    // Read the environment variables and use them to initialize the
    // global runtime object.
    scalapack_thread_init_rntm_from_env(&scalapack_context);
}
// -----------------------------------------------------------------------------
void scalapack_context_finalize(void) {}
// -----------------------------------------------------------------------------
// A pthread_once_t variable is a pthread structure used in pthread_once().
// pthread_once() is guaranteed to execute exactly once among all threads that
// pass in this control object. Thus, we need one for initialization and a
// separate one for finalization.
static scalapack_pthread_once_t once_init     = SL_PTHREAD_ONCE_INIT;
static scalapack_pthread_once_t once_finalize = SL_PTHREAD_ONCE_INIT;

void aocl_scalapack_init_()
{
    scalapack_pthread_once(&once_init, scalapack_context_init);
}
void AOCL_SCALAPACK_INIT()
{
    scalapack_pthread_once(&once_init, scalapack_context_init);
}

void aocl_scalapack_finalize(void)
{
    scalapack_pthread_once(&once_finalize, scalapack_context_finalize);
}
int scalapack_thread_get_num_threads(void)
{
    // We must ensure that global_rntm has been initialized.
    aocl_scalapack_init_();
    return scalapack_context.num_threads;
}
void scalapack_thread_set_num_threads(int n_threads)
{
    // We must ensure that global_thread has been initialized.
    aocl_scalapack_init_();
    // Acquire the mutex protecting global_thread.
    scalapack_pthread_mutex_lock(&global_thread_mutex);
    scalapack_context.num_threads = n_threads;
    // Release the mutex protecting global_thread.
    scalapack_pthread_mutex_unlock(&global_thread_mutex);
}
