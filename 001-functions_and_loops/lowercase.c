#include<stdio.h>

/**
 * main display whether a character is uppercase or lower case
 *
 * return: Always 0
 */
int main(void)
{
	char letter;
	/*prompt user to enter letters*/
	while (1)
	{
	printf("\n");
	printf("Enter the letter to be checked :");
	scanf("%c", &letter);
	if (letter >= 97 && letter <= 122)
	{
	printf("Letter %c is lowercase!\n", letter);
	}
	else
	{
	printf("Letter %c is uppercase!\n", letter);
	}
	}
return (0);
}
