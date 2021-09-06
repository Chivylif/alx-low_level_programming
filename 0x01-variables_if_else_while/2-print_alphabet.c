#include <stdio.h>

/**
 * main- Entry Point
 * Main: Print alphabets in lower case
 * Return: Always 0
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
		putchar('\n');
	}

	return (0);
}
