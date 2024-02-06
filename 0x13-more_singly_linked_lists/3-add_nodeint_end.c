#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: list head
 * @n: info
 *
 * Return: new element address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *curr = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
	}
	return (node);
}
