#include "main.h"

/**
 * binary_to_uint - converts a binary number(quoted as string) to unsigned int
 * @b: pointer to the chars {string}
 * Return: the converted number, or 0 if,
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if ((*b == '0') | (*b == '1'))
		{
			num <<= 1;
			if (*b == '1')
				num |= 1;
		}
		else
			return (0);
		b++;
	}
	return (num);
}
