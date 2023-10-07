#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This program calculates the minimum number of coins needed to
 * make change for a given amount in cents.
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, cent, coin[] = {25, 10, 5, 2, 1}, coin_count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cent >= coin[i])
		{
			cent -= coin[i];
			coin_count++;
		}
	}
	printf("%d\n", coin_count);

	return (0);
}
