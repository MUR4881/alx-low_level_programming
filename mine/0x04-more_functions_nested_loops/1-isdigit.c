#include "main.h"

/**
 * _isdigit - check if given character is a digit
 * @c: the character to be inspected
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
