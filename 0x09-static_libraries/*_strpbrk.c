#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes string
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *clone;
	int found, i;

	clone = s;
	found = 0;
	for (; *clone != '\0'; clone++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *clone)
			{
				found = 1;
				break;
			}
		}
		if (found)
			break;
	}
	if (found)
		return (clone);
	return (NULL);
}
