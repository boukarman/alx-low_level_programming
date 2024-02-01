#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *curr = NULL;
	list_t *tmp = NULL;

	if (head == NULL)
		return;
	curr = head;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp->str);
		free(tmp);
	}
}
