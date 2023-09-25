#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: the given string.
 */
void puts_half(char *str)
{
	int len, copy;

	for (len = 0; str[len] != '\0'; len++);
	len = len / 2;
	copy = len;
	for (;len <= (copy * 2); len++)
		_putchar(str[len]);
	_putchar(10);
}

