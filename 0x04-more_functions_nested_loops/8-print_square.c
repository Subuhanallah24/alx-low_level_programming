#include "main.h"


/**
 * print_square - Prints a square of a specified size using '#' characters.
 *
 * @size: The size of the square to be printed.
 */


void print_square(int size)
{

	if (size > 0)

	{
		int row, colomn;

		for (colomn = 0; colomn < size; colomn++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

		_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
