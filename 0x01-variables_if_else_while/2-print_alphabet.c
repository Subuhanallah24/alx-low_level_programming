#include <stdio.h>

/**
 * main- this is the opeing function.
 * it prints to the console
 * Return: Always 0 (Success)
 */


	int main(void)
	{
		char currentChar = 'a';

		while (currentChar <= 'z')
		{
			putchar(currentChar);
			currentChar++;
		}
		putchar('\n');
		return (0);
	}
