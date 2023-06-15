#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index index of a list.
 * @head: beginning of a node
 * @index: node position
 * Return: -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	current = *head;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
		{
			if (current == *head)
				*head = current->next;
			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
