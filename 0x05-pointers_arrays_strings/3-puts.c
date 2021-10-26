#include "main.h"
/**
 *_puts - pusts an string
 *@str: have a string
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
