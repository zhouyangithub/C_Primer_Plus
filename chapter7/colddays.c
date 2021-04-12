/*colddays.c*/
#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperaure;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius, and enter q to quit.\n");
	while (scanf("%f",&temperaure) == 1)
	{
		all_days++;
		if (temperaure<FREEZING)
			cold_days++;
	}
	if (all_days!=0)
		printf("%d days total: %.1f%% were below freezing.\n",all_days,100* (float) cold_days/all_days);
	if (all_days==0)
		printf("No data entered!\n");

	return 0;
}
