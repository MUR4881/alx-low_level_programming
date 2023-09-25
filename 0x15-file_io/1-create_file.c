#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text content to be inserted into the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd <= 0)
		return (-1);
	for (len = 0; text_content[len];)
		len++;
	len++;
	write(fd, text_content, len);
	return (1);
}
