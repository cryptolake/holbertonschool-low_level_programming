#include "hash_tables.h"

/**
* key_index - use this hash function for all the next tasks
* @key: key to retrieve index
* @size: size of table
*
* Return: index in table
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key), index;

	index = hash % size;

	return (index);
}
