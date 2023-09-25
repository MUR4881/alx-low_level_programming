#include <stdarg.h>
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
 * np - prints number
 * @n: the number to be printed
 */
void np(int n)
{
	if(n < 10)
	{
		_putchar(n + '0');
		return;
	}
	np(n / 10);
	_putchar((n % 10) + '0');
}

/** 
 * sp - prints given string to stdout
 * @s: the given string
 */
void sp(const char *s)
{
	if(s == NULL || !s[0])
		return;
	_putchar(s[0]);
	sp(s + 1);
}

/**
 * print_numbers - prints the given numbers
 * @separator: pointer to a character to be printed between each number
 * @n: the number of integer(numbers) to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	int j;
	
	va_start(v, n);
	for (i = 0; i <  n; i++)
	{
		j = va_arg(v, int);
		if (j < 0)
		{
			_putchar('-');
			j = -j;
		}
		np(j);
		if (!(i == n - 1))
			sp(separator);
	}
	va_end(v);
	sp("\n");
}
