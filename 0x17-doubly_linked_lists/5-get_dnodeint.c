#include "lists.h"

/**
 * get_dnodeint_at_index - return node of doubly linked list
 * @head: head
 * @index: index
 *
 * Return: the node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, size = 0;
	dlistint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	if (index >= size)
		return (NULL);
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
