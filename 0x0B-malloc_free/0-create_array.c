#include <stdlib.h>

/**
 * recurse - uses recursion to fill an array with specific char
 * @size: the size of the array
 * @c: The character to fill it with
 * @p: A pointer to the memory location where chars should be filled with
 * Return: base pointer to the array
 */
void *recurse(unsigned int size, char c, char *p)
{
	if (size != 0)
		recurse(--size, c, p);
	p[size] = c;
	return (NULL);
}
/**
 * create_array - of variable size
 * @size: the size of array
 * @c: the char to fill the array with
 * Return: NULL if size = 0 or fails, or pointer to othe array
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	p = malloc((size + 1) * sizeof(char));
	if (p == NULL || size == 0)
		return (NULL);
	recurse(size, c, p);
	return (p);
}
