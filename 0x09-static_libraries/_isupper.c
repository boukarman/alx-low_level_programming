#include <stdio.h>
#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: character
 *
 * Description: check for uppercase characters
 * Return: 1 is uppercase
 * 0 if not
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
