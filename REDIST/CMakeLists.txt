##Copyright (C) 2021, Advanced Micro Devices, Inc. All rights reserved.##

add_subdirectory(SRC)
if(${SCALAPACK_BUILD_TESTING})
  add_subdirectory(TESTING)
endif()
