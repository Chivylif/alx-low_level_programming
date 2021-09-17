#include "main.h"

/**
 * _isdigit - Checks for a digit btw 0 and 9
 * @c: Character to be checked if digit or character
 *
 * Return: Returns 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <=9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
