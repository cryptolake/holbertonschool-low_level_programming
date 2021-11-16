#include "lists.h"

/**
 * listint_len - get length of linked list
 * @h:head
 * Return: length
 *
 *
 **/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
