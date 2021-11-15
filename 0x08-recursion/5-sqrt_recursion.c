#include "main.h"
/**
 *sqr - finds the square root of n
 *@n: is the natural number
 *@i: is the numbers which are multiplied together to give n
 *Description: finds the square of n using i
 *Return: returns the square root
 */
int sqr(int n, int i)
{
	if (n == i * i)
		return (i);

	else if (n < i * i)
		return (-1);

	return (sqr(n, i + 1));
}
/**
 *_sqrt_recursion - is one function which finds the squre root
 *@n: is the number to be checked
 *Description: finds the square root of a given number
 *Return: returns the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 0));
}
