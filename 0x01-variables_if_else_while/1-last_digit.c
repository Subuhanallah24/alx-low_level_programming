#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- this is the main funciton where the program start.
 * It print to the console
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	printf("Last digit of %d is", n);

	if (last_digit > 5)
	{
		printf(" %d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf(" %d and is 0\n", last_digit);
	}
	else
	{
		printf(" %d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}
