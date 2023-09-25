#include "lists.h"

/**
 * get_nodeint_at_index - of listint_t linked list
 * @head: address of the first node
 * @index: the  index of the node being searched for
 * Return: the address of the index OR NULL if it doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head)
	{
		for (; head->next; head = head->next, i++)
		{
			if (i == index)
				return (head);
		}
	}
	return (NULL);
}
