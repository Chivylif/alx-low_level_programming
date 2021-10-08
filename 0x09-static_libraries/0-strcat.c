#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: cource string
 *
 * Return: dest.
 *
 */

char *_strcat(char *dest, char *src)
{
	int x, y, len = 0;

	for (x = 0; dest[x] != 0; x++)
	{
		len++;
	}
	for (y = 0; src[y] != 0; y++, ++len)
	{
		dest[len] = src[y];
	}
	dest[len] = '\0';
	return (dest);
}
