#include <stdio.h>

/**
 * main - prints all the command passed on the cmd
 * @argc: number of command typed
 * @argv: array containing the commands typed
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, count;

	i = 1;
	if (i == argc)
	{
		printf("%d\n", 0);
	}
	else
	{
		count = 0;
		while (i < argc)
		{
			count++;
			i++;
		}
		printf("%d\n", count);
	}
	return (0);
}
