#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints the sum of the arguments only if there are numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Return 1 if  atoi = 0 Returns 0 if otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");

			return (1);
		}
	}

	if (argc > 2)
	{
		for (j = 1; j < argc; j++)
		{
			sum += atoi(argv[j]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
