#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	char *k;
	va_list theStrings;

	if (separator == NULL)
		separator = "";
	va_start(theStrings, n);

	for (d = 0; d < n; d++)
	{
		k = va_arg(theStrings, char *);

		if (k == NULL)
			k = "(nil)";

		printf("%s", k);

		if (d < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(theStrings);
}
