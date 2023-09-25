#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *I wish to further simplify this code, but due to time i can't for now!
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = next = NULL;
	if (head && *head && (*head)->next)
	{
		prev = *head;
		*head = (*head)->next;
		next = (*head)->next;
		(*head)->next = prev;
		prev->next = NULL;
		while (next)
		{
			prev = *head;
			*head = next;
			next = (*head)->next;
			(*head)->next = prev;
		}
	}

	return (*head);
}
