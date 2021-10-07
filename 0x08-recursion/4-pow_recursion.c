#include "main.h"

/**
 * _pow_recursion - Prints n number raosed to the power y
 * @x:Base number
 * @y: power number
 *
 * Return: An integer.
 */

int _pow_recursion(int x, int y)
{
	int c = 0;

	if (y <= 1)
	{
		return (1);
	}
	else
	{
		c = x * _pow_recursion(x, y - 1);
		return (c);
	}
}
