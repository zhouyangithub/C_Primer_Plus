/*r_drive1.c*/
#include<stdio.h>
#include<stdlib.h>
extern void srand1(unsigned int x);
extern int rand1(void);
extern unsigned long int next;
int main(void)
{
  int count;
  unsigned seed;

  printf("next is %ld for %p\n",next,&next);
  printf("Please enter your choice for seed\n");
  while (scanf("%u",&seed) == 1)
  {
    srand1(seed);
    for (count = 0;count <5;count++)
      printf("%d\n",rand1());
    printf("PLease enter next seed (q to quit):\n");
  }
  printf("Done!\n");

  return 0;
}
