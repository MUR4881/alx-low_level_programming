#include "dog.h"
/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

