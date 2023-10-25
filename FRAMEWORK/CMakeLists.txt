##Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved.##

#  ----------------------------------
#  aocl-scaLAPACK framework routines
#  ----------------------------------

if(ENABLE_DTL)
# Include 'fopenmp' flag to enable 'Thread local storage'
# attribute for the 'Log Buffer'
set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -cpp -fopenmp" )
ENDIF(ENABLE_DTL)

set (framework-C
   SL_Context.c   cpu_features.c)

set (framework
   SL_Context_module.f)

set(src ${framework-C} ${framework})

#set(framework ${framework-C} ${framework})
