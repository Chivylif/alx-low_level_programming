#include <stdio.h>
#include <stdlib.h>

/**
 * main -  A program that prints from 1 to 100
 * Return: Always 0.
 *
 */

int main(void)
{
	int x;
	char y[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s ", y);
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
