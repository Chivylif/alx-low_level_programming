#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(x, unsigned int);
	}
	va_end(x);
	return (sum);
}
