#include "hash_tables.h"

/**
* node_set - set node of hash table
* @key: key
* @value: value
* Return: new node
**/
hash_node_t *node_set(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}

/**
* col_handle - handle collision with chaining.
* @node: linked list
* @key: key
* @value: key
**/
void col_handle(hash_node_t **node, const char *key, const char *value)
{
	hash_node_t *temp;

	if (!strcmp((*node)->key, key))
	{
		free((*node)->value);
		(*node)->value = strdup(value);
		return;
	}
	temp = *node;
	while (temp->next)
	{
		if (!strcmp(temp->next->key, key))
		{
			free(temp->next->value);
			temp->next->value = strdup(value);
			return;
		}

		temp = temp->next;
	}
	temp = *node;
	*node = node_set(key, value);
	(*node)->next = temp;
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
	hash_node_t **table;

	if (!ht)
		return (0);
	if (strlen(key) == 0 || strlen(value) == 0)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);
	table = ht->array;
	if (!table)
		return (0);

	/* collision */
	if (table[index])
	{
		col_handle(&table[index], key, value);
		if (!table[index])
			return (0);
		return (1);
	}

	table[index] = node_set(key, value);
	if (!table[index])
		return (0);

	return (1);
}
