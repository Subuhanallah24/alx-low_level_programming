#include <stddef.h>
#include "lists.h"


/**
 * list_len- count the number of element in the list.
 *
 * @h: The header.
 *
 * Return: The length of the list.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		len = len + 1;
		ptr = ptr->next;
	}

	return (len);
}
