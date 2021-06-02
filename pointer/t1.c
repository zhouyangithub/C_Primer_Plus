#include<stdio.h>
int main(void)
{
  int a[5] = {1,2,3,4,5};
  printf("a = %p\n",a);
  printf("&a = %p\n",&a);
  printf("a+1 = %p\n",a+1);
  printf("&a+1 = %p\n",&a+1);
  printf("&a+1-&a = %d\n",(&a+1)-(&a));
  return 0;
}
