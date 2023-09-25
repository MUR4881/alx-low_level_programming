#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the given index of the
 *listint_t linked list.
 *
 * @head: pointer to the head of the of the listint_t linked list
 * @idx: the index at which the new node would be placed
 * @n: the data (n) to be stored at the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy, *copy2;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new && *head)
	{
		copy = *head;
		new->n = n;
		for (i = 0; copy; copy = copy->next, i++)
		{
			if (i == (idx - 1))
			{
				copy2 = copy->next;
				copy->next = new;
				new->next = copy2;
				return (new);
			}
		}
	}
	return (NULL);
}
