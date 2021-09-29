#include "main.h"
#include <stdio.h>

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
	for (i = 0; i < (size * size); i = i + size + 1,j = (size - 1) + j)
	{
		sum = sum + a[i];
		sum2 = sum2 + a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
