#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * followed by a new line
 * @a: string array
 * @n: number of elements of the array
 *
 * Return: Void
 *
 */

void print_array(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(a[x]);
		if (x != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

