#include "lists.h"

/**
 * str_len - get the lenght of a given string
 * @s: the pointer to the string
 * Return: the length of the string
 */
int str_len(const char *s)
{
	int i;

	for (i = 0; s[i];)
		i++;
	return (i);
}
/**
 * add_node_end - adds node to the end of the linked list.
 * @head: pointer to head.
 * @str: string to be added with it length to another node
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *copy;

	if (*head)
		copy = *head;
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		new->len = str_len(str);
		new->next = NULL;
	}
	if (!(*head))
		*head = new;
	else
	{
		for (; (*head)->next;)
			*head = (*head)->next;
		(*head)->next = new;
		*head = copy;

	}
	return (new);
}
