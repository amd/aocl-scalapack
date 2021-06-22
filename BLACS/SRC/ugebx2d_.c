/* ---------------------------------------------------------------------
*
*     Copyright (c) 2020-21 Advanced Micro Devices, Inc.  All rights reserved.
*     June 10, 2020
*
*  ---------------------------------------------------------------------
*/
#include "Bdef.h"

#ifdef ENABLE_LOOK_AHEAD_FOR_LU

#if (INTFACE == C_CALL)
Int Cugebx2d(Int ConTxt, char *scope, char *top, Int msgid, char *A, Int count,
             Int rank, Int root, MPI_Datatype *dtype, MPI_Status *status)
#else
Int ugebx2d_(Int *ConTxt, F_CHAR *scope, F_CHAR *top, Int *msgid,
             char *A, Int *count, Int rank, Int root, MPI_Datatype *dtype,
             MPI_Status *status)
#endif
/*
 *  Purpose
 *  =======
 *  Broadcast(send/receive) for user defined datatypes.
 *
 *  Arguments
 *  =========
 *
 *  ConTxt  (input) Ptr to Int
 *          Index Into MyConTxts00 (my contexts array).
 *
 *  SCOPE   (input) Ptr to char
 *          Limit the scope of the operation.
 *          = 'R' :   Operation is performed by a process row.
 *          = 'C' :   Operation is performed by a process column.
 *          = 'A' :   Operation is performed by all processes in grid.
 *
 *  top     (input) Ptr to char
 *          Topology for broadcast.
 *
 *  msgid   (input) Int
 *          Send/Receive meassage ID.
 *
 *  A       (input/output) Ptr to char
 *          The packed data to be broadcasred.
 *
 *  count   (input) Int
 *          The number of element in the packed message.
 *
 *  rank    (input) Int
 *          Rank of the current process in selected communicator.
 *
 *  root    (input) Int
 *          Source of message.
 *
 * dtype    (input) Ptr to MPI_datatype
 *          Datatype of each entry in the packed buffer
 *
 * status   (output) Pt to MPI_Status
 *          Status object
 *
 * ------------------------------------------------------------------------
 */
{
   char ttop, tscope;
   Int ierr = AOCL_SUCCESS;
   AOCLPBUFF pb;
   BLACSCONTEXT *ctxt;
/*
 * get context, lowcase char variables, and perform parameter checking
 */
   MGetConTxt(Mpval(ConTxt), ctxt);
   ttop = F2C_CharTrans(top);
   ttop = Mlowcase(ttop);
   tscope = F2C_CharTrans(scope);
   tscope = Mlowcase(tscope);
#if (BlacsDebugLvl > 0)
   BI_ArgCheck(Mpval(ConTxt), RT_BS, __FILE__, 'a', 'u', 'u', Mpval(m),
               Mpval(n), Mpval(lda), 0, NULL, NULL);
#endif

   pb.Buff   = A;
   pb.count  = count;
   pb.root   = root;
   pb.rank   = rank;
   pb.msgid  = msgid;

   pb.dtype  = dtype;
   pb.status = status;

   /* Select appropriate communicator */
   switch(tscope)
   {
   case 'r':
      ctxt->scp = &ctxt->lscp;
      break;
   default:
      ierr = AOCL_FAILURE;
      BI_BlacsErr(Mpval(ConTxt), __LINE__, __FILE__, "Unknown scope '%c'",
                  tscope);
   }
 
   /* Select appropriate topology */
   switch(ttop)
   {
   case 'i':
      ierr = AOCLI_IdringSR(ctxt, &pb, 1);
      break;
   case 's':
      ierr = AOCLI_SringSR(ctxt, &pb, 1);
      break;
   default :
      ierr = AOCL_FAILURE;
      BI_BlacsErr(Mpval(ConTxt), __LINE__, __FILE__, "Unknown topology '%c'",
                  ttop);
   }

   return ierr;
}  /* end  ugebx2d_  */
#endif /* ENABLE_LOOK_AHEAD_FOR_LU */
