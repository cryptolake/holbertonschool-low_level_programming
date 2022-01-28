#include "hash_tables.h"

/**
* node_set - set node of hash table
* @key: key
* @value: value
* Return: pointer to node
**/
hash_node_t *node_set(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}

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
	hash_node_t **table, *temp;

	if (!ht)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);
	table = ht->array;
	if (!table)
		return (0);

	/* collision */
	if (table[index])
	{
		if (!strcmp(key, table[index]->key))
		{
			free(table[index]->value);
			table[index]->value = strdup(value);
			return (1);
		}

		temp = table[index];
		while (temp->next)
			temp = temp->next;
		temp->next = node_set(key, value);
		if (!temp->next)
			return (0);

		return (1);
	}

	table[index] = node_set(key, value);
	if (!table[index])
		return (0);

	return (1);
}
