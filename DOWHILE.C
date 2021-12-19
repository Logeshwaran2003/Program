#include <stdio.h>
#include <conio.h>
int ragul=0;
void main()
{
do
{
clrscr();
   logesh:
   printf("ragul's current status \n");
   scanf("%d%",&ragul);
   if(ragul==0)
   {
      printf("ragul is sitting \n");
      //ragul=1;
      //getch();
      //continue;
      goto logesh;
   }
   else  if(ragul==1)
   {
   printf("ragul is standing \n");
   //getch();
   //break;
   }
   else
   {
   printf("ragul is sleeping \n");
   }
   getch();
   }
   while(ragul);
}
