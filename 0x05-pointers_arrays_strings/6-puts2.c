#include "main.h"
/**
 *puts2 - puts the 2 based
 *@str: is a parameter
 *Return: returns nothing
 */
void puts2(char *str)
{
	int i = 0;
	while (*str != '\0')
		str++;
	while (i < str)
	{
		_putchar(i);
		i += 2;
	}
	_putchar('\n');
}
