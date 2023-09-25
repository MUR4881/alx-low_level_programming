#include "dog.h"
#include <stdio.h>

/**
 * print - prints a given string
 * @q: the string identifier
 * @m: the string to be printed
 */
void print(char *q, char *m)
{
	if (m == NULL)
		m = "(nil)";
	printf("%s: %s\n", q, m);
}

/**
 * print_dog - prints a struct dog
 * @d: a pointer to a struct dog define in header "dog.h"
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	print("Name", d->name);
	printf("Age: %.6f\n", d->age);
	print("Owner", d->owner);
}
