#include "search_algos.h"


/**
 * Performs a jump search on a singly linked list to find a specific value.
 *
 * @param list A pointer to the head of the linked list.
 * @param size The size of the linked list.
 * @param value The value to search for in the linked list.
 * @return A pointer to the node containing the target value if found, otherwise NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, step_size;
    listint_t *node, *jump;

    if (list == NULL || size == 0)
        return (NULL);

    step = 0;
    step_size = sqrt(size);
    for (node = jump = list; jump->index + 1 < size && jump->n < value;)
    {
        node = jump;
        for (step += step_size; jump->index < step; jump = jump->next)
        {
            if (jump->index + 1 == size)
                break;
        }
        printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           node->index, jump->index);

    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
