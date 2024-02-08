#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	unsigned char *c;

	i = 1;
	c = (unsigned char *)&i;

	return (*c);
}
