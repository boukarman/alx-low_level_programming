#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: a character
 *
 * Description: check for a digit
 * Return: 1 is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
