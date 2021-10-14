#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;

	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			arr[x] = c;
		}
		return (arr);
	}
}
