#include "main.h"

/**
 * print_most_numbers - Prints number from 0 - 9 without printing 2 & 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}			
