#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes most used from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_clone, *src_clone;
	int i;

	dest_clone = dest, src_clone = src;
	for (; *dest_clone != '\0'; dest_clone++)
	;
	for (i = 0; i < n && *src_clone != '\0'; dest_clone++, src_clone++, i++)
		*dest_clone = *src_clone;
	*dest_clone = '\0';
	return (dest);
}
