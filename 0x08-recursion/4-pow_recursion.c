#include "main.h"

/**
 * _pow_recursion - Calculates x raised to the power of y.
 *
 * @x: The base number.
 * @y: The exponent (a non-negative integer).
 *
 * Return:
 *   -1 if 'y' is negative.
 *   1 if 'y' is 0.
 *   The result of x raised to the power of 'y' otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
