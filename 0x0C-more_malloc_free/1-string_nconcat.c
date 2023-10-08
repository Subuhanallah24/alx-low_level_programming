#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - Concatenates two strings with a limit on
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, i, j, t;
	char *point1;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (n >= s2len)
	{
		n = s2len;
	}

	t = s1len + n + 1;

	point1 = malloc(t * sizeof(char));

	if (point1 == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
	{
		point1[i] = s1[i];
	}

	for (j = 0; j < n; j++)
		point1[s1len + j] = s2[j];

	point1[t] = '\0';

	return (point1);

}
