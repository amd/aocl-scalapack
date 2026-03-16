#include "Bdef.h"

void BI_BlacsWarn(Int ConTxt, Int line, char *file, char *form, ...)
{
   extern Int BI_Iam;
   extern BLACSCONTEXT **BI_MyContxts;
   Int myrow, mycol;
   va_list argptr;
   char cline[100];

   va_start(argptr, form);
   vsprintf(cline, form, argptr);
   va_end(argptr);

   if (ConTxt > -1)
   {
      myrow = BI_MyContxts[ConTxt]->cscp.Iam;
      mycol = BI_MyContxts[ConTxt]->rscp.Iam;
   }
   else myrow = mycol = -1;

   fprintf(stderr,
"BLACS WARNING '%s'\nfrom {%ld,%ld}, pnum=%ld, Contxt=%ld, on line %ld of file '%s'.\n\n",
           cline, (long)myrow, (long)mycol, (long)BI_Iam,
           (long)ConTxt, (long)line, file);
}
