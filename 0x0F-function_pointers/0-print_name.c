#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- Print name
 *
 * @name: The name to be printed
 * @f: The function to be called.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	f(name);
}
