#include "main.h"
/**
 *
 *cap_string - converts every word into capital
 *@s: is a string to be taken
 *Return: returns the value
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= '0')
		{
			s[0] = s[0] - 32;
			continue;
		}

		if (s[i] == ' ' || s[i] == '\,' || s[i] == '\(')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
