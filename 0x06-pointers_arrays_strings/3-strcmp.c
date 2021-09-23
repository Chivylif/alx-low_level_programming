#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
i * @s2: second string
 *
 * Return: return a positive, a negative integer or 0
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
}
