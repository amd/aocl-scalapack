#include "Bdef.h"

void BI_BlacsErr(Int ConTxt, Int line, char *file, char *form, ...)
{
#ifdef __STDC__
   void BI_BlacsAbort(Int ErrNo);
#else
   void BI_BlacsAbort();
#endif
   extern Int BI_Iam;
   Int myrow, mycol;
   va_list argptr;
   char cline[100];
   BLACSCONTEXT *ctxt;

   va_start(argptr, form);
   vsprintf(cline, form, argptr);
   va_end(argptr);

   if (ConTxt > -1)
   {
      MGetConTxt(ConTxt, ctxt);
      myrow = ctxt->cscp.Iam;
      mycol = ctxt->rscp.Iam;
   }
   else myrow = mycol = -1;

   fprintf(stderr,
"BLACS ERROR '%s'\nfrom {%ld,%ld}, pnum=%ld, Contxt=%ld, on line %ld of file '%s'.\n\n",
           cline, (long)myrow, (long)mycol, (long)BI_Iam,
           (long)ConTxt, (long)line, file);

   BI_BlacsAbort(1);
}
