#include <stdio.h>

/**
 * @Main - execute the called functions
 *
 * @return- Always zero
 */
int main(void)
{
	int ten;
	int digit = 0;
	int summation;
	int from = 0;
	int total = 0;
	/*Call function*/
	ten = numbers(digit);

	printf("\n");

	return (0);
}
/**
 * display first 10 natural numbers using for loop
 */
int numbers(int one)
{
	one = 0;
	int sum =0;
	for (one = 0; one <= 10; one++)
	{
		sum = sum + one;
		printf(" %d ", one);
	}
printf("The sum is %d", sum);
}
