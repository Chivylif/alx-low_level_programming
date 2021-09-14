#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: Number to passed as an arguement
 *
 * Return: Return x
 */

int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		x = x * (-1);
	}
	n = (x % 10);
	_putchar(n + '0');
	return (n);
}
