#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index- the a new node at the given index.
 *
 * @head: The head.
 * @idx: The index of the node.
 * @n: the value of the new node.
 *
 * Return: return null if newNode is null, otherwise
 * returns the address of the newNode.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *newNode;
	unsigned int track_index = 1;

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		newNode->next = NULL;
		newNode->n = n;
		*head = newNode;
		return (newNode);
	}
	while (ptr)
	{
		track_index++;
		if (track_index == idx + 1)
		{
			newNode = malloc(sizeof(listint_t));

			/*if newNode is NULL*/
			if (!newNode)
				return (NULL);
			newNode->next = (ptr)->next;
			newNode->n = n;

			(ptr)->next = newNode;
			return (newNode);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
