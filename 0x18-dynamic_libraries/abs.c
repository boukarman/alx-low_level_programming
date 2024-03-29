#include <stdio.h>
#include "main.h"
/**
 * _abs - abs
 *@n: number to check absolute value
 *
 * Return: absolute value of the variable
 */
int _abs(int n)
{
	int result;

	if (n > 0)
	{
		result = n;
	}
	else if (n == 0)
	{
		result = 0;
	}
	else
	{
		result = -n;
	}
	return (result);
}
