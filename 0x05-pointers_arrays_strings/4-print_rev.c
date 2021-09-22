#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: string to be printed in reverse order
 *
 */

void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		int count = 0;
		count++;
	}
	for (y = count - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
