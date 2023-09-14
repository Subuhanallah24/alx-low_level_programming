#include "main.h"

/**
 * _isupper - it tells us if a character is in uppercase
 *DESCRIPTION : it tells us if a character is in uppercse
 *@c - it takes the input
 * Return : prints 1 if c is uppercase
*prints 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
