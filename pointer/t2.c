#include<stdio.h>
int main(void)
{
  int a[5] = {3,4,5,6,7};
  int *p = a;
  printf("Now, p = %p\n",p);
  for (int i = 0;i<5;i++)
    printf("%d ",*p++);
  printf("\n");
  printf("Now, p = %p\n",p);
  return 0;
}
