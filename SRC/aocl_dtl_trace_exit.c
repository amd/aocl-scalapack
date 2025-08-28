

/* ---------------------------------------------------------------------
*
*  -- AOCL ScaLAPACK routine --
*     Copyright (c) 2020-2022 Advanced Micro Devices, Inc.  All rights reserved.
*
*  ---------------------------------------------------------------------
*/

/*
 * Include Files
 */
#include <stdio.h>
#include <string.h>
#include "../AOCL_DTL/aocldtl.h"
#include "pxsyevx.h"

void aocl_sl_dtl_trace_exit_( const char * fileName, unsigned int * lineNumber,
                           const char * message )
{
#if AOCL_DTL_TRACE_ENABLE
  char * funcName = NULL;
  Int    i, fnlen, cval;

  fnlen = strlen( fileName );
  
  //Make sure a valid file fetch happened and the length was determined.
  if(fnlen < 2)
    return;
  funcName = (char *) malloc( fnlen + 1 );

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

    DTL_Trace( AOCL_DTL_TRACE_LEVEL, TRACE_TYPE_FEXIT, fileName, funcName,
               *lineNumber, NULL );

    free( funcName );
  }
  else
  {
    DTL_Trace( AOCL_DTL_TRACE_LEVEL, TRACE_TYPE_FEXIT, fileName, fileName,
               *lineNumber, NULL );
  }
#endif
  return;
}
/**
    Wrapper functions for 'aocl_sl_dtl_trace_exit_' function
    to enable Fortran to C calls.
**/
void aocl_sl_dtl_trace_exit( const char * fileName, unsigned int * lineNumber,
                           const char * message )
{
   aocl_sl_dtl_trace_exit_( fileName, lineNumber, message );
}

void AOCL_SL_DTL_TRACE_EXIT( const char * fileName, unsigned int * lineNumber,
                           const char * message )
{
   aocl_sl_dtl_trace_exit_( fileName, lineNumber, message );
}

void AOCL_SL_DTL_TRACE_EXIT_( const char * fileName, unsigned int * lineNumber,
                           const char * message )
{
   aocl_sl_dtl_trace_exit_( fileName, lineNumber, message );
}
