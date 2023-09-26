#include "main.h"
#include <string.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	return (strchr (s, c));

}
