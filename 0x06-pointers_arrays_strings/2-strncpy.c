#include "main.h"

/**
 * _strncpy - Copies a string to the n number to another string
 * @dest: Sting to be copied to
 * @src: String to be copied
 * @n: the n number of the second string to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
