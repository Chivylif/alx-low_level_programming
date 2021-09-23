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
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
