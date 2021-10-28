#include "main.h"
/**
 *_strncpy - copies string to destination
 *@dest: destination
 *@src: source
 *@n: the value
 *Return: returns the destination
 *Description - copies source to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	    	dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
