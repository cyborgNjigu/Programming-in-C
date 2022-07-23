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

	row = 1;
	printf("\n");
		while (row <= 10)
		{
			columns = 1;
			while (columns <= 10)
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

				
