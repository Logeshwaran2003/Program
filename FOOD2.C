#include<stdio.h>
#include<conio.h>
void main()
{
   int tpoori,tpoori2,kumaran,lokeshbabu,sharuk;
   int reat,seat,keat;
   clrscr();
   printf("Total Poori are:\n");
   scanf("%d",&tpoori);
   printf("\nenter kumaran's poori percentage:\n");
   scanf("%d",&kumaran);
   printf("\nenter lokeshbabu's poori percentage:\n");
   scanf("%d",&lokeshbabu);
   reat=tpoori* kumaran/100;
   seat=tpoori* lokeshbabu/100;
   tpoori2=tpoori-reat-seat;
   printf("kumaran's poori:%d\n",reat);
   printf("lokeshbabu's poori:%d\n",seat);
   printf("balanced poori after kunaran and lokeshbabu ate:%d\n",tpoori2);
   printf("\nenter sharuk's poori percentage:\n");
   scanf("%d",&sharuk);
   keat=tpoori* sharuk/100;
   tpoori=tpoori-keat;
   printf("sharuk's poori:%d\n",keat);
   printf("totalbalance after three members ate: %d\n",tpoori);
   getch();
   }
