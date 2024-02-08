#include "main.h"

/**
 * get_bit - get value of bit at a given index
 * @n: number to manipulate
 * @index: index to check
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8;

	if (index > bit)
		return (-1);
	return (n & (1 << index) ? 1 : 0);
}
