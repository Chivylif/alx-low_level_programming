#include "main.h"

/**
 * times_table - Prints 9 times table starting from 0
 *
 * Return: Return the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result;

			result = i * j;
			_putchar(result + '0');
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
