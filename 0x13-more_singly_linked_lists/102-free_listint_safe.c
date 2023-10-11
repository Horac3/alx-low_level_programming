#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @h: A pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;

		free(current);
		if (next >= current)
		{
			*h = NULL;
			exit(98);
		}

		current = next;
	}
	*h = NULL;

	return (count);
}

#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to the pointer to the beginning of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *tmp;
	
	if (h == NULL)
		return (0);

    while (*h != NULL)
    {
        if ((*h)->next >= *h)
        {
            free(*h);
            *h = NULL;
            size++;
            break;
        }
        else
        {
            tmp = (*h)->next;
            free(*h);
            *h = tmp;
            size++;
        }
    }

    return (size);
}
