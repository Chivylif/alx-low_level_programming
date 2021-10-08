#include "main.h"

/**
 * _strcpy - copies one string into another string
 * @dest: One to be copied too
 * @src: one to be copied.
 *
 * Return: Dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len1 = 0;

	for (j = 0; src[j] != '\0'; j++)
	{
		len1++;
	}
	for (i = 0; i <= len1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
