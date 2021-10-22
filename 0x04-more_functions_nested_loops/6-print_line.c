#include "main.h"

/**
 *print_line - prints a staight line
 *Return: returns nothing
 *@n: is a parameter
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
