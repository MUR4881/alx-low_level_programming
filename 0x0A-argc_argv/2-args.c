#include <stdio.h>

/**
 * main - prints all arguement passed to this program
 * @argv: array containing arguement & program name
 * @argc: size of @argv
 * Return: zero(0) which indicates success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
