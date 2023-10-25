#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- free list
 * @head: The head.
 */


void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	
	if (*head == NULL)
		exit(0);

	while (*head != NULL)
	{
		current = *head;
		(*head) = (*head)->next;
		free(current);
	}

	*head = NULL;
}
