#include<stdio.h>

/**
 * main display whether a character is uppercase or lower case
 *
 * return: Always 0
 */
int main(void)
{
	char letter = 'Q';
	if (letter >= 97 && letter <= 122)
	{
	printf("Letter %c is lowercase!\n", letter);
	}
	else
	{
	printf("Leteer %c is uppercase!\n", letter);
	}
return (0);
}
