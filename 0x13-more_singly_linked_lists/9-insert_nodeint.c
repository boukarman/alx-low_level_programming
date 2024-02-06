#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given position
 * @head: list head
 * @idx: new node index
 * @n: data
 *
 * Return: new node address / NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = NULL, *node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
		if (curr == NULL)
			return (NULL);
	}
	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head  = node;
	}
	else
	{
		node->next = curr->next;
		curr->next = node;
	}
	return (node);
}
