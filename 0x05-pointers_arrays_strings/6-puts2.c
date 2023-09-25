#include "main.h"
/**
 * puts2 - print every other character of a given string.
 * @str: the address of the string.
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if ((index % 2) == 0)
			_putchar((str[index]));
	}
	_putchar(10);
}
