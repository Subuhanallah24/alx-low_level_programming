#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index- Gives us the address of the nth node.
 *
 * @head: The head.
 * @index: The index of the nth node.
 *
 * Return: If track_index equals to the index plus 1
 *	then returns the address of the nth node
 *	otherwise return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int track_index = 0;

	while (ptr)
	{
		track_index++;
		if (track_index == (index + 1))
		{
			return (ptr);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
