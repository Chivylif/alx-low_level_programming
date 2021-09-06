#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- Entry Point
 * main: Print a random last number of n
 * Return: Always 0
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10; /* Where m is the last digit of number n. */

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}

	return (0);
}
