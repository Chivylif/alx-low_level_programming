#include "main.h"
int check_ifprime(int x, int y);

/**
 *is_prime_number - checks if a number is prime
 *@n: number to be checked
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n < 4)
	{
		return (1);
	}
	else
	{
		return (check_ifprime(n, 2));
	}
}

/**
 * check_ifprime - checks if a number x s prime
 * @x: input/number to be checked
 * @y:input that acts as a divisor
 *
 * Return: 1 if prime and 0 otherwise
 */

int check_ifprime(int x, int y)
{
	int i;

	i = x % y;
	if (i == 0)
	{
		return (0);
	}
	else if (y == x)
	{
		return (1);
	}
	else
	{
		return (check_ifprime(x, y + 1));
	}
}
