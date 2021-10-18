#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - reallocates old to new, set conditions from problem
 * returning dest w/ size of malloc new_size, set src as ptr
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *dest;
	unsigned int x;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			free(ptr);
			return (NULL);
		return(ptr);
	}
	
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = ptr;
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);

	for (x = 0; x < new_size && x < old_size; x++)
		str[x] = dest[x];

	free(ptr);
	return (str);
}
