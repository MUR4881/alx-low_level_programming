#include "main.h"

/**
 * print_number - print given integer to stdout
 * @n: the given integer
 */
void print_number(int n)
{
	int len, copy, len2;

	len2 = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 9)
	{
		copy = n;

		for (len = 1; copy > 9; copy /= 10, len *= 10)
		{
			if (copy % 10 == 0 && copy != 0 && copy / 10 <= 10)
				len2++;
		
		}
		
		_putchar(copy + '0');

		while(len2 > 0)
		{
			_putchar('0');
			len2--;
		}
		
		n =  n - (copy * len);
	}
	_putchar(n + '0');
}
	
