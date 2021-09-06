#include <stdio.h>

/**
 * main - Entry Point
 * main: Prints all one digit intergers in base 10
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

