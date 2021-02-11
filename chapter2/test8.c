/*chapter2,test8*/
#include<stdio.h>
int main(void)
{
	void one_three(void);

	printf("starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}
void one_three(void)
{
	void two(void);

	printf("one\n");
	two();
	printf("three\n");
}
void two(void)
{
	printf("two\n");
}
