#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int x = str[i];

		_putchar(x);
	}
	_putchar('\n');
}