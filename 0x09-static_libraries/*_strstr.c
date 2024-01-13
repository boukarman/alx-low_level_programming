#include <stdio.h>
#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: the original string
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int lenh, lenn, i, j, k, lenTest;

	for (lenh = 0; haystack[lenh] != '\0'; lenh++)
	;
	for (lenn = 0; needle[lenn] != '\0'; lenn++)
	;
	if (lenn > lenh)
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		lenTest = 0;
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (haystack[k] != needle[j])
				break;
			lenTest++;
		}
		if (lenTest == lenn)
			return (haystack + i);
		i = k;
	}
	return (NULL);
}
