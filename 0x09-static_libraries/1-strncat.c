#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two string given
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: The given numbers of character
 *
 * Return: word
 */


char *_strncat(char *dest, char *src, int n)
{
	char *word = strncat(dest, src, n);

	return (word);

}
