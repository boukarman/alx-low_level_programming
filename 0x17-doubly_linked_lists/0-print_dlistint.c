#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: head
 *
 * Return: size of doubly linkded list or 0 if empty
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
