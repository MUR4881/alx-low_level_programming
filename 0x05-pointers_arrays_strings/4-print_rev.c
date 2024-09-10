#include "main.h"

/**
 * print_rev - print given string in reverse
 * @s: the given string
 */
void print_rev(char *s)
{
	int x;
	
	for (x = 0; *(s + x) != '\0'; x++)
	{}
	x--;
	for (; x >= 0; x--)
	{
		_putchar(*(s + x));
	}
	_putchar(10);
}

