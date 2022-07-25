#include <stdio.h>

/**
 * main -Addresses and Pointers
 *
 * Description: Print the memory address of a Variable
 * return Always 0 sucess
 */
int main(void)
{
	/*declare  a variable*/
	int digit;

	/*size of the variable digit in byetes*/
	printf("The size of an integer variable is %ld bytes\n", sizeof(int));
	printf("Address of 'digit' is %u in decimals\n", &digit);
	printf("Address of 'digit' is %p in hexadecimals\n", &digit);
	printf("Address of 'digit' is %o in octal values\n", &digit);
	printf("\n");
	return (0);
}
