#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint- Add node at the beginning
 *
 * @head: The head
 * @n: the value n
 *
 * Return: The address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);


}
