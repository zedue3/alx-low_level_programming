#include "main.h"

/**
 *
 *print_triangle - prints # shape on triangle
 *@size: is one pf the parameter
 *Return: returns the value
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = size-1; j >= 1; j--)
			_putchar(' ');
		for (j = i; j > i; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
