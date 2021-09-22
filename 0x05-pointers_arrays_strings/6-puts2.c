#include "main.h"

/**
 * puts2 - Prints every other character starting from 0 index No
 * @str: Passed arguement String
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
