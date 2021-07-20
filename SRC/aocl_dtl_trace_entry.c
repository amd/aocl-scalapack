

/* ---------------------------------------------------------------------
*
*  -- AOCL ScaLAPACK routine --
*     Copyright (c) 2020-2021 Advanced Micro Devices, Inc.  All rights reserved.
*
*  ---------------------------------------------------------------------
*/

/*
 * Include Files
 */
#include <stdio.h>
#include <string.h>
#include "../AOCL_DTL/SRC/aocldtl.h"
#include "pxsyevx.h"

#ifdef __STDC__
void aocl_dtl_trace_entry_( const char * fileName, unsigned int * lineNumber,
                            const char * message )
#else
void aocl_dtl_trace_entry_( fileName, lineNumber, message )
  const char   * fileName;
  unsigned int * lineNumber;
  const char   * message;
#endif
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


