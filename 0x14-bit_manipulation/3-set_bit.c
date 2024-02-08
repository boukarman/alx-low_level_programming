#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 if success or -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8;

	if (index > bit)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
