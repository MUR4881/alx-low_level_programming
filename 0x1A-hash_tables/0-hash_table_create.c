#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table
 * @size: the size of the hash table
 * That would be the number of linked list
 * since we would be using a Chaining collision hadling
 *
 * Return: a pointer to the hash_table, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (ht);

	ht->array = malloc(sizeof(hash_node_t) * (size + 1));
	ht->size = size;

	/*initializing the whole content of the table to null*/
	for (i = 0; i < size && ht->array != NULL; i++)
		ht->array[i] = NULL;

	/*for loop is not initiated, if malloc fails*/
	return (ht);
}
