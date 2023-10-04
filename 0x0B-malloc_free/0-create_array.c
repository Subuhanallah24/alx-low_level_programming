#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and initializes
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the newly created array
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
