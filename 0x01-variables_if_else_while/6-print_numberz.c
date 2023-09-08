#include <stdio.h>

/**
 * main- this is the opeining fucntion.
 * it print to the console
 * Return: Always 0 (success)
 */


	int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar(base10 + '0');
	}
	putchar('\n');
	return (0);
}
