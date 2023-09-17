#include <stdio.h>

/**
 * main - Entry point for printing Fibonacci sequence.
 *
 * Description: This program prints the first 50 numbers of the Fibonacci
 * sequence, starting with 1 and 2. It calculates each subsequent number
 * by adding the two previous ones.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n = 50;
	int i;
	unsigned long long first = 1, second = 2;

	printf("%llu, %llu", first, second);
	for (i = 3; i <= n; i++)
	{
		unsigned long long next = first + second;

		printf(", %llu", next);

		first = second;
		second = next;
	}
	printf("\n");


	return (0);
}
