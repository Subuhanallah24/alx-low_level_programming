#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint- delete the head node.
 *
 * @head: The head.
 *
 * Return: the value of the deleted node.
 */



int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int value;


	if (*head == NULL)
		return (0);


	value = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (value);
}
