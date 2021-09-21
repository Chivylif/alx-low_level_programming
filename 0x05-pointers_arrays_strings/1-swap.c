#include "main.h"

/**
 * swap_int - Swaps two intergers
 * @a: Integer 1
 * @b: Integer 2
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
