#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all inputed arguments
 *
 * @n: number of arguments.
 * @...: Variable number to be sum.
 *
 * Return:The sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, const unsigned int);
	}
	va_end(arg);

	return (sum);

}
