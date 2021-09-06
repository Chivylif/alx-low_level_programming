#include <stdio.h>

/**
 * main - Entry Point
 * main: Prints all single digit base 10 intergers.
 * Return: Always 0.
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x = x + 1;
	}
	printf("\n");

	return (0);
}
