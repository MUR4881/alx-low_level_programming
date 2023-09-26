#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: the character to be inspected
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
