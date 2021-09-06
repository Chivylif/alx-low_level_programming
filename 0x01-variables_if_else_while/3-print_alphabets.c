#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point.
 * Main: Prints all alphabets in both lower and upper case.
 * Return: Always 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		char upper_x = toupper(x);

		putchar(upper_x);
	}
	putchar('\n');
	return (0);
}

