#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: A pointer
 */

char *_strdup(char *str)
{
	char *newstr;

	int i, len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*str++)
	{
		i++;
	}
	len = i;
	newstr = malloc(len * sizeof(char));
	for (j = 0; j < len; j++)
	{
		newstr[j] = str[j];
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	return (newstr);
}
