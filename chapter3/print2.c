/*print2.c*/
#include<stdio.h>
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u not %d\n",un,un);
	printf("end = %d and %hd\n",end,end);
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);

	return 0;
}
