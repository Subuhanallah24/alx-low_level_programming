#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 *
 * Return:
 *   0 if the strings are equal.
 *   A positive value if s1 is greater than s2.
 *   A negative value if s1 is less than s2.
 */

int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
