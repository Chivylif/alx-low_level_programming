#include "main.h"

/**
 * _islower - Checks for lower case character
 * @c: Number to be chaecked
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 64 && c < 91)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
