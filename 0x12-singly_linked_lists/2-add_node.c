#include "lists.h"

/**
 * add_node - add a new node at the beggining of the list
 * @head: head list
 * @str: node content
 *
 * Return: new element @ and NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;

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
	curr->next = NULL;
	if (!(*head))
	{
		*head = curr;
	}
	else
	{
		curr->next = *head;
		*head = curr;
	}
	return (curr);
}
