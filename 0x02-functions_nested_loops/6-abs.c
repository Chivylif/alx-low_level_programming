#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 * @x: Interger to be checked
 * Return: Always 0.
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
	}
	_putchar(x + '0');
}
