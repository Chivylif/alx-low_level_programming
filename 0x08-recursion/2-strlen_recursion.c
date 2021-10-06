#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Argument string
 *
 * Return: The lenght(integer)
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s == '\0')
		return (0);
	else
		x = 1 + _strlen_recursion(s + 1);
		return (x);
}

