#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints the information stored in a dog structure.
 *
 * @d: Pointer to the dog structure to print.
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0.0;
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
