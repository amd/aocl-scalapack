

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
#include <string.h>
#include "pxsyevx.h"

#ifdef __STDC__
void get_aocl_scalapack_version_( char * version )
#else
void get_aocl_scalapack_version_( version )
   char * version;
#endif
{
/*
* version = "AOCL-ScaLAPACK 3.2, Supports Netlib ScaLAPACK 2.1.0"
*/
	strcpy(version, "AOCL-ScaLAPACK 3.2, supports ScaLAPACK 2.1.0");

  return;
}

