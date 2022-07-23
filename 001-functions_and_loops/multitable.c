#include<stdio.h>

/**
 *@Main - create a multipliction tableof ten from0 using nested while loops
* nest columns in rows ie colummns are a part of rows
 *return: Always 0
 */
int main(void)
{
	/*declare and initialize rows and columns*/
	int row = 0;
	int column =0;
	int number = 0;
	int multiple = 0;

	multiple = row * column;
	printf("\n");
	printf(".....Multiplication Table of Ten.....\n");
	/*make rows*/
	while (row <= 10)
	{
		if(row == 0 && number <= 10)
		{
			printf(" %d. ", number);
			number++;
	
		}
		else
		{
			printf("\n");
			while (column <= 10)
			{
				if (column == 0)
				{
				printf(" %d. \n", row);
				row++;
				}
				else
				{
					printf(" %d ", multiple);
				}
				printf("\n");
				column++;
			}
			row++;
		}

	}
	printf("\n");
	return (0);
}
