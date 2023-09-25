#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the listint_t head
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
