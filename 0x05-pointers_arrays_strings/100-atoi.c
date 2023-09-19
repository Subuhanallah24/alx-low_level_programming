#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Initialize the sign as positive (1) */

	/* Skip leading whitespace characters */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	/* Check for a sign (+ or -) */
	if (*s == '-')
	{
		sign = -1; /* If there's a minus sign, set the sign as negative (-1) */
		s++;
	}
	else if (*s == '+')
		s++;

	/* Process the digits to build the integer */
	while (*s >= '0' && *s <= '9')
	{
		/**
		 * Calculate the new result by multiplying the current result by 10
		 * and adding the digit at the current position
		 */
		result = result * 10 + (*s - '0');
		s++;
	}

	/* Apply the sign to the result */
	return (result * sign);
}

