#include "lists.h"

/**
 * free_list - frees malloc'ed linked list
 * @head: head of the link list
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->next)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
