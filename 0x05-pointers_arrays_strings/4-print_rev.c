#include "main.h"
#include <string.h>

/**
 * print_rev - Reverses and prints the characters in a string.
 *
 * @s: Pointer to the string to be reversed and printed.
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
