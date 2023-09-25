#include <stdio.h>
/**
 * main - prints the name of the program
 * @argv: an array of the command line arguement passed to the this program
 * @argc: The size of argv
 * Return: Always zero(0) success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
