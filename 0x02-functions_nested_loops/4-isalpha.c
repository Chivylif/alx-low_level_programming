#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Value to be chaecked
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c > 64 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
