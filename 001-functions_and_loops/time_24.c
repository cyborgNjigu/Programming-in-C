/*Jack Bauers 24 Hour time piece*/
#include<stdio.h>

/**
*@Main- display time from 00:00 to 23:59
*
*@return: Always zero 0
*/
int main(void)
{
	/*declare variables*/
	int time = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	/*print the initial time*/
	printf("\n");
	while (time < 1440)
	{
	printf(" %d %d : %d %d \n", a, b, c, d);
	d++;
		if (d > 9)
		{
		d =0;
		c++;
		}
		if (c > 5)
		{
		c = 0;
		b++;
		}
		if (b >9)
		{
		b =0;
		a++;
		}
		
		
		time++;
	}
	printf("\n");

return (0);
}
