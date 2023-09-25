#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/** 
 * sp - prints given string to stdout
 * @s: the given string
 */
void sp(const char *s)
{
	if (s == NULL)
	{
		sp("(nil)");
		return;
	}
	_putchar(s[0]);
	if (s[1])
		sp(s + 1);
}
void car(__va_list_tag *v)
{
	printf("%s\n", va_arg(*v, char *));
}

/**
 * print_strings - prints the given numbers
 * @separator: pointer to a character to be printed between each number
 * @n: the number of integer(numbers) to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	
	va_start(v, n);
	for (i = 0; i <  n; i++)
	{
		/*sp(va_arg(v, char *));*/
		car(v);
		if ((i <  n - 1) && (separator != NULL))
			sp(separator);
	}
	va_end(v);
	sp("\n");
}
