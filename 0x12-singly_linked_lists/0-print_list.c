#include "lists.h"

/**
 * print_list - print linked list elements
 * @h: head
 *
 * Return: number of elements
 **/
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[%d] %s\n", h->len, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);

	if (!h->next)
		return (1);

	return (1 + print_list(h->next));
}
