/*everything about arrays*/
#include<stdio.h>
/*#include "arrays.h"*/

/**
*main- all about arrays 
*Description - all functions are stored in arrays.h
*
*return always 0 success
*/
int main(void)
{
	/*declare arrays here...*/
	int my_array[5];
	
	/*store values in the different elements of array*/
	my_array[0] = 1000;
	my_array[1] = 2000;
	my_array[2] = 3000;
	my_array[3] = 4000;
	my_array[4] = 5000;
	
	printf("\n");
	/*print the values inthe elements*/
	printf("The value stored in my_array   is %d\n", my_array);
	printf("The value stored in my_array[0] is %d\n", my_array[0]);
	printf("The value stored in my_array[1] is %d\n", my_array[1]);
	printf("The value stored in my_array[2] is %d\n", my_array[2]);
	printf("The value stored in my_array[3] is %d\n", my_array[3]);
	printf("The value stored in my_array[4] is %d\n", my_array[4]);
	/*print new line*/
	printf("\n");
	/*print address of the main array and elements*/
	printf("The address of my_array    is %p in hex\n", &my_array);
	printf("The address of my_array[0] is %p in hex\n", &my_array[0]);
	printf("The address of my_array[1] is %p in hex\n", &my_array[1]);
	printf("The address of my_array[2] is %p in hex\n", &my_array[2]);
	printf("The address of my_array[3] is %p in hex\n", &my_array[3]);
	printf("The address of my_array[4] is %p in hex\n", &my_array[4]);
	printf("\n");
	if (my_array == &my_array[0])
	{
		printf(" Name of Array stores address of 1st Element\n");
	}
	else
	{
		printf("This is bullshit!!!!\n");
		printf("\n");
	}
	return (0);
}
