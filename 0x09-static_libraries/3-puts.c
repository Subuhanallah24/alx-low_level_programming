#include "main.h"

/**
 * _puts - Prints a string followed by a newline character.
 *
 * @str: Pointer to the string to be printed.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);

	}
	_putchar('\n');
}
