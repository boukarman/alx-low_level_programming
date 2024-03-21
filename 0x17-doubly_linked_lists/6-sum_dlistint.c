#include "lists.h"

/**
 * sum_dlistint - sum of all the data of doubly linked list
 * @head: head
 *
 * Return: sum of all numbers or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
