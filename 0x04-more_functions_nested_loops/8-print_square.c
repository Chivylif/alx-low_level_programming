#include "main.h"

/**
 * print_square - Prints square of a given size
 * @size: the given size of the square to be printed
 *
 */

void print_square(int size)
{
	int x, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

