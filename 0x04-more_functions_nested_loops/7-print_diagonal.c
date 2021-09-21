#include "main.h"

/**
 * print_diagonal - Prints a diagonal n times
 * @n: number of times \ is printed
 *
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
}
