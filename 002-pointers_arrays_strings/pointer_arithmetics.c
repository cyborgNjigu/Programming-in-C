/*pointer Arithmetics*/
#include<stdio.h>

/**
*main- pointer arithmetics
*Description - accessing elements of an array using pointers
*
*return Always 0 success
*/
int main(void)
{
	/*declare an array variable*/
	int array[10];
	/**
	* array[5] == *(array +5) sixth element of the array above
	*since array is a pointer to the first element
	*/
	printf("\n");
	*(array + 0) = 98;		/*= array[0]*/
	*(array + 1) = 198;		/*= array[1]*/
	*(array + 2) = 298;		/*= array[2]*/
	*(array + 3) = 398;		/*= array[3]*/
	*(array + 4) = 498;		/*= array[4]*/
	*(array + 5) = 598;		/*= array[5]*/
	*(array + 6) = 698;		/*= array[6]*/
	printf("\n");
	/*print the values inthe elements*/
	printf("The value stored in array[0] is %d\n", *array);
	printf("The value stored in array[1] is %d\n", *(array + 1));
	printf("The value stored in array[2] is %d\n", *(array + 2));
	printf("The value stored in array[3] is %d\n", *(array + 3));
	printf("\n");
	printf("The value of 'array' is %p in hex\n", array);
	printf("The address of 'array[0] is %p in hex\n", &array[0]);
	printf("The address of 'array[0] is %p in hex\n", &(*(array + 0)));
	printf("The address of 'array[1] is %p in hex\n", &array[1]);
	printf("The address of 'array[2] is %p in hex\n", &array[2]);
	printf("The address of 'array[3] is %p in hex\n", &array[3]);
	printf("The address of 'array[4] is %p in hex\n", &array[4]);
	printf("\n");
	printf("The size of the main array is %lu in bytes\n", sizeof(array));
	printf("The size of element array[0]  %lu in bytes\n", sizeof(array[0]));
	printf("\n");
	
	return (0);
}
	
