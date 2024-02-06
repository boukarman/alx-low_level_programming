#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a linked list
 * @head: list head
 * @index: index position to clear
 *
 * Return: 1 if success / -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *tmp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index != 0)
	{
		curr = *head;
		prev = NULL;
		for (i = 0; i < index && curr != NULL; i++)
		{
			prev = curr;
			curr = curr->next;
		}
		if (curr == NULL)
			return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = curr;
	prev->next = curr->next;
	free(tmp);
	return (1);

}
