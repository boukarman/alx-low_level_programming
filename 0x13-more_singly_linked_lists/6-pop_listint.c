#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: list head
 *
 * Return: head nodes data or 0 if head = null
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	curr = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = curr;
	return (data);
}
