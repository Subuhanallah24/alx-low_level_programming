#include "lists.h"


/**
 * listint_len- Prints the number of nodes in a list.
 *
 * @h: The header.
 *
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t node = 0;

	for (; ptr != NULL; node++)
	{
		ptr = ptr->next;
	}

	return (node);
}
