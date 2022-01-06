#include "lists.h"

/**
* dlistint_len - number of elements
* in linked list
* @h: head
* Return: number of elements
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nele = 0;

	while (h)
	{
		nele++;
		h = h->next;
	}

	return (nele);
}
