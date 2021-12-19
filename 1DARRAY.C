#include<stdio.h>
#include<conio.h>
int array[5];
int y,i;
void main()
{
   clrscr();
	   for(y=0;y<=4;y++)
	   {
	   printf("enter the value for a[%d]:",y);
	   scanf("%d",&array[y]);
	   }
	   for(i=0;i<=4;i++)
	   {
	   printf("a[%d] : %d \n",i,array[i]);
	   }
   getch();
}
