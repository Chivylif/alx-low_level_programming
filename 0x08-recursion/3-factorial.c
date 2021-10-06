#include "main.h"

/**
 * factorial - prints the factorial of a given number n
 * @n: The given number
 *
 * Returns: A number
 */

int factorial(int n)
{
	int x = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
		return (x);
	}
}
