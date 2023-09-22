#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalizes the first letter of a word in the string.
 *
 * @string: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *string)
{
	int i;
	char add;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (strchr(" \t\n,;.!?\"(){}", string[i]) != NULL)
		{
			add = string[i + 1];
			if (add >= 'a' && add <= 'z')
			{
				string[i + 1] = add - 32;
			}

		}
	}
		return (string);

}
