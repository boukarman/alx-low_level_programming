#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: head list
 * Return: number of elements in the linkedlist
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
