#include "main.h"
/**
 *_islower - returns 1 if lowercase present
 *
 */
int _islower(int c)
{
	while (c >= 97 && c <=122)
		return (1);
	return (0);
}
