#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @n: Integer value
 * @src: cource string
 *
 * Return: dest.
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y, len = 0;

	for (x = 0; dest[x] != 0; x++)
	{
		len++;
	}
	for (y = 0; y < n; y++, len++)
	{
		dest[len] = src[y];
	}
	return (dest);
}
