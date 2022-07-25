#include<stdio.h>
int main(void)
{
	int num = 1;
	int last = 100;
	
	printf("\n");
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" Fizz Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz ");
		}
		else
		printf(" %d ", num);
		num++;
	}
	printf("\n");
	return (0);
}
