#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table
* @key: key of element
* @value: value associated with key
* Return: 0 (failure), 1 (success)
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **table;
	hash_node_t *node, *temp;

	if (!ht)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);
	table = ht->array;
	if (!table)
		return (0);

	/* collision */
	if (table[index])
	{
		temp = table[index];
		while (temp->next)
			temp = temp->next;
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		temp->next = node;
		return (1);
	}

	table[index] = malloc(sizeof(hash_node_t));
	if (!table[index])
		return (0);
	table[index]->value = strdup(value);
	table[index]->key = strdup(key);
	table[index]->next = NULL;

	return (1);
}
