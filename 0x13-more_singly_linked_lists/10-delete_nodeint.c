#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to a pointer to the head of the list
 * @index: index of the list where the node should be deleted
 * Return: pointer to the new node, or NULL if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	if (*head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}

