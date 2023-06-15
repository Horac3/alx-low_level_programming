#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list..
 * @head: beginning of a node
 * @index: index position of a node
 * Return: NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	current = head;
	count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
