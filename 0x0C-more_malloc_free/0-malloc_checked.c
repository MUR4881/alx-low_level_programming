#include "main.h"

/**
 * malloc_checked - will allocate memory using malloc
 * @b: memory size to be allocated
 *
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
