#include "main.h"

/**
 * append_text_to_file - appends string to file
 * @filename: path to file
 * @text_content: string
 * Return: value (1) for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int sz, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	sz = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);
	close(sz);
	return (1);
}
