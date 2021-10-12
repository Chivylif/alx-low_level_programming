#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all the arguments passed into it
 *
 * @argc: the number of command line arguments
 * @argv: the array containing the program command line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
