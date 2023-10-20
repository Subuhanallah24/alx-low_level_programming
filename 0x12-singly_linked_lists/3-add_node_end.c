#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end- add node to the end of a list.
 *
 * @head: The head
 * @str: The string.
 *
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup = strdup(str);
	list_t *current = *head;
	unsigned int len = 0;

	list_t *newNode = malloc(sizeof(list_t));

	while (str[len] != '\0')
		len++;


	if (newNode == NULL)
		return (NULL);

	if (str_dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = str_dup;
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);

}
