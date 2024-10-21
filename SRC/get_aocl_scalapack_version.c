/* ---------------------------------------------------------------------
*
*  -- AOCL ScaLAPACK routine --
*     Copyright (c) 2020-2025 Advanced Micro Devices, Inc.  All rights reserved.
*
*  ---------------------------------------------------------------------
*/

/*
 * Include Files
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pxsyevx.h"

#define VERSION_MAKE_STR(x) _VERSION_MAKE_STR(x)
#define _VERSION_MAKE_STR(x) #x

#ifdef __STDC__
void get_aocl_scalapack_version_( char * version )
#else
void get_aocl_scalapack_version_( version )
   char * version;
#endif
{


     char slmainversion[1000];
     char slversion[1000];
     char scalapackversion[] = ", supports ScaLAPACK 2.2.0";
     int length, i;

     char prefix[] = "AOCL-ScaLAPACK ";

     strcpy(slmainversion, prefix);
     length = 0;
     for (i = 0; i<strlen(slmainversion); ++i, ++length)
     {
	    slversion[length] = slmainversion[i];
     }

#ifdef AOCL_SCALAPACK_LINUX_VERSION
     char configslversion[] = AOCL_SCALAPACK_VERSION;
#else
     char configslversion[] = VERSION_MAKE_STR(AOCL_SCALAPACK_VERSION);
#endif
     for (i = 0; i<strlen(configslversion); ++i, ++length)
     {
	    slversion[length] = configslversion[i];
     }

     for (i = 0; i < strlen(scalapackversion); ++i, ++length)
     {
	    slversion[length] = scalapackversion[i];
     }

     slversion[length] = '\0';
     strcpy(version, slversion);

return;
}

/**
    Wrapper functions for 'get_aocl_scalapack_version_' function
    to enable Fortran to C calls.
**/
void get_aocl_scalapack_version( char * version )
{
	get_aocl_scalapack_version_( version );
}

void GET_AOCL_SCALAPACK_VERSION( char * version )
{
	get_aocl_scalapack_version_( version );
}

void GET_AOCL_SCALAPACK_VERSION_( char * version )
{
	get_aocl_scalapack_version_( version );
}

