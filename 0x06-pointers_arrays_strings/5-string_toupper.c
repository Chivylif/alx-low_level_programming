#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts from lower case to upper case
 * @n:string to be converted to upper case
 *
 * Return: converted string
 *
 */

char *string_toupper(char *n)
{
	int x = 0;

	while (n[x] != '\0')
	{
		if (n[x] >= 97 && n[x] <= 122)
		{
			n[x] = n[x] - 32;
		}
		x++;
	}
	return (n);
}
