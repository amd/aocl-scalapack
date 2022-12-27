##Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved.##

#  ----------------------------------
#  aocl-scaLAPACK framework routines
#  ----------------------------------
set (framework-C
   SL_Context.c   cpu_features.c) 

set (framework
   SL_Context_module.f) 

set(src ${framework-C} ${framework})

#set(framework ${framework-C} ${framework})
