#include "main.h"
/**
 *_print_rev_recursion - prints the inputed string oin reverse
 *@s: is the inputed string
 *Description: this code is to print the inputed string in reverse
 *Return: nothing
 */
void _print_rev_recursion(char *s){
	if (s[0] == '\0')
		return;

	if (s[1] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
		_putchar(s[0]);
}
