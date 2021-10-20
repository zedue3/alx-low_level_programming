#include "main.h"
/**
 *
 *
 *
 */
int _isalpha(int c)
{
	while (c >= 65 && c <= 90)
		return (1);
	while (c >= 97 && c <= 122)
		return (1);
	return(0);
}
