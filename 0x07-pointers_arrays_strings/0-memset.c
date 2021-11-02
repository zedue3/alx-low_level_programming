#include "main.h"
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
		s [n - 1] = b;

	return (s);
}
