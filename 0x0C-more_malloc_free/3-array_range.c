#include "main.h"

/**
 * array_range - will creat an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *myarr, i = 0, d = min;

	if (min > max)
		return (0);
	myarr = malloc((max - min + 1) * sizeof(int));

	if (!myarr)
		return (0);
	while (i <= max - min)
		myarr[i++] = d++;
	return (myarr);
}
