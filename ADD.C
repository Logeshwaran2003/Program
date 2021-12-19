#include <stdio.h>
#include <conio.h>

void main()
{
  int in1,in2,ou1;
  clrscr();
  printf("enter input values :\n");
  scanf("%d%d",&in1,&in2);
  //printf("enter input2");
  //scanf("%d",&input);
  ou1=in1+in2;
  printf("sum is %d\n",ou1);
  getch();
}
