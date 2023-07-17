/* ---------------------------------------------------------------------
*
*  -- AOCL ScaLAPACK routine --
*     Copyright (c) 2020-2023 Advanced Micro Devices, Inc.  All rights reserved.
*
*  ---------------------------------------------------------------------
*/

/*
 * Include Files
 */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "../AOCL_DTL/aocldtl.h"
#include "pxsyevx.h"


/* Customized for Fortran calls from Scalapack code */
void aocl_sl_dtl_log_entry_( const char *filename, const char *function_name,
                             unsigned int *line_number, const char *buffer )
{
  DTL_Trace(AOCL_DTL_LEVEL_INFO,
              TRACE_TYPE_LOG,
              filename,
              function_name,
              *line_number,
              buffer);
}

/**
    Wrapper functions for 'aocl_sl_dtl_log_entry_' function
    to enable Fortran to C calls.
**/
void aocl_sl_dtl_log_entry( const char *filename, const char *function_name,
                             unsigned int *line_number, const char *buffer )
{
    aocl_sl_dtl_log_entry_(filename, function_name, line_number, buffer);
}

void AOCL_SL_DTL_LOG_ENTRY( const char *filename, const char *function_name,
                             unsigned int *line_number, const char *buffer )
{
    aocl_sl_dtl_log_entry_(filename, function_name, line_number, buffer);
}

void AOCL_SL_DTL_LOG_ENTRY_( const char *filename, const char *function_name,
                             unsigned int *line_number, const char *buffer )
{
    aocl_sl_dtl_log_entry_(filename, function_name, line_number, buffer);
}

void aocl_sl_dtl_trace_entry_( const char * fileName, unsigned int * lineNumber,
                            const char * message )
{
#if AOCL_DTL_TRACE_ENABLE
  char * funcName = NULL;
  Int    i, fnlen, cval;

  fnlen = strlen( fileName );
  funcName = (char *) malloc( fnlen );

  if( funcName != NULL)
  {
    strncpy( funcName, fileName, fnlen );

    funcName[ fnlen - 2 ] = '\0';

    i = 0;
    while( funcName[ i ] != '\0' )
    {
      cval = (Int) funcName[ i ];
      if( cval >= 'a'  && cval <= 'z' )
      {
        cval -= 32;
      }

      funcName[ i ] = cval;
      i++;
    }

    DTL_Trace( AOCL_DTL_TRACE_LEVEL, TRACE_TYPE_FENTRY, fileName, funcName,
               *lineNumber, NULL );

    free( funcName );
  }
  else
  {
    DTL_Trace( AOCL_DTL_TRACE_LEVEL, TRACE_TYPE_FENTRY, fileName, fileName,
               *lineNumber, NULL );
  }
#endif
  return;
}

/**
    Wrapper functions for 'aocl_sl_dtl_trace_entry_' function
    to enable Fortran to C calls.
**/

void aocl_sl_dtl_trace_entry( const char * fileName, unsigned int * lineNumber,
                            const char * message )
{
   aocl_sl_dtl_trace_entry_( fileName, lineNumber, message );
}

void AOCL_SL_DTL_TRACE_ENTRY( const char * fileName, unsigned int * lineNumber,
                            const char * message )
{
   aocl_sl_dtl_trace_entry_( fileName, lineNumber, message );
}

void AOCL_SL_DTL_TRACE_ENTRY_( const char * fileName, unsigned int * lineNumber,
                            const char * message )
{
   aocl_sl_dtl_trace_entry_( fileName, lineNumber, message );
}

