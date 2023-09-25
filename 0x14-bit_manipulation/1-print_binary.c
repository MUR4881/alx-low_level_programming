#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;

	if (n == 0)
		_putchar('0');
	x = 1;
	while (x <= n) /*getting length in bits*/
		x <<= 1;
	x >>= 1;
	while (x >= 1)
	{
		if (n & x)
			_putchar('1');
		else
			_putchar('0');
		x >>= 1;
	}
}
