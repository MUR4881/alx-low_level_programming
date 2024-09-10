#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - function will print numbers followed by new line
 * @separator: string being printed
 * @n: number of integers to be passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int d;
	va_list mynos;

	va_start(mynos, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(mynos, int));
		if (d < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(mynos);
}
