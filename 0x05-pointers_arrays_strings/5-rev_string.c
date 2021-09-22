#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 */

void rev_string(char *s)
{
	int x, y, length;

	x = 0;
	while (s[x] != '\0')
	{
		length++;
		x++;
	}
	for (y = length - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
