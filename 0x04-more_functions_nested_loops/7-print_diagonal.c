#include "main.h"
/**
 *print_diagonal - prints \ in diagonal
 *@n: is a parameter
 *Return: nothing since it is void function
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i <= 0)
		_putchar('\n');
}
