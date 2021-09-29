#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: String containig the character to be located
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 'c')
		{
			return (s);
		}
		if (s[x] == 0)
		{
			return (NULL);
		}
	}
}
