#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name to be read and printed to stdout
 * @letters: the actual or total number of letters to be read to stdout
 * Return: the total number of letters (chars) it read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t bytes;
	char *s = malloc(letters);

	if (s == NULL)
		return (0);
	if (!(filename))
	{
		free(s);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(s);
		return (0);
	}
	bytes = read(fd, s, letters);
	if (!bytes)
	{
		close(fd);
		free(s);
		return (0);
	}
	close(fd);
	write(STDOUT_FILENO, s, bytes);
	free(s);

	return (bytes);
}
