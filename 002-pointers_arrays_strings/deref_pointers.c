/*deref pointers*/
#include<stdio.h>
/**
*main
*Description - Use functions to deref variables using pointers
*return always 0 success
*/
int main(void)
{
	/*declare variables*/
	int n = 1000;
	int *q;
	
	q = &n;
	
	printf("\n");
	/*print the values of n*/
	printf("The value of n is %d\n", n);
	printf("\n");
	/*call the function by value*/
	modify_my_parameter_by_value(n);
	/*print after referencing*/
	printf("The value of n is %d\n", n);
	printf("\n");
	/*call the function by deref*/
	modify_my_parameter_by_deref(q);
	/*print after dereferencing*/
	printf("The value of n is %d\n", n);
	
	printf("\n");
	return (0);
}
/**
*this function does not do shit
*@m is a useless variable
*return nothing
*/
void modify_my_parameter_by_value(int m)
{
	/*initilize m*/
	m = 2022;
}
/**this function does shit
*@ is a useful variable
*return nothing
*/
void modify_my_parameter_by_deref(int *p)
{
	/*dereference the value of pointer*/
	*p = 2030;
}
