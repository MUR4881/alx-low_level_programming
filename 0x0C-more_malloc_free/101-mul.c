#include "main.h"

/**
 * main -function to  multiply two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: the  int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int d, k;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (d = 1; d < argc; d++)
	{
		for (k = 0; argv[d][k] != '\0'; k++)
		{
			if (argv[d][k] > 57 || argv[d][k] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
