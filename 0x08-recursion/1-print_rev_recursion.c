#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of a string using recursion
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (s[1])
		_print_rev_recursion(&s[1]);
	_putchar(*s);
}
