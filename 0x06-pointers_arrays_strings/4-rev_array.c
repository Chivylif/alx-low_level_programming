#include "main.h

/**
 * reverse_array - Reverses and array of intergers
 * @n: Number of elements of the array
 * @a: array of integers,
 *
 * Return: Void
 *
 */

void reverse_array(int *a, int n)
{
	int x = n - 1;

	while (x >= 0)
	{
		if (x == n - 1 || x == 0)
		{
			_putchar(a[x]);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(a[x]);
		}
		x--;
	}
}
