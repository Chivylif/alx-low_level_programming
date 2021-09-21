#include <stdio.h>

/**
 * A program that prints from 1 to 100
 * Return: Always 0.
 *
 */

int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3) == 0)
		{
			printf("Fizz \n");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz \n");
		}
		else if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz \n");
		}	
		else
		{
			printf("%d \n", x);
		}
	}
}
