#include "main.h"


/**
 * string_toupper - Converts lowercase characters in a string to uppercase.
 *
 * @string: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *string)
{
	int i, u, len;

	for (i = 0; string[i] != '\0'; i++)
	{
		len = i;
	}

	for (u = 0; u < len; u++)
	{
		if (string[u] >= 'a' && string[u] <= 'z')
		{
			string[u] = string[u] - 32;
		}

		else
		{
			string[u]  = string[u];
		}
	}

	return (string);
}
