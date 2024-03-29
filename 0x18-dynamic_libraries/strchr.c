#include <stdio.h>
#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to lockup on
 * @c: character to locate in the string
 *
 * Return: pointer to the first occurance fo the character c
 */
char *_strchr(char *s, char c)
{
	char *clone;

	clone = s;
	for (; *clone != '\0' && *clone != c; clone++)
	;
	return (c == '\0' ? clone : *clone == '\0' ? NULL : clone);
}
