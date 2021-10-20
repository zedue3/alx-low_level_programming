#include "main.h"
/**
 *
 *_abs - prints an absolute number
 *@int: parameter
 *Returns: always positive
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}
