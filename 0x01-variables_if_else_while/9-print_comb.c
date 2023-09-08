#include <stdio.h>

/**
*main- this is the first function.
*it prints to the console
*Return: Always 0 (success)
*/
int main(void)
{
	int number = 0; /** Initialize the number to 0*/

	while (number <= 9)
{
		putchar(number + '0'); /** Print the current digit as a character*/
		if (number < 9)
{
			putchar(','); /* Print a comma if the number is less than 9*/
			putchar(' '); /** Print a space after the comma*/
}
		number++;
	}

	putchar('\n');
	return (0);
}

