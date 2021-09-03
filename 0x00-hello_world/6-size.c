#include <stdio.h>

/**
 *main - Entry point
 *main: Prints the size of all the various data types.
 *Return: Always 0
 */

int main(void)
{
int i;
char c;
float f;
long int l;
long long int r;


printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
