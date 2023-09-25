#include <stdio.h>

/**
 * main - a program that prints the name of the program it was compiled from
 * Return: always zero success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
