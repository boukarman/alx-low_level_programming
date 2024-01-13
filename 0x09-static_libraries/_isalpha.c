#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if character is lowercase of uppercase
 * @c: character
 *
 * Return: if character is letter return 1
 * or return 0
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
