#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    dlistint_t *current = *h;
    unsigned int count = 0;

    while (current != NULL)
    {
        if (count == idx)
        {
            new_node->prev = current->prev;
            new_node->next = current;
            if (current->prev != NULL)
                current->prev->next = new_node;
            current->prev = new_node;
            return new_node;
        }

        current = current->next;
        count++;
    }

    free(new_node);
    return NULL;
}