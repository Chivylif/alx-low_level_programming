#include "main.h"

/**
 * *_strcpy - copies one string into another string
 * @dest: One to be copied too
 * @src: one to be copied.
 *
 * Return: Void.
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] <= '\0'; i++)
	{
		dest = src[i];
	}
}
