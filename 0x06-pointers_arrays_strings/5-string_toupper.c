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
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{

	}

	if (string[i] >= 'a' && string[i] <= 'z')
	{
		string[i] = string[i] - 32;
	}

	else
	{
		string[i]  = string[i];
	}

	return (string);
}
