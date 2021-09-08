#include <stdio.h>

/**
 * main - Entry point.
 * main: Print all hexadecimals in lower case
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
