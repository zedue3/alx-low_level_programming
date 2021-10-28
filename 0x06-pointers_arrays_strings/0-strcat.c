#include "main.h"
/**
 *_strcat - concatinates strings togeteher
 *@dest: is destination
 *@src: is source
 *Return: returns the destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];

	return (dest);
}
