#include "main.h"
/**
 *_memset - is a signiture
 *@s: is one parameter from the memeset
 *@b: second parameter
 *@n: integer arameter
 *Return: returns the sorted s
 *
 **/
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
		s [n - 1] = b;

	return (s);
}
