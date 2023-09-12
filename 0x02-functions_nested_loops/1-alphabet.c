#include <stdio.h>
#include "main.h"

/**
 * main - it is the entry point of our pogram
 * it let us make use the  printf function
 * print_alphabet - it print the alphabets in lowercase
 * Return : Always 0 (success)
 */

int main(void)
{

	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	for (char start = 'a' ; start <= 'z'; start++)
	{
		_putchar(start);
	}

}
