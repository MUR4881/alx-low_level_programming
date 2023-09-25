#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the the beginning
 *of a listint_t list.
 * @head: a pointer to the head of the the listint_t list
 * @n: a new integer to be placed in a new lintint_t list
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
