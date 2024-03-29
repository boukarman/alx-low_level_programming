#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int minus, plus, sign, len, multiplier, result;
	char *slen;

	minus = 0, plus = 0, len = 0, multiplier = 1, result = 0;
	while ((*s < 48 || *s > 57) && *s != '\0')
	{
		if (*s == '-')
			minus++;
		else if (*s == '+')
			plus++;
		s++;
	}
	if (*s == '\0')
	{
		result = 0;
	}
	else
	{
		sign = (minus % 2 != 0) ? -1 : 1;
		slen = s;
		while (*slen >= 48 && *slen <= 57)
		{
			len++;
			slen++;
		}
		while (len > 1)
		{
			multiplier *= 10;
			len--;
		}
		while (multiplier != 1)
		{
			result += multiplier * ((*s) - 48) * sign;
			s++;
			multiplier /= 10;
		}
		result = result + ((*s) - 48) * sign;
	}
	return (result);
}
