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

#include <stdlib.h>
#include <stdio.h>
#include "../BLACS/SRC/Bdef.h"

#ifndef Int
#define Int int
#endif

Int SL_Cgridreshape(Int ctxt, Int pstart, Int row_major_in, Int row_major_out, Int P, Int Q)
{
   void Cblacs_gridinfo( Int context, Int* nprow, Int* npcol, Int* myrow, Int* mycol );
   void Cblacs_abort( Int ConTxt, Int ErrNo );
   void Cblacs_get( Int context, Int what, Int * val );
   void Cblacs_gridmap( Int* context, Int* usermap, Int ldumap, Int nprow, Int npcol );
   Int Cblacs_pnum( Int context, Int prow, Int pcol );
   Int nctxt, P0, Q0, Np, i, *g;

   Cblacs_gridinfo(ctxt, &P0, &Q0, &i, &Np);
   Np = P * Q;
   if (Np+pstart > P0*Q0)
   {
      fprintf(stderr, "Illegal reshape command in %s\n",__FILE__);
      Cblacs_abort(ctxt, -22);
   }
   g = (Int *) malloc(Np * sizeof(Int));
   if (!g)
   {
      fprintf(stderr, "Cannot allocate memory in %s\n",__FILE__);
      Cblacs_abort(ctxt, -23);
   }
   if (row_major_in)  /* Read in in row-major order */
   {
      if (row_major_out)
	 for (i=0; i != Np; i++)
            g[(i%Q)*P+i/Q] = Cblacs_pnum(ctxt, (pstart+i)/Q0, (pstart+i)%Q0);
      else
	 for (i=0; i != Np; i++)
            g[i] = Cblacs_pnum(ctxt, (pstart+i)/Q0, (pstart+i)%Q0);
   }
   else /* read in in column-major order */
   {
      if (row_major_out)
	 for (i=0; i != Np; i++)
            g[(i%Q)*P+i/Q] = Cblacs_pnum(ctxt, (pstart+i)%P0, (pstart+i)/P0);
      else
	 for (i=0; i != Np; i++)
            g[i] = Cblacs_pnum(ctxt, (pstart+i)%P0, (pstart+i)/P0);
   }
   Cblacs_get(ctxt, 10, &nctxt);
   Cblacs_gridmap(&nctxt, g, P, P, Q);
   free(g);

   return(nctxt);
}

Int sl_gridreshape_(Int *ctxt, Int *pstart, Int *row_major_in, Int *row_major_out, Int *P, Int *Q)
{
   return( SL_Cgridreshape(*ctxt, *pstart, *row_major_in, *row_major_out,
                           *P, *Q) );
}

Int SL_GRIDRESHAPE(Int *ctxt, Int *pstart, Int *row_major_in, Int *row_major_out, Int *P, Int *Q)
{
   return( SL_Cgridreshape(*ctxt, *pstart, *row_major_in, *row_major_out,
                           *P, *Q) );
}

Int sl_gridreshape__(Int *ctxt, Int *pstart, Int *row_major_in, Int *row_major_out, Int *P, Int *Q)
{
   return( SL_Cgridreshape(*ctxt, *pstart, *row_major_in, *row_major_out,
                           *P, *Q) );
}

Int sl_gridreshape(Int *ctxt, Int *pstart, Int *row_major_in, Int *row_major_out, Int *P, Int *Q)
{
   return( SL_Cgridreshape(*ctxt, *pstart, *row_major_in, *row_major_out,
                           *P, *Q) );
}

Int SL_GRIDRESHAPE_(Int *ctxt, Int *pstart, Int *row_major_in, Int *row_major_out, Int *P, Int *Q)
{
   return( SL_Cgridreshape(*ctxt, *pstart, *row_major_in, *row_major_out,
                           *P, *Q) );
}
