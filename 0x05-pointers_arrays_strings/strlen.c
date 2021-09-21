#include "main.h"

/**
 * _strlen - Returns the lenght of a given strings *s
 * @s: Input string
 *
 * Return: Returns an integer length
 */

int _strlen(char *s)
{
	int length = 0, i = 0;

	while (s[i] != '\0')
	{
		length++;
		s[i++];
	}
	return (length);
}
	
