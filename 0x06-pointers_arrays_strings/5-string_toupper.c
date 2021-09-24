#include "main.h"

/**
 * string_toupper - converts from lower case to upper case
 * @n:string to be converted to upper case
 *
 * Return: converted string
 *
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; x != '\0'; x++)
	{
		if (n[x] >= 65 && n[x] <= 90)
		{
			n[x] = n[x] = 32;
		}
		else if (n[x] >= 97 && n[x] <= 122)
		{
			n[x] = n[x] - 32;
		}
	}
}
