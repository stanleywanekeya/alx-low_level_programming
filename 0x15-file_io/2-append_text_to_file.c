#include "main.h"

/**
 * append_text_to_file - appends string to file
 * @filename: path to file
 * @text_content: string
 * Return: value (1) for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, sz;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			++len;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	sz = write(fd, text_content, len);

	if (fd == -1 || sz == -1)
		return (-1);
	close(fd);
	return (1);
}
