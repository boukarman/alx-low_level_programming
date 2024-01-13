#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: a string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
