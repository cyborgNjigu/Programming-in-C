/*Fibonaci sequence generator*/
#include<stdio.h>

/**
 * @Main - print the nth fibonaci number starting with 1 and 2
 *
 * @return: Always 0
 */
int main(void)
{
	/*declare variables*/
	int first;
	int second;
	int fibo;
	int nth;
	int sn = 3;
	
	/*wrap in an infinite while loop*/
	printf("\n");
	printf(" Fibonaci Generator to the nth Value\n");
	while (1)
	{
	/*prompt user to enter information*/
	printf(" Enter the first number in the series:");
	scanf(" %d", &first);
	printf(" Enter the second number in the series:");
	scanf(" %d", &second);
	printf( "Enter the nth number in the series:");
	scanf(" %d", &nth);
	/*print the first two numbers in the series*/
	printf("1.%d\n2.%d\n", first, second);
	/*make the loop*/
	for(int loop = 0; loop < nth -2; loop++)
	{
		
		
		/*find the next number*/
		fibo = first + second;
		/*print the new number*/
		printf("%d. %d\n", sn, fibo);
		/*move second number to be the first in next loop*/
		first = second;
		/*move new number to be the second in the next loop*/
		second = fibo;
		sn++;
	}
	}
	printf("\n");
	return (0);
}
