#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	 int sum, sum2;

	 j = size - 1;
	 i = sum = sum2 = 0;
	for (; i < (size * size); i += size + 1, j += size - 1)
	{
		sum += a[i];
		sum2 += a[j];
	}
	printf("%d, ", sum);
	printf("%d\n", sum2);
}
