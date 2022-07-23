#include <stdio.h>

/*@main - multipilcation tabe of 10 starting from 0
 *
 * @return 0
 */
int main(void)
{
	int row;
	int columns;
	int product;
	int nth_number;

	/*prompt user to enter the nth times number*/
	printf(" Please enter the number of size of the table: ");
	scanf(" %d", &nth_number);
	
	row = 1;
	printf("\n");
		while (row <= nth_number)
		{
			columns = 1;
			while (columns <= nth_number)
			{
				product = row * columns;
				printf("  %d ", product);
				columns++;
			}
			printf("\n");
			row++;
		}
	printf("\n");
	return (0);
}

				
