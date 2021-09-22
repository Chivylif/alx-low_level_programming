#include "main.h"

/**
 * puts_half - Prints the right half of a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int x, y, len1, len = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		len++;
	}
	if (len % 2 != 0)
	{
		len1 = len - 1;
		len1 = len1 / 2;
	}
	else
	{
		len1 = len / 2;
	}
	for (y = len1; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

