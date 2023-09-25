#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: the head of the linked list
 * Return: the length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = h->next)
		i++;
	return (i);
}
