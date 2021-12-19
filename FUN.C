#include<stdio.h>
int diwali();
int laddu,ras,temp;

void main()
{
clrscr();
	 printf("enter laddu:");
	 scanf("%d",&laddu);
	 printf("enter ras:");
	 scanf("%d",&ras);
	 temp=diwali(laddu,ras);
	 printf("total sweets%d\n",temp);
getch();
}

int diwali(int a,int b)
{   if(ras==0)
    {
    return 0;
    }
    else
    {
    return a+b;
    }
}
