#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	int sum = 0;

	for (number = 0; number < 1024; number++)

	{
		if (inumber % 3 == 0 || number % 5 == 0)
		{
			sum += number;
		}
	}

	printf("%d\n", sum);
	return (0);
}