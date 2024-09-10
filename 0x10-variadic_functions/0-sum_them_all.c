#include <stdarg.h>

/**
 * sum_them_all - Function returns sum of all parameters
 * @n: no of arguments summed
 *
 * Return: sum/zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int d = 0, k;
	va_list arglist;

	if (n == 0)
	{
		return (0);
	}
	va_start(arglist, n);
	for (k = 0; k < n; k++)
	{
		d += va_arg(arglist, int);
	}
	va_end(arglist);

	return (d);
}

