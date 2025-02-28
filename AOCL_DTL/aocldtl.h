/*===================================================================
 * File Name :  aocldtl.h
 * 
 * Description : This is main interface file for the end user
 *               It provides defination for all macros to be 
 *               used by user to add debug/trace information.
 *
 * Copyright (C) 2020, Advanced Micro Devices, Inc
 * 
 *==================================================================*/

#ifndef _AOCLDTL_H_
#define _AOCLDTL_H_

#include "aocldtlcf.h"
#include "aocltpdef.h"
#include "aoclflist.h"

#define TRACE_TYPE_FENTRY           (1)
#define TRACE_TYPE_FEXIT            (2)
#define TRACE_TYPE_LOG              (3)
#define TRACE_TYPE_RAW              (4)

/* Type definition for printf */
#define AOCL_DEBUGPRINT printf

/* Customization for scalapack */
#if AOCL_DTL_LOG_ENABLE
	#define BUFF_SIZE 256
	#define BUFFER buffer
	/*Variable Argument macro for snprintf*/
	#define AOCL_DTL_SNPRINTF(...) snprintf(BUFFER,BUFF_SIZE,__VA_ARGS__)

#else
	#define AOCL_DTL_SNPRINTF(...)

#endif


/* Define the AOCL_DTL_INITIALIZE_ENABLE if any of the debug macro
 * are defined */
#if (AOCL_DTL_TRACE_ENABLE || AOCL_DTL_DUMP_ENABLE || AOCL_DTL_LOG_ENABLE)
#define AOCL_DTL_INITIALIZE_ENABLE
#endif

#if AOCL_DTL_TRACE_ENABLE
/* Entry macro to trace the flow of control The parameter LogLevel specifies
      the log level String will preferably contains the function name in which
      this macro is invoked */
#define AOCL_DTL_TRACE_ENTRY(LogLevel) \
    DTL_Trace(LogLevel,                \
              TRACE_TYPE_FENTRY,       \
              __FILE__,                \
              __FUNCTION__,            \
              __LINE__,                \
              NULL);
#else
/* Dummy macro definition if the AOCL_DTL_TRACE_ENABLE macro is not enabled */
#define AOCL_DTL_TRACE_ENTRY(LogLevel)
#endif

#if AOCL_DTL_TRACE_ENABLE
/* Exit macro to trace the flow of control The parameter LogLevel specifies 
      log level String will preferably contains the function name in which this
      macro is invoked */
#define AOCL_DTL_TRACE_EXIT(LogLevel) \
    DTL_Trace(LogLevel,               \
              TRACE_TYPE_FEXIT,       \
              __FILE__,               \
              __FUNCTION__,           \
              __LINE__,               \
              NULL);

#define AOCL_DTL_TRACE_EXIT_ERR(LogLevel, Message) \
    DTL_Trace(LogLevel,                            \
              TRACE_TYPE_FEXIT,                    \
              __FILE__,                            \
              __FUNCTION__,                        \
              __LINE__,                            \
              Message);
#else
/* Dummy macro definition if the AOCL_DTL_TRACE_ENABLE macro is not enabled */
#define AOCL_DTL_TRACE_EXIT(LogLevel)
#define AOCL_DTL_TRACE_EXIT_ERR(LogLevel, Message)
#endif

#if AOCL_DTL_DUMP_ENABLE
/* Macro to Dump the DATA The parameters  Buffer contains the data to be 
      dumped BufferSize specifies the no. of bytes to be dumped DataType 
      specifies the data type of Buffer */
#define AOCL_DTL_DUMP(LogLevel, Buffer, BufferSize, DataType, String, OutputType) \
    /* Call the Dump function to Dump the DATA */                                 \
    DTL_DumpData(LogLevel,                                                        \
                 Buffer,                                                          \
                 BufferSize,                                                      \
                 DataType,                                                        \
                 String,                                                          \
                 OutputType);
#else
/* Dummy macro definition if the AOCL_DTL_DUMP_ENABLE macro is not enabled */
#define AOCL_DTL_DUMP(Buffer, BufferSize, DataType, String, OutputType)

#endif

#if AOCL_DTL_LOG_ENABLE
/* Macro to log the Data */
#define AOCL_DTL_LOG(LogLevel, Message) \
    DTL_Trace(LogLevel,                 \
              TRACE_TYPE_LOG,           \
              __FILE__,                 \
              __FUNCTION__,             \
              __LINE__,                 \
              Message);
#else
/* Dummy macro definition if the AOCL_DTL_LOG_ENABLE macro is not enabled */
#define AOCL_DTL_LOG(LogLevel, Message)
#endif

/* Macro to initialize the prerequisite for debuging */
#ifdef AOCL_DTL_INITIALIZE_ENABLE
#define AOCL_DTL_INITIALIZE(CURRENT_LOG_LEVEL) \
    DTL_Initialize(CURRENT_LOG_LEVEL);
#else
/* Dummy macro definition if the AOCL_DTL_INITIALIZE macro is not enabled */
#define AOCL_DTL_INITIALIZE(CURRENT_LOG_LEVEL)
#endif

/* Macro for uninitializing the prerequisite */
#ifdef AOCL_DTL_INITIALIZE_ENABLE
#define AOCL_DTL_UNINITIALIZE() \
    DTL_Uninitialize();
#else
/* Dummy macro definition if the AOCL_DTL_INITIALIZE macro is not enabled */
#define AOCL_DTL_UNINITIALIZE()
#endif

#ifdef AOCL_DTL_INITIALIZE_ENABLE
/* Prototypes for initializing and uninitializing the debug functions */
void DTL_Initialize(
    uint32 ui32CurrentLogLevel);
void DTL_Uninitialize(void);
#endif

#if (AOCL_DTL_TRACE_ENABLE || AOCL_DTL_LOG_ENABLE)
/* Debug trace Function protoypes */
void DTL_Trace(
    uint8 ui8LogLevel,
    uint8 ui8LogType,
    const int8 *pi8FileName,
    const int8 *pi8FunctionName,
    uint32 ui32LineNumber,
    const int8 *pi8Message);

#endif

#if AOCL_DTL_DUMP_ENABLE
/* Function Prototype for dumping the data */
void DTL_DumpData(
    uint8 ui8LogLevel,
    void *pvBuffer,
    uint32 ui32BufferSize,
    uint8 ui8DataType,
    int8 *pi8Message,
    int8 i8OutputType);
#endif

#endif /* _AOCLDTL_H_ */

/* --------------- End of aocldtl.h ----------------- */
