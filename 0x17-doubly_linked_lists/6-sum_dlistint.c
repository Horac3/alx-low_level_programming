#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in linked list.
 * @head: beginning of a node
 * Return: sum
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
