#include <stdio.h>
#include <conio.h>
int kumaran=1;
void main()
{
while(kumaran)
{
logesh:
clrscr();
   printf("kumaran's current status \n");
   scanf("%d%",&kumaran);
   if(kumaran==0)
   {
      printf("kumaran is sitting \n");
      //kumaran=1;
      getch();
      //continue;
      goto logesh;
   }
   else  if(kumaran==1)
   {
   printf("kumaran is standing \n");
   //getch();
   //break;
   }
   else
   {
   printf("kumaran is sleeping \n");
   }
   getch();
   }
   }
