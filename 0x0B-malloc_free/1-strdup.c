#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string into a newly allocated memory space.
 *
 * @str: The string to duplicate.
 *
 * Return: Pointer to the newly allocated duplicated string.
 */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i;
	}

	a = (char *)malloc((j + 2) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= j; i++)
	{
		a[i] = str[i];
	}


	return (a);



}
