#include "lists.h"

/**
 * print_listint - transverse through a linked list
 * @h: the list header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		printf("%i\n", h->n);
	return (i);
}
