#include "main.h"

/**
 * check_97 - check the correct number of arguments
 * @argc: number of arguments
 *
 * Return: nothing
 */

void check_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_98 - check that file descirptor was closed
 * @check: check if true or not
 * @file: file
 * @fdes_from: file descriptor from
 * @fdes_to: file desciroptor to
 *
 * Return: nothing
 */

void check_98(ssize_t check, char *file, int fdes_from, int fdes_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fdes_from != -1)
			close(fdes_from);
		if (fdes_to != -1)
			close(fdes_to);
		exit(98);
	}
}
/**
 * check_99 - check that file descirptors was closed
 * @check: check if true or not
 * @file: file
 * @fdes_from: file descriptor from
 * @fdes_to: file descirptor to
 *
 * Return: nothing
 */
void check_99(ssize_t check, char *file, int fdes_from, int fdes_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fdes_from != -1)
			close(fdes_from);
		if (fdes_to != -1)
			close(fdes_to);
		exit(99);
	}
}
/**
 * check_100 - check that file descirptor was closed
 * @check: check if true or not
 * @f_des: file descriptor
 *
 * Return: nothing
 */
void check_100(int check, int f_des)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_des);
		exit(100);
	}
}
/**
 * main - entry function
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if success or exit 97 if fail
 */
int main(int argc, char **argv)
{
	int fdes_from, fdes_to, close_to, close_from;
	ssize_t len_r, len_w;
	char buffer[BUFFER_SIZE];

	check_97(argc);
	fdes_from = open(argv[1], O_RDONLY);
	check_98((ssize_t)fdes_from, argv[1], -1, -1);
	fdes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_99((ssize_t)fdes_to, argv[2], fdes_from, -1);
	len_r = BUFFER_SIZE;
	while (len_r == BUFFER_SIZE)
	{
		len_r = read(fdes_from, buffer, BUFFER_SIZE);
		check_98(len_r, argv[1], fdes_from, fdes_to);
		len_w = write(fdes_to, buffer, len_r);
		if (len_w != len_r)
			len_w = -1;
		check_99(len_w, argv[2], fdes_from, fdes_to);
	}
	close_to = close(fdes_to);
	close_from = close(fdes_from);
	check_100(close_to, fdes_to);
	check_100(close_from, fdes_from);
	return (0);
}
