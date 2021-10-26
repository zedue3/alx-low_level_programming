#include "main.h"

/**
 *rev_string - is used to reverse a string
 *@s: one character parameter
 *Return: nothing
 */
void rev_string(char *s)
{
	char *first = s;
	char *last = s;

	while (*last)
		++last;

	if (first < last)
	{
		for (; first < --last; ++first)
		{
			char c = *first;
			*first = *last;
			*last = c;
		}
	}
}
