##Copyright (C) 2021, Advanced Micro Devices, Inc. All rights reserved.##
set(FTestObj
   blacstest.f btprim.f tools.f)

if ("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU" AND CMAKE_Fortran_COMPILER_VERSION VERSION_GREATER_EQUAL 10)
    set_source_files_properties(blacstest.f PROPERTIES COMPILE_FLAGS "-std=legacy")
endif()

add_executable(xFbtest ${FTestObj})
target_link_libraries(xFbtest scalapack)

set(CTestObj
   Cbt.c)

if (UNIX)
    add_executable(xCbtest ${CTestObj} ${FTestObj})
    target_link_libraries(xCbtest scalapack)
else ()
    add_library(CTestObj OBJECT Cbt.c)
    add_executable(xCbtest ${FTestObj})
    target_link_libraries(xCbtest scalapack CTestObj)
endif ()

if (UNIX)
set (CMAKE_BUILD_TYPE "")
endif ()

file(COPY bsbr.dat DESTINATION ${SCALAPACK_BINARY_DIR}/BLACS/TESTING/${CMAKE_BUILD_TYPE})
file(COPY bt.dat DESTINATION ${SCALAPACK_BINARY_DIR}/BLACS/TESTING/${CMAKE_BUILD_TYPE})
file(COPY comb.dat DESTINATION ${SCALAPACK_BINARY_DIR}/BLACS/TESTING/${CMAKE_BUILD_TYPE})
file(COPY sdrv.dat DESTINATION ${SCALAPACK_BINARY_DIR}/BLACS/TESTING/${CMAKE_BUILD_TYPE})

# We could run the BLACS TESTING the following way
# But BLACS TESTING are TESTING anormal exit so even if they pass,
# CTest will determine they fail
#add_test(xFbtest0 ${MPIEXEC} ${MPIEXEC_NUMPROC_FLAG} 4 ./xFbtest)
#add_test(xCbtest0 ${MPIEXEC} ${MPIEXEC_NUMPROC_FLAG} 4 ./xCbtest)

add_test(xCbtest
     ${CMAKE_COMMAND}
    -DMPIEXEC=${MPIEXEC}
    -DMPIEXEC_NUMPROC_FLAG=${MPIEXEC_NUMPROC_FLAG}
    -DTEST_PROG=xCbtest
    -DOUTPUTDIR=${SCALAPACK_BINARY_DIR}/BLACS/TESTING
    -DRUNTIMEDIR=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    -DSOURCEDIR=${CMAKE_CURRENT_SOURCE_DIR}
    -P ${CMAKE_CURRENT_SOURCE_DIR}/runtest.cmake
    )

add_test(xFbtest
     ${CMAKE_COMMAND}
    -DMPIEXEC=${MPIEXEC}
    -DMPIEXEC_NUMPROC_FLAG=${MPIEXEC_NUMPROC_FLAG}
    -DTEST_PROG=xFbtest
    -DOUTPUTDIR=${SCALAPACK_BINARY_DIR}/BLACS/TESTING
    -DRUNTIMEDIR=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    -DSOURCEDIR=${CMAKE_CURRENT_SOURCE_DIR}
    -P ${CMAKE_CURRENT_SOURCE_DIR}/runtest.cmake
    )
