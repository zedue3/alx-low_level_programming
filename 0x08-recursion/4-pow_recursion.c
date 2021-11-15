#include "main.h"
/**
 *_pow_recursion - will find x to the power of y
 *@x: is the base nmber
 *@y: is the exponent
 *Description: this will work the exponent
 *Return: the last value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
