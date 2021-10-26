#include "main.h"
/**
 *print_array - prints the value of every array
 *@a: is one parameter
 *@n: is onother parameter
 *Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n ,", a[i]);
	}
	printf("\n");
}
