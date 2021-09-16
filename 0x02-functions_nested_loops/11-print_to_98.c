#include "main.h"

/**
 * print_to_98 - Prints all the natural numbers from n to 98
 * @n: the starting number
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n == 98)
				continue;
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
