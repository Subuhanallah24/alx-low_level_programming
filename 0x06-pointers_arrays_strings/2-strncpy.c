#include "main.h"
#include <string.h>

/**
 * _strncpy - Pointer that print word that are copied
 *
 * @dest: Pointer for destination character
 * @src: Source pointer
 * @n: receive the number of character
 *
 * Return: word
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *word  = strncpy(dest, src, n);

	return (word);

}
