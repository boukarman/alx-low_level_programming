#include "hash_tables.h"

/**
 * hash_table_create - create Hashtable
 *
 * @size: size of Hashtable
 *
 * Return: Hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * ht->size);
	if (ht->array == NULL)
	{
		free(ht), ht = NULL;
		return (NULL);
	}
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}
