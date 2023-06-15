#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL)
        return -1;

    dlistint_t *current = *head;
    unsigned int count = 0;

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
            return 1;
        }

        current = current->next;
        count++;
    }

    return -1;
}