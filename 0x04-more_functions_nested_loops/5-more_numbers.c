#include "main.h"

/**
 * more_numbers - Print a sequence of numbers multiple times
 *
 * Description:
 * This function prints a sequence of numbers from 0 to 14, followed by a colon,
 * a total of 10 times, each on a new line. It uses the _putchar function to
 * print the numbers as characters.
 *
 * Return:
 * This function does not return a value (void).
 */

void more_numbers(void)
{
	int colon;
	int num;

	for (colon = 0; colon <= 10; colon++)
	{
		for (num = 0; num < 15; num++)
		{
			_putchar(num + '0');
		}

		_putchar(colon + '0');
	}

	_putchar('\n');

}
