#include "main.h"

/**
 *_islower() -A function that prints 1 or 0 depending on wether c is lower or upper case
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
