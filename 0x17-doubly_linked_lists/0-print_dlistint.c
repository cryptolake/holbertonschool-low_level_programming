#include "lists.h"

/**
* print_dlistint - print elements of linked
* list
* @h: head
* Return: number of elements
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
