/* ************************************************************************
 * Copyright (c) 2026 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * ************************************************************************ */

#include "tools.h"

char * getpbbuf( char *mess, Int length )
{
/*
*  Purpose
*  =======
*
*  getpbbuf returns a pointer to a working buffer of size length alloca-
*  ted for the PBLAS routines.
*
* ======================================================================
*
*  .. Local Scalars ..
*/
   static char * pblasbuf = NULL;
   static Int  pbbuflen = 0, mone = -1;
/* ..
*  .. External Functions ..
*/
   void        blacs_abort_( Int *ictxt, Int *errornum );
/* ..
*  .. Executable Statements ..
*/
   if( length >= 0 )
   {
      if( length > pbbuflen )
      {
         if( pblasbuf )
            free( pblasbuf );
         pblasbuf = (char *) malloc((unsigned)length);
         if( !pblasbuf )
         {
            fprintf( stderr,
                     "PBLAS %s ERROR: Memory allocation failed\n",
                     mess );
            blacs_abort_( &mone, &mone );
         }
         pbbuflen = length;
      }
   }
   else if( pblasbuf )
   {
      free( pblasbuf );
      pblasbuf = NULL;
      pbbuflen = 0;
   }
   return( pblasbuf );
}
