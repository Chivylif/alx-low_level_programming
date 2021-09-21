#include "main.h"

/**
 * print_line - Prints straight line n times
 * @n: number of times _ is printed
 *
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
