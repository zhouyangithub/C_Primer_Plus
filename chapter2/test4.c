#include<stdio.h>
int main(void)
{
	void jolly(void);
	void deny(void);

	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!\n");
}
