#include "main.h"

/**
 * print_diagonal - print diagonal to terminal , using specified magnitude where a magnitude is a slash.
 * @n: magnitude (the number of underscore)
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('\');
			n--;
		}
	}
	_putchar(10);
}
