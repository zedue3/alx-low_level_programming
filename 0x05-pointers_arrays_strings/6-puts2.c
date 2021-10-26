#include "main.h"
/**
 *puts2 - puts the 2 based
 *@str: is a parameter
 *Return: returns nothing
 */
void puts2(char *str)
{
	int x, y;

	x = 0;
	y = 0;

	while (str[x] != '\0')
		x++;

	while (y < x)
	{
		_putchar(str[y]);
		y += 2;
	}
	_putchar('\n');
}
