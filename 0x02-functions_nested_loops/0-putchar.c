#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * main: Prints _putchar
 * Return: Always 0.
 */

int main(void)
{
	char x[] = "_putchar";

	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
	return (0);
}
