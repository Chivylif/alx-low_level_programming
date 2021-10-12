#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 1;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			result = result * atoi(argv[i]);
		}
		return(result);
	}
}
