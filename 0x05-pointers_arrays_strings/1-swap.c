#include "main.h"

/**
 *
 *swap_int - swaps two numbers
 *@a: one integer parameter
 *@b: other integer parameter
 *Return: returns nothing
 *
 */
void swap_int(int *a, int *b)
{

	int d = *a;
	*a = *b;
	*b = d;
}
