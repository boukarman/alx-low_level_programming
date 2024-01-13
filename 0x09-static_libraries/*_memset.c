#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: string
 * @b: constant byte
 * @n: memory length
 *
 * Return: string filled with constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *clone;

	clone = s;
	for (i = 0; i < n; i++)
		*(clone + i) = b;
	return (s);
}
