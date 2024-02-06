#include "lists.h"

/**
 * save_node - save the node in an array
 * @l: nodes list
 * @s: list size
 * @h: node
 *
 * Return: new list with new node
 */

const listint_t **save_node(const listint_t **l, int s, const listint_t *h)
{
	int i = 0;
	const listint_t **newLst = NULL;

	newLst = (const listint_t **)malloc(sizeof(listint_t *) * s);
	if (newLst == NULL)
	{
		free(newLst);
		free(l);
		exit(98);
	}
	for (; i < s - 1; i++)
	{
		newLst[i] = l[i];
	}
	newLst[i] = h;
	free(l);
	return (newLst);
}

/**
 * print_listint_safe - prints linked list
 * @head: list head
 *
 * Return: nodes number in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **lst = NULL;
	int i = 0;
	int size = 0;

	while (head != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (head == lst[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(lst);
				return (size);
			}
		}
		size++;
		lst = save_node(lst, size, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(lst);
	return (size);
}
