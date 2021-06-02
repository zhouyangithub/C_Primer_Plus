#include<stdio.h>
#include "max.h"
#include "min.h"
int main(void)
{
  int a,b;
  puts("Please input a number:");
  scanf("%d",&a);
  puts("Please input another number");
  scanf("%d",&b);
  printf("the max of this two numbers %d and %d is %d\n",a,b,max(a,b));
  printf("the min of this two numbers %d and %d is %d\n",a,b,min(a,b));

  return 101;
}

