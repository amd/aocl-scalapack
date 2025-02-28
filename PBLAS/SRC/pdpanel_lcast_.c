/* ---------------------------------------------------------------------
*
*  -- PBLAS routine --
*     Copyright (c) 2020-21 Advanced Micro Devices, Inc.  All rights reserved.
*     August 12, 2020
*
*  ---------------------------------------------------------------------
*/
/*
*  Include files
*/
#include "pblas.h"
#include "PBpblas.h"
#include "PBtools.h"
#include "PBblacs.h"
#include "PBblas.h"

/*
 * Row Panel U broadcast
 */
void pdpanel_lcast_( pd_panel * panel, Int *N )
{
   PBTYP_T *type;
   char    *bmem, *top;
   Int     coff, Xrow, Xcol, Xii, Xjj;
   Int     nprow, npcol, myrow, mycol;

   if(panel->nprow < 2)
      return;
/*
*  Get type structure
*/
   type = PB_Cdtypeset();
   top  = PB_Ctop( &panel->ictxt, BCAST, COLUMN, TOP_GET );

   if( panel->myrow == panel->iarow )
   {
      type->Cgebs2d( panel->ictxt, COLUMN, " " /*top*/,
                     *N, *N, (char *)panel->lmem, *N );
   }
   else
   {
      type->Cgebr2d( panel->ictxt, COLUMN, " " /*top*/,
                     *N, *N, (char *)panel->lmem, *N,
                     panel->iarow, panel->mycol );
   }
   return;
/*
*  End of pdpanel_ucast_
*/
}

