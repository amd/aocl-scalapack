/* ---------------------------------------------------------------------
 * *
 * *  -- AOCL ScaLAPACK progress support routine/s --
 * *     Copyright (c) 2022 Advanced Micro Devices, Inc.  All rights reserved.
 * *
 * *  ---------------------------------------------------------------------
 * */
#ifndef _AOCL_SCALAPACK_PROGRESS_
#define _AOCL_SCALAPACK_PROGRESS_

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
/** Declarations **/

#if defined(ENABLE_ILP64)
typedef int64_t integer;
typedef uint64_t uinteger;
#else
typedef int integer;
typedef unsigned long uinteger;
#endif

typedef integer ( *aocl_scalapack_progress_callback )(
const char * const api,
const integer  *lenapi,
const integer  *progress,
const integer  *current_process,
const integer  *total_processes
);

aocl_scalapack_progress_callback aocl_scalapack_progress_ptr_;

integer aocl_scalapack_progress_(
    const char* const api,
    const integer* lenapi,
    const integer* progress,
    const integer* current_process,
    const integer* total_processes
);
/** Wrapper function declarations for
    'aocl_scalapack_progress_' function
**/
integer aocl_scalapack_progress(
    const char* const api,
    const integer* lenapi,
    const integer* progress,
    const integer* current_process,
    const integer* total_processes
);
integer AOCL_SCALAPACK_PROGRESS(
    const char* const api,
    const integer* lenapi,
    const integer* progress,
    const integer* current_process,
    const integer* total_processes
);
integer AOCL_SCALAPACK_PROGRESS_(
    const char* const api,
    const integer* lenapi,
    const integer* progress,
    const integer* current_process,
    const integer* total_processes
);

void aocl_scalapack_set_progress( aocl_scalapack_progress_callback func );
/** Wrapper function declarations for
    'aocl_scalapack_set_progress' function
**/
void aocl_scalapack_set_progress_( aocl_scalapack_progress_callback func );
void AOCL_SCALAPACK_SET_PROGRESS( aocl_scalapack_progress_callback func );
void AOCL_SCALAPACK_SET_PROGRESS_( aocl_scalapack_progress_callback func );

#endif // _AOCL_SCALAPACK_PROGRESS_
