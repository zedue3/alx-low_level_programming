#include "main.h"

/**
 *swap_int - swaps two numbers
 *@a: one integer parameter
 *@b: other integer parameter
 *Return: returns nothing
 *Description: swaps two numbers
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
