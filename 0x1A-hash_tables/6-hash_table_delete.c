#include "hash_tables.h"

/**
* free_node - free hash table nodes of index
* @node: node
*
**/
void free_nodes(hash_node_t *node)
{
	hash_node_t *temp;

	if (node)
	{
		while (node)
		{
			temp = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = temp;
		}
	}
}

/**
* hash_table_delete - delete hash table
* @ht: the hash table
*
**/
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t **table;

	if (ht)
	{
		table = ht->array;
		for (i = 0; i < ht->size; i++)
			free_nodes(table[i]);
		free(table);
		free(ht);
	}
}
