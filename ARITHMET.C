#include <stdio.h>
#include <conio.h>

void main()
{
  int in1,in2,ou1,ou2,ou3,ou4,ou5;
  clrscr();
  printf("enter input values :\n");
  scanf("%d%d",&in1,&in2);
  //printf("enter input2");
  //scanf("%d",&input);
  ou1=in1+in2;
  ou2=in1-in2;
  ou3=in1*in2;
  ou4=in1%in2;
  ou5=in1/in2;
  printf("sum is is %d\n",ou1);
  printf("difference is %d\n",ou2);
  printf("product is %d\n",ou3);
  printf("modulo is %d\n",ou4);
  printf("quotient is %d\n",ou5);
  getch();
}
