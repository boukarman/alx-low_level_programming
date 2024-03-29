#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: result of concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *dest_clone, *src_clone;

	dest_clone = dest, src_clone = src;
	for (; *dest_clone != '\0'; dest_clone++)
		;
	for (; *src_clone != '\0'; src_clone++, dest_clone++)
	{
		*dest_clone = *src_clone;
	}
	*dest_clone = '\0';
	return (dest);
}
