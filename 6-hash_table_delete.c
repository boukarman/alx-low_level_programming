#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 *
 * REturn: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *current = NULL;
	unsigned long int i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			tmp->next = NULL;
			free(tmp->value), tmp->value = NULL;
			free(tmp->key), tmp->key = NULL;
			free(tmp), tmp = NULL;
		}
	}
	free(ht->array), ht->array = NULL;
	free(ht), ht = NULL;
}
