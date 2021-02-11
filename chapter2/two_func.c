/*two_func.c*/
#include<stdio.h>
void bulter(void);
int main(void)
{
	printf("I will summon the butler function.\n");
	bulter();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;

}
void bulter(void)
{
	printf("You rang, Sir?\n");
}
