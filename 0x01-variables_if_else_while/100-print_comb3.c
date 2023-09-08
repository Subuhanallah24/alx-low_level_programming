#include <stdio.h>

/**
*main- this is the opeining function
*it print in the console
*Return: Always 0 (success)
*/

int main(void)
{
	int first_digit = 0;
	int second_digit = 1;

	while (first_digit <= 8)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 9)
		{
			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (first_digit < 8 || second_digit < 9)
			{
				putchar(',');
				putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
	putchar('\n');

	return (0);
}

