#include "main.h"
#include <string.h>

/**
 * _memset - Fills a block of memory with a specified value.
 *
 * @s: Pointer to the memory block to be filled.
 * @b: The byte value to be set.
 * @n: The number of bytes to be set to the value 'b'.
 *
 * Return: Pointer to the memory block 's'.
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = n;


	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}

	return (s);



}
