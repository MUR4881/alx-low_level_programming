#include <stdio.h>
/**
 * main - print  1 - 100, but Fizz, Buzz or FizzBuzz, if the number is a multiple of 3, 5 or both respectively.
 * Return: Zero success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5) + (i % 3) == 0)
			printf("FizzBuzz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return (0);
}
