#include "hash_tables.h"

/**
 * create_node - create a node
 * @key: key
 * @value: value
 *
 * Return: node or NULL
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *hn = NULL;

	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (NULL);
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn), hn = NULL;
		return (NULL);
	}
	hn->value = strdup(value);
	if (hn->value == NULL)
	{
		free(hn->key), hn->key = NULL;
		free(hn), hn = NULL;
		return (NULL);
	}
	hn->next = NULL;
	return (hn);
}

/**
 * hash_table_set - add element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 in success or 0 if not 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn = NULL, *tmp = NULL;
	char *new_value = NULL;
	unsigned long int bucketIndex;

	if (ht == NULL || strlen(key) == 0 || key == NULL || value == NULL ||
	    ht->size == 0 || ht->array == NULL)
		return (0);

	bucketIndex = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[bucketIndex];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value), tmp->value = NULL;
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hn = create_node(key, value);
	if (hn == NULL)
		return (0);
	hn->next = ht->array[bucketIndex];
	ht->array[bucketIndex] = hn;

	return (1);
}
