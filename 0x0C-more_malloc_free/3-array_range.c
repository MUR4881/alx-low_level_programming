#include <stdlib.h>

/**
 * array_range - creates an array of integers sequence
 * @min: the first element of the array
 * @max: the last element of the array
 * Return: pointer to the array or NULL (signifying failure)
 */
int *array_range(int min, int max)
{
	int *p, index;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (index = 0; min <= max; index++, min++)
		p[index] = min;
	return (p);
}
