#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print listint - all the elements of a listint_t
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);

}
