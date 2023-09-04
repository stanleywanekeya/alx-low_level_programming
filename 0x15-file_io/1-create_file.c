#include "main.h"

/**
 * create_file - creates new file
 * @filename: path to file
 * @text_content: content string
 * Return: value 1 for success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz, len;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; ++len)
			;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (0);
	}
	else
	{
		sz = write(fd, text_content, len);
		if (sz == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
