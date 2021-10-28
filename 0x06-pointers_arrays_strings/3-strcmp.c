#include "main.h"
/**
 *_strcmp - compare strings
 *@s1: is one parameter
 *@s2: onother parameter
 *Return: returns thee comparision value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);

	return (s1[i] - s2[i]);
}
