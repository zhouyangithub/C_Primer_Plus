/*put_put.c*/
#include<stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
  put1("If I'd as much money");
  put1(" as I could spend,\n");
  printf("I count %d characters.\n",
      put2("I never would cry old chairs to mend."));

  return 0;
}
