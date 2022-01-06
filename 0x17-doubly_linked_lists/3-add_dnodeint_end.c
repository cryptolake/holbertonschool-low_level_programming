#include "lists.h"
/**
* add_dnodeint_end - added node to end of list
* @head: head of list
* @n: number in the new end
* Return: new node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);

	}
	p = *head;
	while (p->next)
		p = p->next;

	p->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = p;

	return (new);
}
