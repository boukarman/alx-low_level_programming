#include "lists.h"

/**
 * free_dlistint - free the doubly linked list
 * @head: head
 *
 * Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
