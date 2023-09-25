#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete a  node at the given index of the
 *listint_t linked list.
 *
 * @head: pointer to the head of the of the listint_t linked list
 * @index: the index at which the node is to be deleted
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *prev, *copy;
	unsigned int i;

	copy = *head;
	if (index == 0 && copy->next)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}
	for (i = 0; copy->next && i < index - 1; copy = copy->next)
		i++;

	if (copy->next)
	{
		prev = copy->next;/*address to be deleted*/
		copy->next = prev->next;
		free(prev);
		return (1);
	}
	return (-1);
}
