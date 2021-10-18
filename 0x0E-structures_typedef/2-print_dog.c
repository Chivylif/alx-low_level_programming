#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A functions that prints a struct dog
 * @d: variable containing the info about the dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.5f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}