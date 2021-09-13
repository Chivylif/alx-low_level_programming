#include "main.h"

/**
 * _islower - Checks for lower case character
 * @c: Number to be chaecked
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
	}
	else if (c >= 'a' && c <= 'z')
	{
		_putchar('0');
	}
	else
	{
		return (0);
	}
}
