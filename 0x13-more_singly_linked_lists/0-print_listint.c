#include "lists.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_listint- prints list of integer
 *
 * @h: The header.
 *
 * Return: the number of node.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t node = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);

		ptr = ptr->next;
		node++;
	}

	return (node);

}
