#include "main.h"

/**
 * print_numbers - prints single digits
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a = 2 || a = 4)
			continue;
		else
			_putchar(a + '0');
	}
	_putchar('\n');
}
