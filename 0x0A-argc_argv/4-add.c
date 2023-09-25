#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds up sets of command line arguement
 * @argv:an array of strings(command line arguements)
 * @argc: The size of array argv
 * Return: if a non numeric symbol is found return (-1) other (0)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
