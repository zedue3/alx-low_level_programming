#include "main.h"
/**
 *puts_half - prints half of the string
 *@str: is a string parameter
 *Return: returns nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	j = i / 2;

	if (i % 2 == 1)
		j++;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}
