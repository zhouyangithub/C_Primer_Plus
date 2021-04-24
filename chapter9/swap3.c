/*swap1.c*/
#include<stdio.h>
void integerchange(int * u,int * v);

int main(void)
{
	int x = 5,y = 10;

	printf("Originally x = %d and y = %d.\n",x,y);
	integerchange(&x,&y);
	printf("Now x = %d and y = %d.\n",x,y);

	return 0;
}
void integerchange(int * u,int * v)
{
	int temp;

	temp = *u;
	*u = *v;
	*v = temp;
}
