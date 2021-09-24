#include "main.h"

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
	int x = 0, y, rev;

	for (y = n - 1; y >= n / 2; y--, x++)
	{
		rev = a[x];
		a[x] = a[y];
		a[y] = rev;
	}
}
