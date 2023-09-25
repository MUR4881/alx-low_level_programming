#include "lists.h"

/**
 * free_listint - frees a  listint_t list
 * @head: head of the list/ pointer to the list first element
 */
void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	free(head);
}
