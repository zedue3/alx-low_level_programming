#include "main.h"
/**
 *print_sign - tells weather the number is negative or positive
 *@n: the number to be evaluated
 *Return: returns 1 if positive 0 if zero -1 if negative
 *
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else (n > 0)
	{
		_putchar('1');
		return (1);
	}

}
