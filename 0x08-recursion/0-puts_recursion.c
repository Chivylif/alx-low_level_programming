#include "main.h"

/**
 * _puts_recursion - Prints a string to standard output
 * @s: pointer to the string to be printed
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}
