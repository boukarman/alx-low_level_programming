#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: head list
 * @str: string
 *
 * Return: new element and NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = NULL;
	list_t *tail = NULL;

	curr = (list_t *)malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);
	if (str == NULL)
	{
		curr->str = NULL;
		curr->len = 0;
	}
	else
	{
		curr->str = strdup(str);
		curr->len = strlen(str);
	}
	if (!(*head))
	{
		*head = curr;
		tail = curr;
	}
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = curr;
	}
	return (curr);
}
