#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at the given position
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: address of the new node or NULL if fail
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0, i = 0;
	dlistint_t *pnt = *h, *tmp = *h, *pnt1 = *h;

	while (pnt != NULL)
	{
		size++;
		pnt = pnt->next;
	}
	if (idx > size)
		return (NULL);
	if (idx == 0)
	{
		tmp = add_dnodeint(h, n);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	else if (idx == size)
	{
		tmp = add_dnodeint_end(h, n);
		if (tmp == NULL)
			return (NULL);
		return (tmp);
	}
	while (i < idx - 1)
	{
		i++;
		pnt1 = pnt1->next;
	}
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = pnt1;
	tmp->next = pnt1->next;
	pnt1->next->prev = tmp;
	pnt1->next = tmp;
	return (tmp);
}
