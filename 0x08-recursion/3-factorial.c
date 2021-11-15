#include "main.h"
/**
 *factorial - will do the factorial of numbers
 *@n: is the number to be factorized
 *Description: this code will do the facorization
 *Return: returns the factorized value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
