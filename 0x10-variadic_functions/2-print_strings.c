#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string on the console.
 *
 * @separator: a separator string.
 * @n: Number of argument(s) passed into the function.
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list arg;

	va_start(arg, n);

	for (i = 1; i <= n; i++)
	{
		string = va_arg(arg, char*);

		if (string == NULL)
			printf("(nil)");

		else
		{
			printf("%s", string);

			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(arg);

	printf("\n");

}
