#include "lists.h"

/**
 * add_nodeint - add a new node at the begginning of a list
 * @head: head list
 * @n: info
 *
 * Return: new element adress / or Null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
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
		node->next = *head;
		*head = node;
	}
	return (node);
}
