#include <stdio.h>

/**
 * main - prints name followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
