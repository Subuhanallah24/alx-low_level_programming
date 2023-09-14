#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 *
 * @c: The character to be checked
 *
 * Description:
 * This function checks if the input character @c is a digit (0-9).
 *
 * Return:
 * Returns 1 if @c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
