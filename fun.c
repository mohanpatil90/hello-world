#include<stdio.h>
int add(int,int);
void main()
{
  int x,y,sum;
  printf("Enter the two value\n");
  scanf("%d%d",&x,&y);
  sum=add(x,y);
  printf("addition %d in the main",sum);
}

int add(int a,int b)
{
 int sum1;
 sum1 = a + b;
 printf("addition of %d and %d is %d\n",a,b,sum1);
}
