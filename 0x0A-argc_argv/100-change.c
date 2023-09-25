#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins
 *to make change for an amount of money
 * @argv: argv[1] is used specifically in this case as the money
 * @argc: the  size of array @argv
 * Return: always zero (0), for changeability or 1 for non-changeable money
 */
int main(int argc, char *argv[])
{
	int count, cents, token, values[] = {25, 10, 5, 2, 1};

	token = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (cents = 0, count = 0; token > 0; count++)
	{
		if (token >= values[count])
		{
			cents += token / values[count];
			token = token % values[count];
		}
	}
	printf("%d\n", cents);
	return (0);
}
