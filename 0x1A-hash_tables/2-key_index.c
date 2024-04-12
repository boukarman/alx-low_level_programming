#include "hash_tables.h"

/**
 * key_index - index of a key
 *
 * @key: key to hash
 * @size: size of the array of the hashtable
 *
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
