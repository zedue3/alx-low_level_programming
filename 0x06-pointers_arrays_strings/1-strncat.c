#include "main.h"

/**
 *_strncat - concatinates source with destination by the value of n
 *@dest: is destination
 *@src: is source
 *@n: is integer
 *Return: returns the concatinated value
 *Description - used to concatenat
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j != n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	if (dest[i - 1] != '\0')
		dest[i] = '\0';

	return (dest);
}
