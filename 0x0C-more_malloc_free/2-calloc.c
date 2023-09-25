#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: The number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	while (nmemb--)
		p[nmemb] = 0;

	return (p);
}
