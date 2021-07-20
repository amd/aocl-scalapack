##Copyright (C) 2021, Advanced Micro Devices, Inc. All rights reserved.##
cmake_minimum_required(VERSION 2.8)
project(INSTALL C Fortran)

if (WIN32 AND CMAKE_Fortran_COMPILER_ID MATCHES "Intel")
    set (CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} /names:lowercase")
    #set (CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} /assume:underscore")
endif()

if (UNIX)
    add_executable(xintface Fintface.f Cintface.c)
else ()
    add_library(cintface OBJECT Cintface.c)
    add_executable(xintface Fintface.f)
    target_link_libraries(xintface cintface)
endif ()
