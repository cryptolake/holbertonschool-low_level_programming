#include "hash_tables.h"

/**
* hash_table_print - print a hash table.
* @ht: hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t **table, *node;
	int first = 1;

	if (ht != NULL)
	{
		table = ht->array;
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = table[i];
			if (node)
			{
				if (!first)
					printf(", ");
				first = 0;
				printf("'%s': '%s'", node->key, node->value);
				while (node->next)
				{
					node = node->next;
					printf(", ");
					printf("'%s': '%s'", node->key, node->value);
				}
			}
		}
		printf("}\n");
	}
}
