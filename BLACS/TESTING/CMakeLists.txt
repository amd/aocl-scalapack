##Copyright (C) 2021-2024, Advanced Micro Devices, Inc. All rights reserved.##
set(FTestObj
   blacstest.f btprim.f tools.f)

if ("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "GNU" AND CMAKE_Fortran_COMPILER_VERSION VERSION_GREATER_EQUAL 10)
    set_source_files_properties(blacstest.f PROPERTIES COMPILE_FLAGS "-std=legacy")
endif()

# SCALAPACK_BUILD_SOURCE flag determines whether to compile the source code. If this of OFF we need to linked pre-compiled
# ScaLAPACK library.
if(SCALAPACK_BUILD_SOURCE STREQUAL "OFF")
  if(UNIX)
    if(BUILD_SHARED_LIBS)
        add_library(scalapack SHARED IMPORTED)
        set_target_properties(scalapack PROPERTIES
        IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/libscalapack.so"
        )
    else()
        add_library(scalapack STATIC IMPORTED)
        set_target_properties(scalapack PROPERTIES
        IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/libscalapack.a"
        )
    endif()
      custom_macros_for_each_scalapack_source (scalapack)
      target_link_libraries( scalapack INTERFACE ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES})
  else(UNIX)
    if(BUILD_SHARED_LIBS)
      add_library(scalapack SHARED IMPORTED)
      set_target_properties(scalapack PROPERTIES
      IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.dll"
      IMPORTED_IMPLIB "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
      )
    else()
      add_library(scalapack STATIC IMPORTED)
      set_target_properties(scalapack PROPERTIES
      IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
      )
    endif()
    target_link_libraries( scalapack INTERFACE ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
  endif(UNIX)
endif()

# SCALAPACK_BUILD_TESTS flag determines whether to compile the test framework.
if(SCALAPACK_BUILD_TESTS)
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
