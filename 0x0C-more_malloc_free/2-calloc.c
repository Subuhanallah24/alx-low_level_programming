#include <stdlib.h>
#include "main.h"

/**
 * _calloc- It initialize all the allocated memory to 0.
 *
 * @nmemb: number of elements.
 * @size: size of type.
 *
 * Return: return NULL if nmemb and size are 0
 *	return NULL if memory is not allocated
 *	and return if otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = (char *) malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		c[i] = 0;
	}

	return (c);
}
