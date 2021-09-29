#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack
 * @haystack: string to be examined
 * @needle: string to be checked
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	x = 0;
	for (y = 0; haystack[y] != '\0'; y++)
	{
		if (needle[x] == haystack[y])
		{
			return (haystack + y);
		}
	}
	return (NULL);
}

