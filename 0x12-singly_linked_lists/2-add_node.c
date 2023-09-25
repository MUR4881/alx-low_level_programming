#include <string.h>
#include "lists.h"

/**
 * str_len - get the len of the given string
 * @s: the pointer to the string or the string
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
 * add_node - adds a new node at the begining of a linked list
 * @head: a pointer to the head of the linked list
 * @str: the string to be duplicated and stored in the the new node
 * along with it length
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;

	copy = *head;
	*head = malloc(sizeof(list_t));
	if (*head != NULL)
	{
		(*head)->str = strdup(str);
		(*head)->len = str_len(str);
		(*head)->next = copy;
	}
	return (*head);
}
