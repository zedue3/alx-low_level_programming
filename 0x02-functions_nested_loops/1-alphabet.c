#include "main.h"

/**
 *main - check the code
 *Description - prints alphabet with lower case
 *Return: always 0
 */

void print_alphabet(void)
{
	char i='a';
	while(i<='z'){
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
