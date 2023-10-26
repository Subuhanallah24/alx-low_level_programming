#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- delete node at the given index.
 *
 * @head:The head.
 * @index: The index of the node.
 *
 * Return: return 1 if success, otherwise return -1.
 */



int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *tmp;
	unsigned int track_index = 0;

	if (*head)
	{
		if (index == 0)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
	}

	while (ptr)
	{
		track_index++;
		if (track_index == index)
		{
			tmp = ptr->next;
			ptr->next = ptr->next->next;
			free(tmp);
			return (1);
		}

		ptr = ptr->next;
	}

	return (-1);
}
