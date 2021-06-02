#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if (b!=0)
    printf("%d / %d = %d\n",a,b,a/b);
  else{
    fprintf(stderr,"b must be unequal 0!!!\n");
    return 1;
  }

  return 0;
}
