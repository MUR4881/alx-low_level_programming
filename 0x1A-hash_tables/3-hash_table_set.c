#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to a structure, that contains the hash table
 * the size of the hash table, and the count (no of set nodes)
 *
 * @key: The key, hashed to get the index for the value on the table
 *
 * @value: The value/datum to be stored on the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *htn, *phtn, *lphtn; /*previous hash table, loop phtn*/

	lphtn = phtn = htn = NULL; /*Innit*/

	if (ht == NULL)
		return (0);
	/*Allocating memory for the hash table node*/
	htn = malloc(sizeof(hash_node_t));

	if (htn == NULL)
		return (0);
	/*Initializing the table values*/
	htn->key = strdup(key);
	htn->value = strdup(value);
	/*Estimating index of the new node on the table*/
	index = key_index((const unsigned char *)key, ht->size);
	/*Copying the former content of the node, NULL, if empty*/
	lphtn = phtn = (ht->array)[index];
	/*Deciding, if to update or chain, keyword might not be similar at head*/
	/*But it can be similar else Where!*/
	while (lphtn != NULL)
	{
		if (strcmp((const char *)key, (lphtn->key)) == 0)
		{
			free(lphtn->value);/*freeing the alloc'd mem*/
			lphtn->value = htn->value;/*keeping value, update!*/
			free(htn->key);
			free(htn);/*freeing the new created node*/
			return (1);/*mission suceeded!*/
		}
		lphtn = lphtn->next;
	}
	/*Inserting into the node, regardless of collision or not*/
	/*The preceeding code, takes care of the collision*/
	(ht->array)[index] = htn;
	htn->next = phtn;

	/*mission successful*/
	return (1);
}
