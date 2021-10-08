#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to be scanned
 * @accept: string to check its first occurane in s
 *
 * Return: A pointer s
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
