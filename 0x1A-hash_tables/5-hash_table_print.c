#include "hash_tables.h"

/**
 * hash_table_print - print a hashtable
 *
 * @ht: hashtable
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");
			tmp = tmp->next;
			flag = 1;
		}
		if (ht->array[i + 1] != NULL && flag)
			printf(", ");
	}
	printf("}\n");
}
