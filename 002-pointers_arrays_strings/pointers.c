/*Dereferencing through pointers*/
#include<stdio.h>
/**
*main- work with pointers
*
*description - dereference pointers
*return always 0 success
*/
int main (void)
{
	/*declare the variables to work with*/
	int digit = 1000;
	int *pointer;
	int deref_digit;
	
	pointer = &digit;	/*store the address of digit in pointer*/
	/*Addresses and size*/
	printf("\n");
	printf("The size of 'digit' is %ld in bytes\n", sizeof(digit));
	printf("The size of 'pointer' is %ld in bytes\n", sizeof(pointer));
	printf("\n");
	printf("The address of 'digit' is %p in hexadecimals\n", &digit);
	printf("The address of 'digit' is %ld in decimals\n", &digit);
	printf("The address of 'pointer' is %p in hexadecimals\n", &pointer);
	printf("\n");
	printf("The value stored in 'digit' is %p in hexadecimals\n", digit);
	printf("The stored in pointer is %p in hexadecimals\n", pointer);
	printf("The value stored in 'digit' is %d in decimals\n", digit);
	printf("The stored in pointer is %lu in decimals\n", pointer);
	printf("The value referenced by pointer is %d in decimals\n", *pointer);
	printf("\n");
	/*dereference the pointer to 2022*/
	*pointer = 8698;
	
	printf("After Dereferencing the variable using the pointer\n");
	printf("\n");
	printf("The value stored in 'digit' is %p in hexadecimals\n", digit);
	printf("The stored in pointer is %p in hexadecimals\n", pointer);
	printf("The value stored in 'digit' is %d in decimals\n", digit);
	printf("The stored in pointer is %lu in decimals\n", pointer);
	printf("The value referenced by pointer is %d in decimals\n", *pointer);
	printf("\n");
	return (0);
}
