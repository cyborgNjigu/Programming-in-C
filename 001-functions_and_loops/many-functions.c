#include<stdio.h>

/**
 * @main - display alphabet using ASCII codes and global functions
 *
 *
 * return : Always 0
 */
int main(void)
{
	/*declare variables*/
	char alphabet;
	int count  = 1;

	/*call function*/
	/*display the list 10 times*/
	while (count <= 10)
	{
	letters(alphabet);
	printf("  %d ", count);

	count++;
	printf("\n");
	}

	return (0);
}
/**
 * function to return the alphabet
 */
void letters(char alpha)
{
	for(alpha = 97; alpha <= 122; alpha++)
	{
		printf(" %c ", alpha);
	}
}
