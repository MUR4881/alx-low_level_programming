#include <stdio.h>
/**
 * reverse_array - reverse an array of integers
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x, y, half;

	half = n / 2;
	y = 0;
	while (half--)
	{
		x = a[n - 1];
		a[n - 1] = a[y];
		a[y] = x;
		n--;
		y++;
	}
}
