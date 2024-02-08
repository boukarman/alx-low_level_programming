#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (; bit > 0; bit--)
	{
		if (flag == 0)
		{
			if ((n >> (bit - 1)) & 1)
			{
				_putchar('1');
				flag = 1;
			}
		}
		else
			((n >> (bit - 1)) & 1) ? _putchar('1') : _putchar('0');
	}
}
