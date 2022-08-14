/* ---------------------------------------------------------------------
 * *
 * *  -- AOCL ScaLAPACK progress support routine/s --
 * *     Copyright (c) 2022 Advanced Micro Devices, Inc.  All rights reserved.
 * *
 * *  ---------------------------------------------------------------------
 * */

#include "aocl_scalapack_progress.h"

aocl_scalapack_progress_callback aocl_scalapack_progress_ptr_ = NULL;

void aocl_scalapack_set_progress( aocl_scalapack_progress_callback func )
{
    aocl_scalapack_progress_ptr_ = func;
}

void aocl_scalapack_set_progress_( aocl_scalapack_progress_callback func )
{
    aocl_scalapack_progress_ptr_ = func;
}

void aocl_scalapack_progress_(char* api, integer *lenapi, integer* progress, 
                                     integer* current_process, integer *total_processes)
{
   integer ret;

   if (aocl_scalapack_progress_ptr_  != NULL ) { 
      ret = aocl_scalapack_progress_ptr_ ( api, lenapi, progress, current_process, total_processes);
   }
   
   return;
}
