#include "main.h"

/**
 * _isupper - checks if a character is in upper case
 * @c: character to be checked
 *
 * Return: Returns 1 or 0.
 */

int _isupper(int c)
{
	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
