#include "main.h"

/**
 * _islower(inc c) - A function that prints 1 if c is lower case and 0 otherwise.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 64 & c < 91)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
