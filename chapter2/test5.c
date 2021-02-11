#include<stdio.h>
int main(void)
{
	void br(void);
	void ic(void);

	br();
	printf(","),
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");

	return 0;
}
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China");
}
