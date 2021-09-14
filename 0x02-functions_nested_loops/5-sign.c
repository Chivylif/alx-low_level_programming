#include "main.h"
/**
 * print_sign - A functions that returns sign of the number
 * @n: The number to be checked
 *
 * Return: Depends on the number checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
