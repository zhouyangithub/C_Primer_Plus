/*animals.c*/
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;

	printf("Give me a letter of the alphabet, and I will give ");
	printf("an animal name\nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");
	while ((ch = getchar())!= '#')
	{
		if ('\n' == ch)
			continue;
		if (islower(ch))
			switch (ch)
			{
				case 'a':
					printf("argali\n");
					break;
				case 'b':
					printf("babirusa\n");
					break;
				case 'c':
					printf("coati\n");
					break;
				case 'd':
					printf("desman\n");
					break;
				case 'e':
					printf("echidna, the spiny anteater\n");
					break;
				default:
					printf("That's stumper!\n");
			}
		else
			printf("I recognize only lowercase letters.\n");
		while (getchar()!= '\n')
			continue;
		printf("Please type anotehr letter or a #.\n");
	}
	printf("Bye\n");
}
