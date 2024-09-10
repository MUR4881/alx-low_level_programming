#include "main.h"
#include <stdlib.h>
/**
 * _calloc - will allocate memory for an array.
 * @nmemb: number of the elements.
 * @size: the size of bytes.
 *
 * Return: pointer to allocated memory.
 * if nmemb or size is 0, will return NULL.
 * if malloc fails,to also return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *panda;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	panda = malloc(nmemb * size);

	if (panda == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		panda[i] = 0;

	return (panda);
}
