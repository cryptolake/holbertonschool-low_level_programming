#include "lists.h"
/**
* insert_dnodeint_at_index - insert node at index
* @h: head of list
* @idx: of the new node
* @n: data on node
* Return: node
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *p,  *new;

	if (!h)
		return (NULL);
	p = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (i != idx && p)
	{
		p = p->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	if (!p)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = p;
	new->prev = p->prev;
	new->prev->next = new;
	p->prev = new;

	return (new);
}
