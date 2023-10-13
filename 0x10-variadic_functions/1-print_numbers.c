#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of integers with a separator.
 *
 * @separator: The string to be printed between integers.
 * @n: The number of integers to print.
 * @...: Variable number of integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list arg;

	va_start(arg, n);


	for (i = 0; i < n; i++)
	{

		num = va_arg(arg, int);
		printf("%d", num);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(arg);

	printf("\n");

}
