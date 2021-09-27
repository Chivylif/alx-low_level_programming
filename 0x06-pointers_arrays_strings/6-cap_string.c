#include "main.h"
#include <stdio.h>

/**
 * cap_string - Converts the first character to uppercase
 * @str: String that its first character of every word is
 * to be converted to uppercase
 *
 * Return: A string
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] == ' ' ||
		    str[x] == '\t' ||
		    str[x] == '\n' ||
		    str[x] == ',' ||
		    str[x] == ';' ||
		    str[x] == '.' ||
		    str[x] == '!' ||
		    str[x] == '?' ||
		    str[x] == '"' ||
		    str[x] == '(' ||
		    str[x] == ')' ||
		    str[x] == '{' ||
		    str[x] == '}' ||
		    x - 1 == 0)
		{
			x++;
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}
