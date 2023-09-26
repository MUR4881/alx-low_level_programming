#include "main.h"

/**
 * print_number - print given number to stdout.
 * @n: the number to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n >= 10)
	{
		while (n >= 10)
		{
			int power, shit, fit;

			power = 0;
			shit = n;
			for (;shit >= 10;)
			{
				shit = shit / 10;
				power++;
			}
				fit = power;
				for (;fit > 0;fit--)
					shit *= 10;
			_putchar(shit + '0');
			n = -1 * (n - shit);
			if (n == 0)
			{
				for (;power > 0;power--)
					_putchar(0 + '0');
			}
		}
	}
	else
		_putchar(n + '0');
}
