#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: an address to the Hash table
 * @key: To be hashed to get the table index.
 *
 * Return: Return the address of the value on the table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *htn;
	unsigned long int index;

	htn = NULL;
	/*Checking the input values*/
	if (ht == NULL || *key == '\0')
		return (NULL);
	/*Estimate the index*/
	index = key_index((unsigned const char *)key, ht->size);
	htn = (ht->array)[index];/*making a copy of head, for looping purpose*/

	/*looping through, chained colling scenerios with comparisms*/
	while (htn != NULL)
	{
		/*Found the key on the table index (chained linked list)?*/
		if (strcmp(htn->key, key) == 0)
			return (htn->value);
		htn = htn->next;/*Continue looping through linked list*/
	}
	return (NULL);
}
