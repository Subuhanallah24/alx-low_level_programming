#include <stdio.h>

/**
 * main - It print the number of arguments pass to it
 *
 * @argc: Arguments count.
 * @argv: Arguments vector.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
