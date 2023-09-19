#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */

void puts_half(char *str)
{
	int lenght = 0;
	int start;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	start = (lenght - 1) / 2 + 1;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');

}
