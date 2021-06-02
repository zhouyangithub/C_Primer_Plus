/*test the string array.*/
#include<stdio.h>
int main(void)
{
  const char *a[3] = {
  "Apple",
  "Pear",
  "Orange"
  };

  putchar(*a[0]);
  putchar(*a[1]);
  putchar(*a[2]);
  putchar('\n');

  return 0;
}
