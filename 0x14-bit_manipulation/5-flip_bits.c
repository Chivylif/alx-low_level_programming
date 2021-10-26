#include "main.h"

/**
 * flip_bits - Entry Point
 * @n: input
 * @m: bits
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_num = n ^ m;
	int index = (sizeof(unsigned long int) * 8) - 1;
	int flipped_bits = 0;

	while (index >= 0)
	{
		if ((new_num >> index) & 1)
			flipped_bits++;
		index--;
	}
	return (flipped_bits);
}
