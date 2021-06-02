#include<stdio.h>
int main(void)
{
  int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  printf("a[1][2] = %d\n",a[1][2]);
  printf("a[1][2] = %d\n",*(a[1]+2));
  printf("a[1][2] = %d\n",*(*(a+1)+2));
  return 0;
}
