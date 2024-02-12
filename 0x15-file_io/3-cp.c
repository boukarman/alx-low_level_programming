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
 * @fd_from: file descriptor from
 * @fd_to: file desciroptor to
 *
 * Return: nothing
 */

void check_98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * check_99 - check that file descirptors was closed
 * @check: check if true or not
 * @file: file
 * @fd_from: file descriptor from
 * @fd_to: file descirptor to
 *
 * Return: nothing
 */
void check_99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}
/**
 * check_100 - check that file descirptor was closed
 * @check: check if true or not
 * @f_d: file descriptor
 *
 * Return: nothing
 */
void check_100(int check, int f_d)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if success or exit 97 if fail
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len_r, len_w;
	char buffer[BUFFER_SIZE];

	check_97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_98((ssize_t)fd_from, argv[1], -1, -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_99((ssize_t)f_to, argv[2], fd_from, -1);
	len_r = BUFFER_SIZE;
	while (len_r == BUFFER_SIZE)
	{
		len_r = read(fd_from, buffer, BUFFER_SIZE);
		check_98(len_r, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (len_w != len_r)
			len_w = -1;
		check_99(len_w, argv[2], fd_from, fd_to);
	}
	close_to = close(f_to);
	close_from = close(fd_from);
	check_100(close_to, fd_to);
	check_100(close_from, fd_from);
	return (0);
}
