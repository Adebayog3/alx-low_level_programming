#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *listint - returns the numbers of elements in a linked listint_t
 * @h: The head of the lists
 * Return: The numbers of elements in node or 0
 */

size_t listint_len(const listint_t *h);
{
	size_t numElem = 0;

	while (h != NULL)

	{

	numElem++;
	h = h->next;

	}

	return (numElem);

}
