#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses and prints the characters in a string.
 *
 * @s: Pointer to the string to be reversed and printed.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

}
