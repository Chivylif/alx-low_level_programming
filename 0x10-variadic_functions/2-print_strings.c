#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}


