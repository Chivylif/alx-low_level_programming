#include "main.h"

/**
 * leet - Encode a string to leet
 * @str: String to be encoded to leet
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j = 0;

	char str2[8] = {'O', 'L', '?', 'E', 'A'; '?', '?', 'T'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; str2[j] < 8; j++)
		{
			if (str[i] == str2[j] ||
			str[i] - 32 == str2[j])
			{
				str[i] = j;
			}
		}
	}
	return (str);
}
