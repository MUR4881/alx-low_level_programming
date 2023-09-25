#include <stdio.h>

/**
 * main - counts the number of arguement passed to it using argc
 * @argv: an array of passed arguement(strings)
 * @argc: the number of element in @argv
 * Return: always zero(0), indicating 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
