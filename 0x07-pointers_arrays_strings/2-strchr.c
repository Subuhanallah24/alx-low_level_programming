#include "main.h"
#include <string.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: Pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */

char *_strchr(char *s, char c)
{

	size_t len = strlen(s);
	size_t i;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}

	}
			return (NULL);

}
