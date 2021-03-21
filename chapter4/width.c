/*width.c*/
#include<stdio.h>
#define PAGES 959.12345
int main(void)
{
	printf("*%f*\n",PAGES);
	printf("*%2.1f*\n",PAGES);
	printf("*%10.2f*\n",PAGES);
	printf("*%-10.2f*\n",PAGES);
	
	return 0;
}
