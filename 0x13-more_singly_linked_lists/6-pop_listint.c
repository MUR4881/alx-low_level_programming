#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node;
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	copy = *head;
	*head = (*head)->next;
	free(copy);
	return (n);
}
