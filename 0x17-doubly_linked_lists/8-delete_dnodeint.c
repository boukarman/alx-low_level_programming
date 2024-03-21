#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a position
 * @head: head
 * @index: index
 *
 * Return: 1 if deletion successfull or 0 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int size = 0, i = 0;
	dlistint_t *pnt = *head, *tmp = *head, *pnt1 = *head;

	if (*head == NULL)
		return (-1);
	while (pnt1 != NULL)
	{
		size++;
		pnt1 = pnt1->next;
	}
	if (index >= size)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		(*head)->prev = NULL;
		return (1);
	}
	else if (index == size - 1)
	{
		while (pnt->next != NULL)
			pnt = pnt->next;
		pnt->prev->next = NULL;
		free(pnt);

		return (1);
	}
	while (i < index)
	{
		i++;
		pnt = pnt->next;
	}
	pnt->next->prev = pnt->prev;
	pnt->prev->next = pnt->next;
	free(pnt);
	return (1);
}
