#include <string.h>
#include "lists.h"
#include <stdlib.h>


/**
 * add_node- add node to the beginnng of a list
 *
 * @head: The head
 * @str: The data string
 *
 * Return: Return the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len_str = 0;
	char *dup = strdup(str);
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	while (str[len_str] != '\0')
		len_str++;

	if (dup == NULL)
	{
		return (NULL);
	}
	newNode->str = dup;
	newNode->len = len_str;
	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}
