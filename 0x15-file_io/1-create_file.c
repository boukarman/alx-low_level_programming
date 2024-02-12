#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: string to write on file
 *
 * Return: 1 if success or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, i, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
