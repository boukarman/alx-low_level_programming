#include <stdio.h>
#include "main.h"
/**
 * _islower - check if charcter is lowercase of not
 *@c: character
 *
 * Return: if character is lowercase return 1 if
 * not return 0
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
