#include "lists.h"

/**
 * list_len - length of linked list
 * @h: head
 *
 * Return: length
 **/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
