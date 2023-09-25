#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog using dog_t
 * @name: of  the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: A pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);
	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;
	return (dog_new);
}
