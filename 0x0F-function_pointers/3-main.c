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

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	/* Error if arguments are not 4 with the executable */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /*if argument is string convert to number*/
	num2 = atoi(argv[3]); /* as stated above */
	operator = argv[2];

	/* Error if operator is not null or a 2d array '\*' */
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Error if user tries to divide / (47) or % (37) by 0*/
	if ((*operator == 47 || *operator == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
