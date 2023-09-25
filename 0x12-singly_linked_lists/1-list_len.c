#include "lists.h"

/**
 * list_len - counts number of  elements in a linked list
 * @h: header of the linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *copy;

	copy = h;
	for (i = 0; copy; copy = copy->next)
		i++;
	return (i);
}
