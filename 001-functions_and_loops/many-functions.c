#include<stdio.h>

/**
 * @main - display alphabet using ASCII codes
 *
 * return : Always 0
 */
int main(void)
{
	/*declare variables*/
	char alphabet;

	/*call function*/
	letters(alphabet);
	printf("\n");
	return (0);
}
/**
 * function to return the alphabet
 */
void letters(char alpha)
{
	for(alpha = 97; alpha <= 122; alpha++)
	{
		printf("%c ", alpha);
	}
}
