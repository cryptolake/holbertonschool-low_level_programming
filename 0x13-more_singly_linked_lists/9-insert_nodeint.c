#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert at index
 * @idx: index
 * @n: data
 * @head: head
 *
 * Return: new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nxt, *new, *bfr;
	unsigned int i = 0;

	if (!*head && idx >= 1)
		return (NULL);
	else if (!*head && idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		new->n = n;
		new->next = NULL;
		*head = new;

		return (new);
	}
	else
	{
		bfr = *head;
		nxt = *head;

		while (i < idx && nxt)
		{
			nxt = nxt->next;
			i++;
		}
		if (!nxt && i < idx)
			return (NULL);

		while (bfr->next != nxt)
			bfr = bfr->next;
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = nxt;
		bfr->next = new;
		return (new);
	}
}
