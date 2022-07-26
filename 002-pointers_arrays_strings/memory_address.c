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
	int digit = 1000;

	printf("\n");
	/*size of the variable digit in byetes*/
	printf("The size of 'digit' is %ld bytes\n", sizeof(digit));
	printf("Address of 'digit' is %u in decimals\n", &digit);
	printf("Address of 'digit' is %p in hexadecimals\n", &digit);
	printf("Address of 'digit' is %o in octal values\n", &digit);
	printf("\n");
	
	/*store the memory address in a point*/
	int *pointer;		/*declare pointer to integer*/
	pointer = &digit;	/*store the address of digit to pointer*/
	printf("The size of 'pointer to digit' is %ld bytes\n", sizeof(pointer));
	printf("Value of 'pointer to digit' is %u in decimals\n", pointer);
	printf("Value of 'pointer to digit ' is %p in hexadecimals\n", pointer);
	printf("Value of 'pointer to digit' is %o in octal values\n", pointer);
	printf("\n");
	
	if (&digit == pointer)
	{
	printf("The pointer to digit stores the address of digit!\n");
	printf("\n");
	}
	else
	{
	printf("This is bullshit!!!!\n");
	printf("\n");
	}
	
	/*display values stored in the pointer and in variable.*/
	printf("Value stored in 'digit' is %u in\n", digit);
	printf("Value referenced by'pointer to digit' is %u \n", *pointer);
	printf("\n");
	if (digit == *pointer)
	{
	printf("A dereferenced pointer refers value in variable\n");
	printf("\n");
	}
	else
	{
	printf(" This is Non sense!!!!\n");
	printf("\n");
	}
	
	
	
	return (0);
}
