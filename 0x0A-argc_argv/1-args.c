#include <stdio.h>

/**
 * main - prints the number of the passed arguments
 * @argc: argument count
 * @argv: arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
