#include "main.h"

/**
 * print_alphabet_x10 - Prints alpbabets 10x
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char x;

	while (count <= 9)
	{
		for (x >= 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count = count + 1;
	}
}
