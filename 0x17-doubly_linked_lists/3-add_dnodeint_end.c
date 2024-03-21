#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: head
 * @n: data
 *
 * Return: address of the new node or NULL if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head, *pnt = *head;

	if (*head == NULL)
	{
		tmp = malloc(sizeof(dlistint_t));
		if (tmp == NULL)
			return (NULL);
		tmp->n = n;
		tmp->prev = NULL;
		tmp->next = NULL;
		*head = tmp;
		return (tmp);
	}

	while (pointer->next != NULL)
		pnt = pnt->next;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = pnt;
	pnt->next = tmp;
	return (tmp);
}
