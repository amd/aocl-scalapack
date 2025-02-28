/* ---------------------------------------------------------------------
*
*     Copyright (c) 2020-21 Advanced Micro Devices, Inc.  All rights reserved.
*     June 20, 2020
*
*  ---------------------------------------------------------------------
*/
/*
*  Include files
*/
#include "Bdef.h"

Int AOCLI_IdringSR(BLACSCONTEXT *ctxt, AOCLPBUFF *pb, Int step)
/*
 *  Purpose
 *  =======
 *  Send/Receive for user defined type using Increasing/Decreasing
 *  ring topology.
 *
 *  Arguments
 *  =========
 *
 *  Ctxt    (input) Ptr to Int
 *          Index Into MyConTxts00 (my contexts array).
 *
 *  pb      (input) Ptr to AOCLPBUFF struct
 *          Description of data to be communicated.
 *
 *  step    (input) Int
 *          Direction of broadcast ring.
 *          = 1 :  Message received from previous process, sent to next
 *          =-1 :  Message received from next process, sent to previous
 *
 * ------------------------------------------------------------------------
 */
{
   Int Np, Iam, msgid;
   Int next, prev, root; 

   MPI_Comm comm;
   Int ierr, m_in, rval;
   rval = AOCL_SUCCESS;

   Np = ctxt->scp->Np;
   if (Np < 2) return rval;

   Iam   = ctxt->scp->Iam;
   msgid = pb->msgid;
   root  = pb->root;

   prev = (Np+Iam-step)%Np;
   next = (Np+Iam+step)%Np;

   comm = ctxt->scp->comm;

   if(Iam == root)
   {
      /* Message originator */
      ierr = MPI_Send(pb->Buff, pb->count, *(pb->dtype), next, msgid, comm);
   }
   else
   {
      /* Check for message arrival */
      ierr = MPI_Iprobe(prev, msgid, comm, &m_in, pb->status);

      if(ierr == MPI_SUCCESS)
      {
         if(m_in != 0)
         {
            /* Receive the message that has arrived */
            ierr = MPI_Recv(pb->Buff, pb->count, *(pb->dtype), prev, msgid,
                            comm, pb->status);

            /* Send the message to next node */
            if(next != root && ierr == MPI_SUCCESS)
               ierr = MPI_Send(pb->Buff, pb->count, *(pb->dtype), next,
                               msgid, comm);
         }
         else
         {
            /* Message has not arrived, keep checking */
            rval = AOCL_KEEP_POLLING;
         }
      }
   }

   if(ierr != MPI_SUCCESS)
     rval = AOCL_FAILURE;

   return rval;
}

