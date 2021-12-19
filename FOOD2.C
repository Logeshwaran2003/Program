#include<stdio.h>
#include<conio.h>
void main()
{
   int tpoori,tpoori2,kumaran,lokeshbabu,sharuk;
   int keat,leat,seat;
   clrscr();
   printf("Total Poori are:\n");
   scanf("%d",&tpoori);
   printf("\nenter kumaran's poori percentage:\n");
   scanf("%d",&kumaran);
   printf("\nenter lokeshbabu's poori percentage:\n");
   scanf("%d",&lokeshbabu);
   keat=tpoori* kumaran/100;
   leat=tpoori* lokeshbabu/100;
   tpoori2=tpoori-keat-leat;
   printf("kumaran's poori:%d\n",keat);
   printf("lokeshbabu's poori:%d\n",leat);
   printf("balanced poori after kunaran and lokeshbabu ate:%d\n",tpoori2);
   printf("\nenter sharuk's poori percentage:\n");
   scanf("%d",&sharuk);
   seat=tpoori* sharuk/100;
   tpoori=tpoori-keat;
   printf("sharuk's poori:%d\n",seat);
   printf("totalbalance after three members ate: %d\n",tpoori);
   getch();
   }
