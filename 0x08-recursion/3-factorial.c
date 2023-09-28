#include "main.h"

/**
 * factorial - Calculates the factorial of a non-negative integer.
 *
 * @n: The integer for which to calculate the factorial.
 *
 * Return:
 *   -1 if 'n' is negative.
 *   1 if 'n' is 0 or 1.
 *   The factorial of 'n' otherwise.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}

}
