##Copyright (C) 2021-2025, Advanced Micro Devices, Inc. All rights reserved.##

cmake_minimum_required(VERSION 3.26)

# Reading program version from file

file(STRINGS "so_version" VERSION_DATA)
list(JOIN VERSION_DATA "." PROJ_VERSION)

project(SCALAPACK C Fortran)
# Configure the warning and code coverage suppression file
configure_file(
  "${SCALAPACK_SOURCE_DIR}/CMAKE/CTestCustom.cmake.in"
  "${SCALAPACK_BINARY_DIR}/CTestCustom.cmake"
  COPYONLY
)

if (NOT DEFINED CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release CACHE STRING "Build type")
endif ()

# Add the CMake directory for custon CMake modules
set(CMAKE_MODULE_PATH "${SCALAPACK_SOURCE_DIR}/CMAKE" ${CMAKE_MODULE_PATH})

set(SL_FRAMEWORK_INCLUDE_PATH  "${SCALAPACK_SOURCE_DIR}/FRAMEWORK")

# ------   Build Options List  -----------
# Fortran to C Name Mangling build option
# Defaulting to the standard Add_
#set(CDEFS "NoChange" CACHE STRING "Naming strategy needed for a fortran routine to call a C routine")
#set_property(CACHE CDEFS PROPERTY STRINGS "NoChange" "UpCase" "Add_")
set(CDEFS "Add_")

# ILP64 build option
option(ENABLE_ILP64 "Enable ILP64 " OFF)

# aocl progress option
option(ENABLE_AOCL_PROGRESS "Enable progress feature " OFF)

# DTL option
option(ENABLE_DTL "Enable DTL feature " OFF)

# Driver check option
option(ENABLE_DRIVER_CHECK "Enable driver check feature " OFF)

# ASAN testing option
option(ENABLE_ASAN_TESTS "Enable Address sanitizer tests " OFF)

# Coverage option
option(ENABLE_COVERAGE "Enable code coverage" OFF)

# Set custom library version number
set(ENABLE_SET_LIB_VERSION "default_version" CACHE STRING "Set the library version")

# Option: Dynamic allocation of work buffer memory in Test code
# Helpful to test larger matrix sizes more than 2K
option (ENABLE_LARGE_MATRIX_TESTING "Dynamic allocation of work buffer memory in test code" OFF)

# ------   Build Options List End   -----------

#Default to the lowercase with underscore
if (WIN32 AND CMAKE_Fortran_COMPILER_ID MATCHES "Intel")
    set (CMAKE_IFORT_LIBDEPS_DIR "C:/Program Files (x86)/IntelSWTools/compilers_and_libraries/windows/compiler/lib/intel64_win" CACHE STRING "")
    # set the "FORCE:MULTIPLE" option to handle linker errors due to some
    # of the common functions of scalapack and lapack in case of static build.
	set (CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} /names:lowercase")
	set (CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} /assume:underscore")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /FORCE:MULTIPLE")
endif()

set(CMAKE_ICC_FLAGS " ")
set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -cpp" )

# set compile flags to enable address sanitizer (ASAN) tests
if(ENABLE_ASAN_TESTS)
   set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fsanitize=address " )
   set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address  ")
   message(STATUS " ASAN testing enabled for the scaLAPACK build ")
endif(ENABLE_ASAN_TESTS)

# Option to enable the scaLAPACK test-suite with "Dynamic work buffer memory allocation".
if(ENABLE_LARGE_MATRIX_TESTING)

#  Configure option to customize Dynamic work buffer size "-DWORK_BUFFER_SIZE = custom_size Bytes"
#  as per the machine's memory configuration.
   if(WORK_BUFFER_SIZE)
      message(STATUS "scaLAPACK test-suite build with custom dynamic work_buffer_size: ${WORK_BUFFER_SIZE} bytes.")
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}  -DDYNAMIC_WORK_MEM_ALLOC -DWORK_BUFFER_SIZE=${WORK_BUFFER_SIZE}" )
   else(WORK_BUFFER_SIZE)
#  Build with Dynamic work buffer size = 2100000000 bytes by default.
      message(STATUS "scaLAPACK test-suite build with dynamic work_buffer_size: 2100000000 bytes.")
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS}  -DDYNAMIC_WORK_MEM_ALLOC -DWORK_BUFFER_SIZE=2100000000 " )
   endif(WORK_BUFFER_SIZE)

endif(ENABLE_LARGE_MATRIX_TESTING)


if (UNIX)
   if ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffixed-line-length-none -I ${SL_FRAMEWORK_INCLUDE_PATH}/" )
   endif ()
   if ("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Flang")
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -ffixed-line-length-132 -I ${SL_FRAMEWORK_INCLUDE_PATH}/" )
   endif ()
   if ("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel")
      set( CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fltconsistency -fp-port -no-vec -I ${SL_FRAMEWORK_INCLUDE_PATH}/" )
   elseif ("${CMAKE_Fortran_COMPILER}" MATCHES "ifort" )
      set( CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fltconsistency -fp-port -no-vec -I ${SL_FRAMEWORK_INCLUDE_PATH}/" )
   endif ()

   if (("${CMAKE_C_COMPILER_ID}" STREQUAL "Intel") AND ( "${CMAKE_C_COMPILER}" MATCHES "icc" ) )
      set(CMAKE_ICC_FLAGS "${CMAKE_ICC_FLAGS} -no-vec ")
      message(STATUS "Found Intel icc compiler : ${CMAKE_ICC_FLAGS} ")
   endif ()

   if (("${CMAKE_C_COMPILER_ID}" STREQUAL "IntelLLVM") AND ( "${CMAKE_C_COMPILER}" MATCHES "icc" ) )
      set(CMAKE_ICC_FLAGS "${CMAKE_ICC_FLAGS} -Wno-implicit-function-declaration")
      set(CMAKE_ICC_FLAGS "${CMAKE_ICC_FLAGS} -no-vec ")
      message(STATUS "Found Intel icx compiler : ${CMAKE_ICC_FLAGS} ")
   endif ()
else ()
   set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -I ${SL_FRAMEWORK_INCLUDE_PATH}/ " )
endif ()


#
#   MPI
#
#set(MPI_BASE_DIR "/Users/julie/opt/openmpi/" CACHE PATH "MPI Path")
#set(MPI_BASE_DIR "/Users/julie/opt/mpich2/" CACHE PATH "MPI Path")
set(CMAKE_PREFIX_PATH "${MPI_BASE_DIR};${CMAKE_PREFIX_PATH}")
#set(MPI_COMPILER ${MPI_BASE_DIR}/bin/mpicc)

find_package(MPI)
if (MPI_FOUND)
   message(STATUS "Found MPI_LIBRARY : ${MPI_FOUND} ")
   INCLUDE_DIRECTORIES(${MPI_INCLUDE_PATH})

   find_program(MPI_C_COMPILER
      NAMES mpicc
      HINTS "${MPI_BASE_DIR}"
      PATH_SUFFIXES bin
      DOC "MPI C compiler.")
   MARK_AS_ADVANCED(MPI_C_COMPILER)
   if ("${MPI_C_COMPILER}" STREQUAL "MPI_C_COMPILER-NOTFOUND")
      message(ERROR "--> MPI C Compiler NOT FOUND (please set MPI_BASE_DIR accordingly")
   else()
      message(STATUS "--> MPI C Compiler : ${MPI_C_COMPILER}")
      SET(CMAKE_C_COMPILER "${MPI_C_COMPILER}")
      message(STATUS "--> C Compiler : ${CMAKE_C_COMPILER}")
   endif()
   find_program(MPI_Fortran_COMPILER
      NAMES mpif77
      HINTS "${MPI_BASE_DIR}"
      PATH_SUFFIXES bin
      DOC "MPI Fortran compiler.")
   MARK_AS_ADVANCED(MPI_Fortran_COMPILER)



   if ("${MPI_Fortran_COMPILER}" STREQUAL "MPI_Fortran_COMPILER-NOTFOUND")
      message(ERROR "--> MPI Fortran Compiler NOT FOUND (please set MPI_BASE_DIR accordingly")
   else()
      message(STATUS "--> MPI Fortran Compiler : ${MPI_Fortran_COMPILER}")
      SET(Fortran_COMPILER "${CMAKE_Fortran_COMPILER}")
      SET(CMAKE_Fortran_COMPILER "${MPI_Fortran_COMPILER}")
      message(STATUS "--> Fortran Compiler : ${CMAKE_Fortran_COMPILER}")
   endif()

else()
   message(STATUS "Found MPI_LIBRARY : ${MPI_FOUND} ")
   set(MPI_BASE_DIR ${MPI_BASE_DIR} CACHE PATH "MPI Path")
   UNSET(MPIEXEC CACHE)
   UNSET(MPIEXEC_POSTFLAGS CACHE)
   UNSET(MPIEXEC_PREFLAGS CACHE)
   UNSET(MPIEXEC_MAX_NUMPROCS CACHE)
   UNSET(MPIEXEC_NUMPROC_FLAG CACHE)
   UNSET(MPI_COMPILE_FLAGS CACHE)
   UNSET(MPI_LINK_FLAGS CACHE)
   UNSET(MPI_INCLUDE_PATH CACHE)
   message(FATAL_ERROR "--> MPI Library NOT FOUND -- please set MPI_BASE_DIR accordingly --")
endif()

macro(SCALAPACK_install_library lib)
  install(TARGETS ${lib} EXPORT scalapack-targets
    ARCHIVE DESTINATION lib${LIB_SUFFIX}
    LIBRARY DESTINATION lib${LIB_SUFFIX}
    RUNTIME DESTINATION Testing
  )
endmacro()

#Function to add file name for DTL purpose
function(custom_macros_for_each_scalapack_source  target_library_sources)
    get_target_property(src_files_list "${target_library_sources}" SOURCES)
    foreach(src_file ${src_files_list})
        get_filename_component(src_file_name "${src_file}" NAME)
        get_filename_component(function_name "${src_file}" NAME_WLE)
        set_property(
            SOURCE "${src_file}" APPEND
            PROPERTY COMPILE_DEFINITIONS "FUNCTION_NAME=\"${function_name}\""  "FILE_NAME=\"${src_file_name}\"" )
    endforeach()
endfunction()

# --------------------------------------------------
# Testing
SET(DART_TESTING_TIMEOUT 600)

enable_testing()
include(CTest)
enable_testing()
# --------------------------------------------------

# Organize output files.  On Windows this also keeps .dll files next
# to the .exe files that need them, making tests easy to run.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SCALAPACK_BINARY_DIR}/TESTING)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${SCALAPACK_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${SCALAPACK_BINARY_DIR}/lib)

# --------------------------------------------------
# Check for any necessary platform specific compiler flags
include( CheckBLACSCompilerFlags )
CheckBLACSCompilerFlags()

set(prefix ${CMAKE_INSTALL_PREFIX})
set(libdir ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
set(PKG_CONFIG_DIR ${libdir}/pkgconfig)

# --------------------------------------------------
# BLACS Internal variables
#
#   Fortran Mangling, MPI Tests and BLACS settings
if(UNIX OR "${CDEFS}" STREQUAL "UpCase")
include(FortranMangling)
COMPILE(install_COMPILED)

FORTRAN_MANGLING(CDEFS)
endif()
MESSAGE(STATUS "Setting CDEFS = ${CDEFS}")
#set(CDEFS ${CDEFS} CACHE STRING "Fortran Mangling")
 MESSAGE(STATUS "=========")

# --------------------------------------------------
# Compiler Flags
option(USE_F2C "Use FORTRAN To C compatible interface for certain Complex type functions" OFF)

if(USE_F2C)
  set(f2cflag "-DF2C " )
ENDIF(USE_F2C)
MESSAGE(STATUS "CMAKE_C_COMPILER_ID = ${CMAKE_C_COMPILER_ID}")
MESSAGE(STATUS "CMAKE_Fortran_COMPILER_ID = ${CMAKE_Fortran_COMPILER_ID}")

if(ENABLE_DTL)
  add_definitions("-DAOCL_DTL ")
ENDIF(ENABLE_DTL)

if(ENABLE_DRIVER_CHECK)
  add_definitions("-DENABLE_DRIVER_CHECK")
ENDIF(ENABLE_DRIVER_CHECK)

if(ENABLE_ILP64)
  if(UNIX)
    if (("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel") AND ( "${CMAKE_Fortran_COMPILER}" MATCHES "ifort" ) )
      add_definitions("-DInt=long" "-DUInt=u_int64_t" "-DENABLE_ILP64")  
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -i8")
    else (("${CMAKE_Fortran_COMPILER_ID}" STREQUAL "Intel") AND ( "${CMAKE_Fortran_COMPILER}" MATCHES "ifort" ) )
      add_definitions("-DInt=int64_t" "-DUInt=u_int64_t" "-DENABLE_ILP64")  
      set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -fdefault-integer-8")
    endif()
  else(UNIX)
   add_definitions("-DInt=__int64" "-DENABLE_ILP64" "-DUInt=unsigned __int64" "-i8")
  endif()
else(ENABLE_ILP64)
   add_definitions("-DUInt=unsigned int " "-DInt=int" )
ENDIF(ENABLE_ILP64)

#if the flag is not set or set to a binary value, use the AOCL-VERSION
if("${ENABLE_SET_LIB_VERSION}" MATCHES "^(default_version|OFF|ON)$")
    string(TIMESTAMP TODAY "%Y%m%d")
    if(UNIX)
      set(AOCL_SCALAPACK_LINUX_VERSION TRUE)
	    set(LIBRARY_VERSION "\"${PROJ_VERSION}\tBuild\t${TODAY}\"")
    elseif(WIN32)
      set( LIBRARY_VERSION "${PROJ_VERSION}\tBuild\t${TODAY}")
    endif()
    add_definitions("-DAOCL_SCALAPACK_VERSION=${LIBRARY_VERSION}")
else()
    if(UNIX)
      set(AOCL_SCALAPACK_LINUX_VERSION TRUE)
    endif()
    add_definitions("-DAOCL_SCALAPACK_VERSION=${ENABLE_SET_LIB_VERSION}")
endif()

if(ENABLE_AOCL_PROGRESS)
  if(UNIX)
    add_definitions("-DAOCL_PROGRESS")
  endif()
ENDIF(ENABLE_AOCL_PROGRESS)
    message(STATUS "ENABLE_SET_LIB_VERSION : ${ENABLE_SET_LIB_VERSION} ")

ADD_DEFINITIONS( "-D${CDEFS}" "${f2cflag}")
set(CMAKE_C_FLAGS " ${CMAKE_C_FLAGS} ${CMAKE_ICC_FLAGS} -I ${SL_FRAMEWORK_INCLUDE_PATH}/")

# --------------------------------------------------
# By default static library
OPTION(BUILD_SHARED_LIBS "Build shared libraries" OFF )
OPTION(BUILD_STATIC_LIBS "Build static libraries" ON )

# --------------------------------------------------
# Subdirectories that need to be processed

macro(append_subdir_files variable dirname)
get_directory_property(holder DIRECTORY ${dirname} DEFINITION ${variable})
foreach(depfile ${holder})
  list(APPEND ${variable} "${dirname}/${depfile}")
endforeach()
endmacro()


# --------------------------------------------------
# ScaLAPACK needs BLAS and LAPACK

option(USE_OPTIMIZED_LAPACK_BLAS "Whether or not to search for optimized LAPACK and BLAS libraries on your machine (if not found, Reference LAPACK and BLAS will be downloaded and installed)" OFF)

IF(BLACS_LIBRARY)
  message(STATUS "CHECKING & VERIFYING BLACS LIBRARY")
  include(CheckFunctionExists)
  set(CMAKE_REQUIRED_LIBRARIES ${BLACS_LIBRARY})
  message(STATUS "--> BLACS supplied by user is ${BLACS_LIBRARY}.")
  CHECK_FUNCTION_EXISTS("Cblacs_get" CUSTOM_BLACS_FOUND)
  unset( CMAKE_REQUIRED_LIBRARIES )
  message(STATUS "--> BLACS routine blacs_pinfo is found: ${CUSTOM_BLACS_FOUND}.")

  if(CUSTOM_BLACS_FOUND)
     message(STATUS "--> BLACS supplied by user is WORKING, will use ${BLACS_LIBRARY}.")
  else( CUSTOM_BLACS_FOUND )
  #
  # BLACS
  #
    add_subdirectory(BLACS)
    append_subdir_files(blacs "BLACS/SRC")
    message(STATUS "--> BLACS supplied by user is NOT WORKING, will use BLACS source code for building aocl-scalapack")
  endif( CUSTOM_BLACS_FOUND )
ELSE(BLACS_LIBRARY)
    add_subdirectory(BLACS)
    append_subdir_files(blacs "BLACS/SRC")
    message(STATUS "--> Using default BLACS source code for building aocl-scalapack")
ENDIF()

if(WIN32)
  #specify openmp library to resolve multithreaded BLAS and LAPACK Libraries for static builds
    SET(OpenMP_libomp_LIBRARY "C:/Program Files/LLVM/lib/libomp.lib" CACHE STRING "openmp library path")
endif(WIN32)

find_package(OpenMP)
if (OPENMP_FOUND)
    message(STATUS "Found Openmp Library : ${OPENMP_FOUND} ")
else()
    message (FATAL_ERROR "Openmp Library Not Found")
endif()

unset(LAPACK_FOUND CACHE)
message(STATUS "CHECKING BLAS AND LAPACK LIBRARIES")
IF(LAPACK_LIBRARIES)
  include(CheckFortranFunctionExists)
  message(STATUS "--> LAPACK supplied by user is ${LAPACK_LIBRARIES}.")
  if(BLAS_LIBRARIES)
     if(WIN32)
       set(CMAKE_REQUIRED_LIBRARIES ${LAPACK_LIBRARIES};${BLAS_LIBRARIES};${OpenMP_libomp_LIBRARY})
     else(WIN32)
       set(CMAKE_REQUIRED_LIBRARIES ${LAPACK_LIBRARIES};${BLAS_LIBRARIES})
     endif(WIN32)
  else(BLAS_LIBRARIES)
     set(CMAKE_REQUIRED_LIBRARIES ${LAPACK_LIBRARIES})
  ENDIF(BLAS_LIBRARIES)
  CHECK_FORTRAN_FUNCTION_EXISTS("dgesv" LAPACK_FOUND)
  unset( CMAKE_REQUIRED_LIBRARIES )
  message(STATUS "--> LAPACK routine dgesv is found: ${LAPACK_FOUND}.")
ENDIF()

if(LAPACK_FOUND)
      message(STATUS "--> LAPACK supplied by user is WORKING, will use ${LAPACK_LIBRARIES}.")
else(LAPACK_FOUND)
   if(USE_OPTIMIZED_LAPACK_BLAS)
      message(STATUS "--> Searching for optimized LAPACK and BLAS libraries on your machine.")
      find_package(LAPACK)
   ENDIF(USE_OPTIMIZED_LAPACK_BLAS)
   if(NOT LAPACK_FOUND)
      message(STATUS "--> LAPACK and BLAS were not found. Reference LAPACK and BLAS will be downloaded and installed")
      include(ExternalProject)
      ExternalProject_Add(
        lapack
        URL http://www.netlib.org/lapack/lapack.tgz
        CMAKE_ARGS -DCMAKE_INSTALL_PREFIX:PATH=${SCALAPACK_BINARY_DIR}
        PREFIX ${SCALAPACK_BINARY_DIR}/dependencies
      )
      if (UNIX)
         SET(LAPACK_LIBRARIES ${SCALAPACK_BINARY_DIR}/lib/liblapack.a CACHE STRING "LAPACK library" FORCE)
         SET(BLAS_LIBRARIES ${SCALAPACK_BINARY_DIR}/lib/libblas.a CACHE STRING "BLAS library" FORCE)
      else (UNIX) # On Windows
         SET(LAPACK_LIBRARIES ${SCALAPACK_BINARY_DIR}/lib/liblapack.lib CACHE STRING "LAPACK library" FORCE)
         SET(BLAS_LIBRARIES ${SCALAPACK_BINARY_DIR}/lib/libblas.lib CACHE STRING "BLAS library" FORCE)
      endif (UNIX)
   ENDIF()
ENDIF()

message(STATUS "BLAS library: ${BLAS_LIBRARIES}")
message(STATUS "LAPACK library: ${LAPACK_LIBRARIES}")

MESSAGE(STATUS "=========")

#
# AOCL_DTL
#
add_subdirectory(AOCL_DTL)
append_subdir_files(dtl "AOCL_DTL")

#
# FRAMEWORK
#
add_subdirectory(FRAMEWORK)
append_subdir_files(framework "FRAMEWORK")
append_subdir_files(framework-C "FRAMEWORK")

#
# TOOLS
#
add_subdirectory(TOOLS)
append_subdir_files(tools TOOLS)
append_subdir_files(tools-C TOOLS)
append_subdir_files(extra_lapack "TOOLS/LAPACK")

#
# PBLAS
#
add_subdirectory(PBLAS)
append_subdir_files(pblas "PBLAS/SRC")
append_subdir_files(pblas-F "PBLAS/SRC")
append_subdir_files(pbblas "PBLAS/SRC/PBBLAS")
append_subdir_files(ptzblas "PBLAS/SRC/PTZBLAS")
append_subdir_files(ptools "PBLAS/SRC/PTOOLS")

#
# REDIST
#
add_subdirectory(REDIST)
append_subdir_files(redist "REDIST/SRC")

#
# SRC
#
add_subdirectory(SRC)
append_subdir_files(src "SRC")
append_subdir_files(src-C "SRC")

#compiler conforms to ISO Standard C
if (WIN32)
  add_definitions(-D__STDC__)
endif ()

if(WIN32 AND BUILD_SHARED_LIBS)
  set (CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif ()

# Option to choose whether to compile the source code and the test framework. By default both are ON.
option(SCALAPACK_BUILD_SOURCE "Build all source of the ScaLAPACK library" ON)
option(SCALAPACK_BUILD_TESTS "Build all tests of the ScaLAPACK library" ON)

if(SCALAPACK_BUILD_SOURCE STREQUAL "OFF" AND SCALAPACK_BUILD_TESTS STREQUAL "ON")
  if(NOT SCALAPACK_LIBRARY_PATH)
    message (FATAL_ERROR "Please provide SCALAPACK_LIBRARY_PATH")
  endif()
endif()

# If user want to build ScaLAPACK source code, unset precompiled SCALAPACK_LIBRARY_PATH variable
if(SCALAPACK_BUILD_SOURCE STREQUAL "ON")
  if(SCALAPACK_LIBRARY_PATH)
    UNSET(SCALAPACK_LIBRARY_PATH CACHE)
  endif()
endif()

if (UNIX)
  if(CUSTOM_BLACS_FOUND)
    add_library(scalapack ${dtl} ${framework} ${framework-C} ${tools} ${tools-C} ${extra_lapack} ${pblas} ${pblas-F} ${ptzblas} ${ptools} ${pbblas} ${redist} ${src} ${src-C})
    custom_macros_for_each_scalapack_source (scalapack)
    target_link_libraries( scalapack ${BLACS_LIBRARY} ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES})
    scalapack_install_library(scalapack)
  else(CUSTOM_BLACS_FOUND)
    if(SCALAPACK_BUILD_SOURCE)
      add_library(scalapack ${dtl} ${framework} ${framework-C} ${blacs} ${tools} ${tools-C} ${extra_lapack} ${pblas} ${pblas-F} ${ptzblas} ${ptools} ${pbblas} ${redist} ${src} ${src-C})
      custom_macros_for_each_scalapack_source (scalapack)
      target_link_libraries( scalapack ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES})
      scalapack_install_library(scalapack)
    else()
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
    endif()
  endif(CUSTOM_BLACS_FOUND)
  
  #Add C-specific compile options to remove absolute path 
  target_compile_options(scalapack PRIVATE  
    $<$<COMPILE_LANGUAGE:C>:-fPIC>  
    $<$<COMPILE_LANGUAGE:C>:-fmacro-prefix-map=${SCALAPACK_SOURCE_DIR}/=>  
  ) 

  if(ENABLE_COVERAGE)
    target_compile_options(scalapack PUBLIC -fprofile-arcs  -ftest-coverage)
    target_link_options(scalapack PUBLIC -fprofile-arcs  -ftest-coverage)
  endif(ENABLE_COVERAGE)
else (UNIX) # Need to separate Fortran and C Code
    if (CMAKE_C_COMPILER_ID MATCHES MSVC)
        # create Fortran objects and add to scalapack library first
      if(CUSTOM_BLACS_FOUND)
        add_library(scalapack-F OBJECT  ${pblas-F} ${pbblas} ${ptzblas} ${tools} ${framework} ${src} ${extra_lapack} )
        add_library(scalapack $<TARGET_OBJECTS:scalapack-F> ${tools-C} ${dtl} ${framework-C} ${pblas} ${ptools} ${redist} ${src-C})
        target_link_libraries( scalapack ${BLACS_LIBRARY} ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
        target_link_directories( scalapack PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
        scalapack_install_library(scalapack)
      else(CUSTOM_BLACS_FOUND)
        if(SCALAPACK_BUILD_SOURCE)
          add_library(scalapack-F OBJECT  ${pblas-F} ${pbblas} ${ptzblas} ${tools} ${framework} ${src} ${extra_lapack} )
          add_library(scalapack $<TARGET_OBJECTS:scalapack-F> ${blacs} ${tools-C}  ${dtl} ${framework-C} ${pblas} ${ptools} ${redist} ${src-C})
          target_link_libraries( scalapack ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
          target_link_directories( scalapack PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
          scalapack_install_library(scalapack)
        else()
          if(BUILD_SHARED_LIBS)
            add_library(scalapack SHARED IMPORTED)
            set_target_properties(scalapack PROPERTIES
            IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.dll"
            IMPORTED_IMPLIB "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
            )
            file(COPY ${SCALAPACK_LIBRARY_PATH}/scalapack.dll
            DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Testing/Release)
          else()
            add_library(scalapack STATIC IMPORTED)
            set_target_properties(scalapack PROPERTIES
            IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
            )
          endif()
          target_link_libraries( scalapack INTERFACE ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
        endif()
      endif(CUSTOM_BLACS_FOUND)
    else (CMAKE_C_COMPILER_ID MATCHES Clang)
        # create C objects and add to scalapack library first
      if(CUSTOM_BLACS_FOUND)
        add_library(scalapack-C OBJECT ${tools-C} ${dtl} ${framework-C} ${pblas} ${ptools} ${redist} ${src-C})
        target_link_libraries( scalapack-C ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
        target_link_directories( scalapack-C PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
        add_library(scalapack $<TARGET_OBJECTS:scalapack-C> ${pblas-F} ${pbblas} ${ptzblas} ${tools} ${dtl} ${framework} ${src} ${extra_lapack} )
        target_link_libraries( scalapack ${BLACS_LIBRARY} ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
        target_link_directories( scalapack PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
        scalapack_install_library(scalapack)
      else(CUSTOM_BLACS_FOUND)
        if(SCALAPACK_BUILD_SOURCE)
          add_library(scalapack-C OBJECT ${blacs} ${tools-C} ${dtl} ${framework-C} ${pblas} ${ptools} ${redist} ${src-C})
          target_link_libraries( scalapack-C ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
          target_link_directories( scalapack-C PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
          add_library(scalapack $<TARGET_OBJECTS:scalapack-C> ${pblas-F} ${pbblas} ${ptzblas} ${tools} ${framework} ${src} ${extra_lapack} )
          target_link_libraries( scalapack ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
          target_link_directories( scalapack PUBLIC ${CMAKE_IFORT_LIBDEPS_DIR})
          scalapack_install_library(scalapack)
        else()
          if(BUILD_SHARED_LIBS)
            add_library(scalapack SHARED IMPORTED)
            set_target_properties(scalapack PROPERTIES
            IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.dll"
            IMPORTED_IMPLIB "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
            )
            file(COPY ${SCALAPACK_LIBRARY_PATH}/scalapack.dll
            DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/Testing/Release)
          else()
            add_library(scalapack STATIC IMPORTED)
            set_target_properties(scalapack PROPERTIES
            IMPORTED_LOCATION "${SCALAPACK_LIBRARY_PATH}/scalapack.lib"
            )
          endif()
          target_link_libraries( scalapack INTERFACE ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES} ${MPI_LIBRARY})
        endif()
      endif(CUSTOM_BLACS_FOUND)
    endif ()
endif (UNIX)

if(${SCALAPACK_BUILD_TESTS})
  add_subdirectory(TESTING)
endif()
# --------------------------------------------------
# CPACK Packaging

SET(CPACK_PACKAGE_NAME "ScaLAPACK")
SET(CPACK_PACKAGE_VENDOR "University of Tennessee, Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "ScaLAPACK- Linear Algebra Package")
set(SCALAPACK_VERSION 2.2.0)
set(CPACK_PACKAGE_VERSION_MAJOR 2)
set(CPACK_PACKAGE_VERSION_MINOR 2)
set(CPACK_PACKAGE_VERSION_PATCH 0)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "SCALAPACK")
IF(WIN32 AND NOT UNIX)
  # There is a bug in NSI that does not handle full unix paths properly. Make
  # sure there is at least one set of four (4) backlasshes.
  SET(CPACK_NSIS_HELP_LINK "http:\\\\\\\\http://icl.cs.utk.edu/lapack-forum")
  SET(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\\\\\www.netlib.org/scalapack")
  SET(CPACK_NSIS_CONTACT "scalapack@eecs.utk.edu")
  SET(CPACK_NSIS_MODIFY_PATH ON)
  SET(CPACK_NSIS_DISPLAY_NAME "SCALAPACK-${SCALAPACK_VERSION}")
  set(CPACK_PACKAGE_RELOCATABLE "true")
ELSE(WIN32 AND NOT UNIX)
  SET(CPACK_GENERATOR "TGZ")
  SET(CPACK_SOURCE_GENERATOR TGZ)
  SET(CPACK_SOURCE_PACKAGE_FILE_NAME "scalapack-${SCALAPACK_VERSION}" )
  SET(CPACK_SOURCE_IGNORE_FILES ~$ .svn ${CPACK_SOURCE_IGNORE_FILES} )
ENDIF(WIN32 AND NOT UNIX)
INCLUDE(CPack)


# --------------------------------------------------

if(SCALAPACK_BUILD_SOURCE)
export(TARGETS scalapack FILE scalapack-targets.cmake)
endif()

if( NOT LAPACK_FOUND )
 install(FILES
  ${BLAS_LIBRARIES} ${LAPACK_LIBRARIES}
  DESTINATION lib
   )
endif( NOT LAPACK_FOUND )

configure_file(${SCALAPACK_SOURCE_DIR}/CMAKE/scalapack-config-version.cmake.in
  ${SCALAPACK_BINARY_DIR}/scalapack-config-version.cmake @ONLY)
configure_file(${SCALAPACK_SOURCE_DIR}/CMAKE/scalapack-config-build.cmake.in
  ${SCALAPACK_BINARY_DIR}/scalapack-config.cmake @ONLY)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/scalapack.pc.in ${CMAKE_CURRENT_BINARY_DIR}/scalapack.pc)
 install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/scalapack.pc
  DESTINATION ${PKG_CONFIG_DIR}
   )

configure_file(${SCALAPACK_SOURCE_DIR}/CMAKE/scalapack-config-install.cmake.in
  ${SCALAPACK_BINARY_DIR}/CMakeFiles/scalapack-config.cmake @ONLY)
install(FILES
  ${SCALAPACK_BINARY_DIR}/CMakeFiles/scalapack-config.cmake
  ${SCALAPACK_BINARY_DIR}/scalapack-config-version.cmake
  DESTINATION lib/cmake/scalapack-${SCALAPACK_VERSION}
  )

 if(SCALAPACK_BUILD_SOURCE)
 install(EXPORT scalapack-targets
   DESTINATION lib/cmake/scalapack-${SCALAPACK_VERSION})
 endif()
file(COPY scalapack_test.sh DESTINATION ${SCALAPACK_BINARY_DIR})
