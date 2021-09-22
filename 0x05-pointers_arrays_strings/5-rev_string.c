#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 */

void rev_string(char *s)
{
	int x, length2, length = 0;
	char rev;

	x = 0;
	while (s[x] != '\0')
	{
		length++;
		x++;
	}
	length = length - 1;
	for (length2 = 0; length2 <= length; length2++)
	{
		rev = s[length2];
		s[length2] = s[length];
		s[length] = rev;
		length--;
	}
}
