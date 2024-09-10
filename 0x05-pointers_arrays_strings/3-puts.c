#include "main.h"
/**
 * _puts - print the given string stdout
 * @str: the given string
 */
void _puts(char *str)
{
	int x;

	x = 0;
	for (; *(str + x) != '\0'; x++)
	{
		_putchar(*(str + x));
	}
	_putchar(10);
}
