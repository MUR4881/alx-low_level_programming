#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t
 *linked list
 *
 * @head: the address of the first node
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	 int sum;

	for (sum = 0; head->next; head = head->next)
		sum += head->n;
	return (sum);
}
