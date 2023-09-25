#include "main.h"

/**
 * print_line - print line to terminal , using specified magnitude
 * where a magnitude is an underscore.
 * @n: magnitude (the number of underscore)
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar(10);
}
