#include "main.h"

/**
 *
 *print_triangle - prints # shape on triangle
 *@size: is one pf the parameter
 *Return: returns the value
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size-i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
