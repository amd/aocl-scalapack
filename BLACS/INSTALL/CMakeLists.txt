##Copyright (C) 2021, Advanced Micro Devices, Inc. All rights reserved.##
cmake_minimum_required(VERSION 3.0)
project(INSTALL C Fortran)

if (UNIX)
    add_executable(xintface Fintface.f Cintface.c)
else ()
    add_library(cintface OBJECT Cintface.c)
    add_executable(xintface Fintface.f)
    target_link_libraries(xintface cintface)
endif ()
