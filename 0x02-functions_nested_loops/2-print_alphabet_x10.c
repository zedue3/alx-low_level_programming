#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

        char lower_case_letter = 'a';

        while (lower_case_letter <= 'z')
        {
                _putchar(lower_case_letter);
                lower_case_letter++;
        }
        _putchar('\n');
}

/**
 *print_alphabet_x10 - prints alphabet in 10 rows
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i<10)
		print_alphabet();
}
