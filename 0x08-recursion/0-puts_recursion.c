#include "main.h"

/**
 * _puts_recursion - print string to stdout
 * @s: the identifier of the string to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1))
		_puts_recursion(&s[1]);
	else
		_putchar(10);
}
