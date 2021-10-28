#include "main.h"
/**
 *string_toupper - changes the string to the upper case
 *@s: is the sring parameter
 *Return: returns the upert
 *
 *
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] - = 32;

	}
	return (s);

}
