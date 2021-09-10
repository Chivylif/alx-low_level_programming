#include "main.h"

/**
 * _islower(inc c) - Afunction that prints 1 if c is lower case and 0 otherwise.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c <= 'z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
