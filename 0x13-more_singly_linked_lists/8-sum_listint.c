#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint- print the sum of the list values.
 *
 * @head: The head.
 *
 * Return: returns 0 if list is empty,otherwise
 * returns the sum of the values of the node.
 */


int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int n, sum = 0;

	/* If head is equal to NULL*/
	if (!head)
		return (0);

	/*while ptr is not equal to NULL*/
	while (ptr)
	{
		n = ptr->n;
		sum += n;
		ptr = ptr->next;
	}

	return (sum);
}
