#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 if success or -1 if failes
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index > size)
		return (-1);
	if (*n & (1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
