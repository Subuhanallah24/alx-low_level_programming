#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints list.
 * @h: The head
 *
 * Return: number of node.
 */

size_t print_list(const list_t *h)
{
	size_t num_node = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		num_node = num_node + 1;
		ptr = ptr->next;
	}

	return (num_node);
}
