#include <stdarg.h>

/**
 * sum_them_all - sums the value of all the variable parameters
 * @n: the number of variable parameters
 * Return: 0 if n == 0, else sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list f;
	unsigned int i, total;

	va_start(f, n);
	for (i = total = 0; i < n; i++)
		total += va_arg(f, int);
	va_end(f);
	return (total);
}
