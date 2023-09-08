#include <stdio.h>

/**
 * main- this is the opening function.
 * it print on the console
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
