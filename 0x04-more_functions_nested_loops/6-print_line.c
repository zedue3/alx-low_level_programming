#include "main.h"

/**
 *print_line - prints a staight line
 *Return: returns nothing
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
