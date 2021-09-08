#include <stdio.h>

/**
 * main - Entry Point.
 * main: Prints all the possible combination of single digits
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '8'; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	x = '9';

	putchar(x);
	putchar('\n');
	return (0);
}
