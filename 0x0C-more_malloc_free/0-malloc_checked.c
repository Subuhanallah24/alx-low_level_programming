#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * malloc_checked - Allocate memory and check for success
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void  *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}

	return (array);
}
