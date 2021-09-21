#include "main.h"

/**
 * print_triangle - Prints triangle of size size
 * @size: Size of the triagle to be printed
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, i, y, z;

		z = size - 1;

		for (x = 0; x < size; x++)
		{
			for (y = (z - x); y > 0; y--)
			{
				_putchar(' ');
			}
			for (i = 0; i <= x; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
