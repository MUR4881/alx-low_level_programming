#include <stdio.h>

/**
 * print_array - print "n" element of array "a"
 * @a: array name.
 * @n: number of element to printed from index 0.
 */
void print_array(int *a, int n)
{
	int o;
	
	n = n - 1;
	o = 0;
	for (;o <= n; o++)
	{
		printf("%d", a[o]);
		if (o != n)
			printf(", ");
	}
	putchar(10);
}
