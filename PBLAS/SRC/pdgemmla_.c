/* ---------------------------------------------------------------------
*
*  -- PBLAS routine --
*     Copyright (c) 2020-21 Advanced Micro Devices, Inc.  All rights reserved.
*     June 10, 2020
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

#ifdef __STDC__
void pdgemmla_( F_CHAR_T TRANSA, F_CHAR_T TRANSB,
                Int * M, Int * N, Int * K,
                double * ALPHA, double * BETA,
                pd_panel * PANEL )
#else
void pdgemmla_( TRANSA, TRANSB, M, N, K, ALPHA,
                BETA, PANEL )
/*
*  .. Scalar Arguments ..
*/
   F_CHAR_T       TRANSA, TRANSB;
   Int            * K, * M, * N;
   double         * ALPHA, * BETA;
   pd_panel       * PANEL
#endif
{
/*
*  Purpose
*  =======
*
*  PDGEMM  performs one of the matrix-matrix operations
*
*     C := alpha*op( A )*op( B ) + beta*C,
*
*  where
*
*     op( X )  is one  of op( X ) = X   or   op( X ) = X'.
*
*  Alpha and beta are scalars.  A, B and C are matrices;  op( A )
*  is an  m by k submatrix,  op( B )  is an  k by n submatrix and
*  C is an m by n submatrix.
*
*  Note
*  ====
*
*  This function is part of panel lookahead implementation where a panel
*  data structure contains information about input and  ouptput matrices
*  including the matrix memory locations.
*
*  Arguments
*  =========
*
*  TRANSA  (global input) CHARACTER*1
*          On entry,  TRANSA  specifies the form of op( A ) to be
*          used in the matrix multiplication as follows:
*
*             TRANSA = 'N' or 'n'   op( A ) = A,
*
*             TRANSA = 'T' or 't'   op( A ) = A',
*
*             TRANSA = 'C' or 'c'   op( A ) = A'.
*
*  TRANSB  (global input) CHARACTER*1
*          On entry,  TRANSB  specifies the form of op( B ) to be
*          used in the matrix multiplication as follows:
*
*             TRANSB = 'N' or 'n'   op( B ) = B,
*
*             TRANSB = 'T' or 't'   op( B ) = B',
*
*             TRANSB = 'C' or 'c'   op( B ) = B'.
*
*  M       (global input) INTEGER
*          On entry,  M  specifies  the number of rows of the  submatrix
*          op( A ) and of the submatrix C. M  must  be  at
*          least  zero.
*
*  N       (global input) INTEGER
*          On entry, N specifies the number of columns of the  submatrix
*          op( B )  and  the  number of columns of the  submatrix
*          C. N must be at least zero.
*
*  K       (global input) INTEGER
*          On entry, K specifies the number of columns of the  submatrix
*          op( A )  and  the  number of rows   of  the  submatrix
*          op( B ). K must be at least  zero.
*
*  ALPHA   (global input) DOUBLE PRECISION
*          On entry, ALPHA specifies the scalar alpha.   When  ALPHA  is
*          supplied  as zero then the local entries of the arrays  A and
*          B corresponding to the entries of  the  submatrices  A
*          and B respectively need not be set on input.
*
*  BETA    (global input) DOUBLE PRECISION
*          On entry,  BETA  specifies the scalar  beta.   When  BETA  is
*          supplied  as  zero  then  the  local entries of  the array  C
*          corresponding to  the  entries of the submatrix C need
*          not be set on input.
*
*  PANEL   (local input) poInter to pd_panel struct
*          The PANEL structure contains poInters to i/o matrices,  their
*          sizes &  other parameters related to lookahead implementation
*
*  ---------------------------------------------------------------------
*/
#ifdef AOCL_DTL_ADVANCED_TRACE_ENABLE
      CALL AOCL_DTL_TRACE_ENTRY(__FILE__, __LINE__, ' ')
#endif
   PBTYP_T  * type;
   char     * Aptr, * Bptr, * Cptr;
   Int        ln;
/*
*  Get type structure
*/
   type = PB_Cdtypeset();

   ln = MIN(*N, PANEL->LN);
   Bptr = Mptr( ( ( char * ) PANEL->umem ), 0,
                PANEL->uoff, PANEL->ldu, type->size );
   Cptr = Mptr( ( ( char * ) PANEL->amem ), PANEL->Xii + PANEL->TM,
                PANEL->Xjj, PANEL->lda, type->size );
   if( PANEL->brows > 0 )
      type->Fgemm( TRANSA, TRANSB, &PANEL->brows, &ln, &PANEL->JB,
                   (char *)ALPHA, (char *)PANEL->pmem, &PANEL->ldm, Bptr, &PANEL->ldu,
                   (char *)BETA,  Cptr, &PANEL->lda );
   return;
/*
*  End of PDGEMMLA
*/
#ifdef AOCL_DTL_ADVANCED_TRACE_ENABLE
      CALL AOCL_DTL_TRACE_EXIT(__FILE__, __LINE__, ' ')
#endif
}
