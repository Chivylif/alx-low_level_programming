#include "main.h"

/**
 * _strspn - returns the number of the characters that 
 * are matched in the given string.
 * @s: string to be scanned
 * @accept: string that is scanned for
 *
 * Return: number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0, i, j, x;

	for (i = 0; accept[i] != '\0'; i++)
	{
		x = 0;

		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				len++;
				x = 1;
			}
		}
		if (x == 0)
			return (len);			}
	}

	return (len);
}
