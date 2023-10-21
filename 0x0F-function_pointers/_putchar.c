#include <stdlib.h>

/**
 * _putchar- prints a single letter.
 *
 * @c: character to be printed
 *
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
