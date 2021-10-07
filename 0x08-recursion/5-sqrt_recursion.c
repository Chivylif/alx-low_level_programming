#include "main.h"
int helper(int x, int y);

/**
 * _int_sqrt_recursion - prints  the natural square root of a number
 * @n: int input
 *
 * Return: the natural sqaure root
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}

int helper(int x, int y)
{
	int i = y * y;

	if (y < 1)
	{
		return (-1);
	}
	else if (i == x)
	{
		return (y);
	}
	else if (i < x)
	{
		return (helper(x, y + 1));
	}
	else 
	{
		return (helper(x, y - 1));
	}
}
