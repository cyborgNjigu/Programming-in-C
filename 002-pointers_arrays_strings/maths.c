#include<stdio.h>

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	/*declare the array*/
  	 int a[5];		/*an array of 5 elements*/
  	 int *p;		/*an interger pointer*/
  	 int *p2;		/*an interger pointer*/

   *a = 98;			/* assign 98 to element a[0]*/
   *(a + 1) = 198;		/* assign 198 to a[1]*/
   *(a + 2) = 298;		/* assign 298 to a[2]*/
   a[3] = 398;			/* assign 398 to a[3]*/
   *(a + 4) = 498;		/* assign 498 to a[4]*/
   printf("1.0 The value stored in a[0] is %d \n", a[0]);
   printf("1.0 The value stored in a[1] is %d \n", a[1]);
   printf("1.0 The value stored in a[2] is %d \n", a[2]);
   printf("1.0 The value stored in a[3] is %d \n", a[3]);
   printf("1.0 The value stored in a[4] is %d \n", a[4]);
   p = a + 1;			/* points to a[1]*/
   *p = 98;  			/* deref a[1] to 98*/
   p2 = a + 3;			/* point to a[3]*/
   *p2 = *p + 1337;		/* deref a[3] to 98 + 1337 = 1435*/
   printf("\n");
   printf("2.0 The value stored in a[0] is %d \n", a[0]);
   printf("2.0 The value stored in a[1] is %d \n", a[1]);
   printf("2.0 The value stored in a[2] is %d \n", a[2]);
   printf("2.0 The value stored in a[3] is %d \n", a[3]);
   printf("2.0 The value stored in a[4] is %d \n", a[4]);
   printf("\n");
   return (0);
}
