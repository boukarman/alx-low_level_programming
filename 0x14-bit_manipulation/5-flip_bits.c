#include "main.h"

/**
 * flip_bits - number to flip to get from one number
 * to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = sizeof(n) * 8;
	unsigned long int difference = n ^ m;
	unsigned long int result = 1;
	unsigned long int i = 0;
	int number = 0;

	for (; i < bit; i++)
	{
		if (result & difference)
			number++;
		result <<= 1;
	}
	return (number);
}
