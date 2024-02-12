#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: filename
 * @text_content: text to append
 *
 * Return: 1 if success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, len = 0, w, i;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY, 0664);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
