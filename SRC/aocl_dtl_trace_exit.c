

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


