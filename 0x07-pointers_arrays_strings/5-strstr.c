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

	x, y = 0;
	while (haystack[y] != '\0')
	{
		if (needle[x] == haystack[y])
		{
			return (haystack + y);
		}
		y++;
	}
	return (NULL);
}

