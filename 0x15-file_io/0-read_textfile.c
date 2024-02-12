#include "main.h"

/**
 * read_textfile - read text file and print it to the standard output
 * @filename: the filename
 * @letters: number of letters should be readed and printed
 *
 * Return: number of bytes could readed and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_out, bytes_r, bytes_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_out = open(filename, O_RDONLY);
	bytes_r = read(file_out, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (file_out == -1
			|| bytes_r == -1
			|| bytes_w == -1
			|| bytes_r != bytes_w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_out);
	return (bytes_w);

}
