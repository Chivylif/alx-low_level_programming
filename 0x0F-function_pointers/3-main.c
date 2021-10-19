#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.(On Success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *opss;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opss = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(opss) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opss == '/' && num2 == 0) ||
	    (*opss == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opss)(num1, num2));

	return (0);
}
