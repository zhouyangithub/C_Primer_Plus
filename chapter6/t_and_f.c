/*t_and_f.c*/
#include<stdio.h>
int main(void)
{
	int true_val,false_val;
	true_val = (10>2);
	false_val = (10==2);

	printf("True = %d, false = %d\n",true_val,false_val);

	return 0;
}
