#include <stdio.h>
/**
 * main - find prime number
 *
 * Description: find largest prime number of 612852475143
 *
 * Return: zero
 **/

int main(void)
{
	long x, y, z;

	x = 612852475143;
	y = 2;
	z = 2;

	while (x > z)
	{
		if (x % z == 0)
		{
			y = z;
			x = x / y;
			z = y + 1;
		}
		else
			z++;
	}
	printf("%ld\n", x);
	return (0);
}
