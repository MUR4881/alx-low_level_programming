#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - performs basic arithmetic operations and print result to stdout
 * @argv: array of character to command line input(argument)
 * @argc: The size of argv
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	f = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((f == op_mod || f == op_div) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}


