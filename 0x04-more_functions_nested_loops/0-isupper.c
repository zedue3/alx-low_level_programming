#include "main.h"

/**
 *_isupper - checks for the upper case letter
 *@c: is a parameter to be accepted
 *Return: returns 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
