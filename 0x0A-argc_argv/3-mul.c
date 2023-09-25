#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutliplies the first to arguement supplied to the program
 * @argv: an array of the arguements
 * @argc: the size of @argv
 * Return: 0 if possible or Error if wrong
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
