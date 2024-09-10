#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_all - function that prints anything.
  *@format: the list of arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int d;
	va_list myargs;
	char *s, *separator;

	va_start(myargs, format);

	separator = "";

	d = 0;
	while (format && format[d])
	{
		switch (format[d])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(myargs, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(myargs, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(myargs, double));
				break;
			case 's':
				s = va_arg(myargs, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				d++;
				continue;
		}
		separator = ", ";
		d++;
	}

	printf("\n");
	va_end(myargs);
}
