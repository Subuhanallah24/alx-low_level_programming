#include <stdio.h>

/**
 * main- this is the opeing function.
 * it prints to the console
 * Return: Always 0 (Success)
 */


	int main(void)
	{
		char currentChar = 'a';
		char uppercase = 'A';

		while (currentChar <= 'z')
		{
			putchar(currentChar);
			currentChar++;
		}
		while (uppercase <= 'Z')
		{
			putchar(uppercase);
			uppercase++;
		}
		putchar('\n');
		return (0);
	}
