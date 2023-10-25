#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- free list
 * @head: The head.
 */


void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head != NULL)
	{
		current = head;
		free(current);
		head = head->next;
	}
}
