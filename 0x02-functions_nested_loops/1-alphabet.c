#include "main.h"

/**
 * main - Prints alphabets in lower case
 *
 * Return: Always o.
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return (0);
}
