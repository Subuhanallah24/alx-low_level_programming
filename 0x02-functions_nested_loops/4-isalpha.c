#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'A') || (c >= 'Z')) /** Check if c is in the lowercase range*/
		return (1);
	else
		return (0);
}

