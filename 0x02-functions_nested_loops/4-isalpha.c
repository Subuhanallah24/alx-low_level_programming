#include "main.h"
#include <ctype.h>


/**
 * _isalpha - Checks if a character is a letter (lowercase or uppercase)
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; // Yes, it's a letter
    } else {
        return 0; // No, it's not a letter
    }
}

