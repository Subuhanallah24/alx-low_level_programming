#include <stdio.h>
#include <stdlib.h>

/**
 * main  - It prints the multiplication of some input arguments
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 1 if argc is equal to 1 and 0 otherwise.
 */


int main(int argc, char **argv)
{
	int mul1, mul2;

	if (argc <= 2)
	{
		printf("Error\n");

		return (1);
	}

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	printf("%d\n", mul1 * mul2);

	return (0);
}
