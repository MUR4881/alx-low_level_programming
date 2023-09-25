#include "variadic_functions.h"
#include <stdio.h>

/**
 * pc - prints char
 * @v: pointer to character to be printed
 */
void pc(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * pi - prints integer
 * @v: pointer to the integer to be printed
 */
void pi(va_list v)
{
	printf("%i", va_arg(v, int));
}

/**
 * pf - prints float
 * @v: the pointer to the float to be printed
 */
void pf(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 * ps - prints string
 * @v: the pointer to the string
 */
void ps(va_list v)
{
	char *s = va_arg(v, char *);

	s == NULL? s = "(nil)":0;
	printf("%s", s);
}

/**
 * print_all - a funtion that prints anything.
 * @format: what needs to be printed
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list v;

	ops array[] = {{"c", pc}, {"i", pi}, {"f", pf}, {"s", ps}, {NULL, NULL}};
	va_start(v, format);
	
	i = 0;
	while((format[i]))
	{
		j = 0;
		while((array[j].format != NULL))
		{
			if(format[i] == array[j].format[0])
			{
				array[j].b(v);
				if(format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
