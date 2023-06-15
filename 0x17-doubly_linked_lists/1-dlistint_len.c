#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - number of elements in a linked.
 * @h: parameter for all elements.
 *
 * Return: element count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
