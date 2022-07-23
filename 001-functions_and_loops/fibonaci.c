/*fibonaci sequence*/
#include<stdio.h>

/**
*@main display the 29 fibonaci numbers in the sequence
*
*return: Always return zero
*/
int main(void)
{
	/*declare the variables*/
	int first;
	int second;
	int fibo;
	int nthnumber;
	
	/*prompt user to enter information*/
	printf(" Enter the first number in the series:");
	scanf(" %d", &first);
	printf(" Enter the second number in the series:");
	scanf(" %d", &second);
	printf(" Enter the nth number in the series:");
	scanf(" %d", &nthnumber);
	/*print the first two numbers*/
	printf(" %d, %d ", first, second);
	/*repeate 29 times*/
	for (int iteration =0; iteration < nthnumber; iteration++)
	{
		/*find the next number in series*/
		fibo = first + second;
		printf (" %d, ", fibo);
		/*move second to first*/
		first = second;
		/*move fibo to second*/
		second = fibo;
	
		/*close the loop*/
	}
	printf("\n");
	/*return zero*/
	return (0);
	/*close program*/
}
		
	

