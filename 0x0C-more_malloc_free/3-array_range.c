#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers represent
 *
 * @min: The starting value of the range.
 * @max: The ending value of the range.
 *
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, num;
	int *minmax;

	if (min > max)
		return (NULL);

	num = max - min + 1;
	minmax = (int *) malloc(num * sizeof(int));

	if (minmax == NULL)
		return (NULL);

	i = 0;
	for (; min <= max; min++)
	{
		minmax[i] = min;
		i++;
	}

	return (minmax);
}
