#include "main.h"
/**
 *_strlen_recursion - prints the length of the inputed string for us
 *@s: is the string to be inputed
 *Description: the function returns the string length
 *Return: the length
 *
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	if (s[1] == '\0')
		return (1);
	else
		return (_strlen_recursion(&s[1]) + 1);
}
