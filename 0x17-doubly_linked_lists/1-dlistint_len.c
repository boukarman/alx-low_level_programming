#include "lists.h"

/**
 * dlistint_len - number of elements in a doubly linked list
 * @h: head
 *
 * Return: number of nodes or 0 if empty
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
