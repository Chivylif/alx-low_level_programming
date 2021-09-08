#include <stdio.h>

/**
 * main - Entry point.
 * main: print all alphabets in reverse order
 * Return: Always 0.
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}	
	putchar('\n');
	return (0);
}
