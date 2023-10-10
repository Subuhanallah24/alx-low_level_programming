#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include<stdio.h>

/**
 * new_dog - Creates a new dog structure with provided data.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog struction.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a = malloc(sizeof(dog_t));

	if (a == NULL)
	{
		return (NULL);
	}

	a->name = strdup(name);
	a->owner = strdup(owner);

	if (a->name == NULL || a->owner == NULL)
	{
		free(a->name);
		free(a->owner);
		free(a);
		return (NULL);
	}
	a->age = age;
	return (a);
}
