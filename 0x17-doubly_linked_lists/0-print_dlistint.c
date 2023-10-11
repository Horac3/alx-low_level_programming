#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  prints all the elements.
 * @h: parameter for all elements.
 *
 * Return: element count.
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
