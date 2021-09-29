#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: pointer to an array of intergers
 * @size: size of the array
 *
 * Return: Sum of the diagonals
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum2 = 0;
	
	j = size - 1;
	for (i = 0; i < size; i++,y--)
	{
		sum = sum + a[i][i];
		sum2 = sum2 + a[i][j];
	}
	printf("%d %d\n", sum, sum2);
}
