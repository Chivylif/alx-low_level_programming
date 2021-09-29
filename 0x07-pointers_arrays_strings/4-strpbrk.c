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
	int x;

	for (x = 0; accept[x]; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				return (s + y);
				break;
			}
		}
	}
	return (NULL);
}
