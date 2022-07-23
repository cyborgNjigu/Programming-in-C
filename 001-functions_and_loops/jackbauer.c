#include <stdio.h>
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
int main(void)
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (x < 1440)
	{
		printf(" %d %d : %c %d\n", a, b, c, d);
		
		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;

	}
	return (0);
}
