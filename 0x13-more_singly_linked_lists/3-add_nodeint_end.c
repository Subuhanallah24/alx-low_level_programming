#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end- Add node at the end of the list.
 *
 * @head: The head.
 * @n: The value
 *
 * Return: address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = *head;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (ptr == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = tmp;

	return (tmp);
}
