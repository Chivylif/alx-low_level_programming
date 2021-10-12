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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
