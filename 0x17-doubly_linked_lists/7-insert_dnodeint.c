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
	dlistint_t *p, *temp, *new;

	if (!h)
		return (NULL);

	p = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (p)
	{
		if (i == idx)
			break;
		p = p->next;
		i++;
	}
	if (i <= idx && !p)
		return (NULL);

	if (!p->next)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	temp = p->prev;
	new->next = p;
	new->prev = p->prev;
	new->n = n;
	p->prev = new;
	temp->next = new;

	return (new);
}
