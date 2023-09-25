#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory space appointed by malloc to dog_t type variable
 * @d: a pointer to dog_t pointer
 */
void free_dog(dog_t *d)
{
	free(d);
}
