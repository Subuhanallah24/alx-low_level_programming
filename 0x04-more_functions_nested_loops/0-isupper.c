#include "main.h"

/**
 * _isupper - uppercase letters
 * DESCRIPTION: it tells if a char is uppercase
 *@c - char to check
 *DESCRIPTION: the inputed character
 * Return : prints 1 if c is uppercase
*prints 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
