#include "main.h"

/**
 * main - copies a file
 * @argv: argument vector that containing the name of the files to copy and
 * and the file to be copied to.
 * @argc: the number of args passed to the program of which only 2 are valid
 * Return: exit with code 98 if file_from to copy from doesn't exist or cannot
 * be read
 * If, file_to cannot be created or written to exit with code 99
 * If,  file descriptor can not be closed exit with code 100
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, reach;
	char buffer[1024];
	#define MAX_SIZE 1024

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from <= 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to <= 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((reach = read(file_from, buffer, MAX_SIZE)))
		write(file_to, buffer, reach);
	if ((close(file_from) == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	if ((close(file_to) == -1))
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	return (0);
}
