#include "main.h"
/**
 * _print_rev_recursion - print to stdout a given string using recursion
 * @s: the given string
 */
void _print_rev_recursion(char *s)
{
	int l;

	l = length(s);
	if (l > 0)
	{
		_putchar(s[l]);
		_print_rev_recursion(&(s[l - 1]));
	}
	else if (l == 0)
		_putchar(s[l]);
	_putchar(10);
}

/**
 * length - gets the length of a given string
 * @s: the given string
 * Return: the length of the string
 */

int length(char *s)
{
	int len;
	
	len = 0;
	if (*s)
		len++;
	else
		return (0);
/*	{
		return (len);
	}*/	
	return (len + length(&(s[1])));
}
