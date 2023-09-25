#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: null terminal string to be appended
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bs;
	ssize_t wr;

	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd <= 0)
			return (-1);
		if (text_content)
		{
			for (bs = 0; text_content[bs];)
				bs++;
			wr = write(fd, text_content, bs);
			if (wr < 0)
				return (-1);
		}
		return (1);
	}
	return (-1);
}

