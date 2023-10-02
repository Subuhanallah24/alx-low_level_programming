#include "main.h"


/**
 * _memcpy - Copies a block of memory from source to destination.
 *
 * @dest: Pointer to the destination memory block.
 * @src: Pointer to the source memory block.
 * @n: The number of bytes to be copied from source to destination.
 *
 * Return: Pointer to the destination memory block 'dest'.
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}
