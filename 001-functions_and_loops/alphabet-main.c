/*program to print alphabet form a to z in lower case*/
#include<stdio.h>

/**
 * @Main - print lowercase alphabet using letters
 * print lowercase alphabets using ASCII codes from 97 to 122
 * print upper case alphabet using ASCII code from 65 to 096
 *
 *return: Always 0
 */
int main(void)
{
	/*declare the variable*/
	char alphabet;
	char herufi;

	/*initialize first letter, print to z, add*/
	for(alphabet = 65; alphabet <= 122; alphabet++)
	{
		printf("%c ", alphabet);
	}
	printf("\n");

	return (0);
}
