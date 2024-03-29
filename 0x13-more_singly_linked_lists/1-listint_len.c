#include "lists.h"

/**
 * listint_len - return number of elements in linked list
 * @h: head of list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
