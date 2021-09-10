#include "main.h"

/**
 * print_alphabet -a function that Prints alphabets in lower case
 *
 * Return: Always o.
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
