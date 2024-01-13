#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the string from source to destination including
 * the null (\0) byte
 * @dest: destination character array
 * @src: source character array
 *
 * Return: array of characters
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest, *original_src;

	original_dest = dest;
	original_src = src;
	for (; *original_src != '\0'; original_src++, original_dest++)
		*original_dest = *original_src;
	*original_dest = '\0';
	return (dest);
}
