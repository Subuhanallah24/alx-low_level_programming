#include "function_pointers.h"

/**
 * print_name- Print name
 *
 * @name: The name to be printed
 * @f: The function to be called.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
