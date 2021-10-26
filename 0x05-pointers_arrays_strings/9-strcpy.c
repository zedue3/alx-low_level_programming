#include "main.h"
/**
 *
 *_strcpy - copies a string from one to other
 *@dest: destination
 *@src: source
 *Return: returns value
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;

	while (x >= 0)
	{
		dest[x] = src[x];

		if (src[x] == '\0')
			return (dest);
		x++;
	}
	return (dest);
}
