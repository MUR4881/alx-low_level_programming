#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of listint_t list
 * @n: the data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *copy;


	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->next = NULL;
		new->n = n;
	}
	if (*head)
	{
		copy = *head;
		while (copy->next)
			copy = copy->next;
		copy->next = new;
	}
	else
		*head = new;
	return (new);

}
