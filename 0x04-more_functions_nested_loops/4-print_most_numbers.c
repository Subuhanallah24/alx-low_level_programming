#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 excluding 2 and 4
 *
 * Description:
 * This function prints numbers from 0 to 9, excluding the numbers 2 and 4.
 * It uses the _putchar function to print the numbers as characters.
 *
 * Return:
 * This function does not return a value (void).
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
	_putchar(num + '0');
	}
	_putchar('\n');
}
