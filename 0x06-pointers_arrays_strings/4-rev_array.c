#include "main.h"
/**
 *
 *reverse_array - reverses the array to the n times
 *@a: is one array type parameter
 *@n: other parameter
 *Return: returns the value of the reverse array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j =  a[n - 1];
		a[n - 1] = a[i];
		a[i] = j;
		n--;
	}
}
