#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of a function
 * @func: pointer to the function
 * @n: number of bytes
 *
 * Return: nothing
 */
void print_opcodes(void (*func)(), int n)
{
	int i;
	unsigned char *opcodes = (unsigned char *)func;

	for (i = 0; i < n; i++)
	{
		printf("%.2x", opcodes[i]);
		if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - print opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 for incorrect arguments, 
 * 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return 2;
	}
	print_opcodes((void *)&main, n);

	return 0;
}
