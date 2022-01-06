#include "lists.h"
/**
* get_dnodeint_at_index - get node at index
* @head: head on list
* @index: of node
* Return: node
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p = head;
	
	if (!p)
		return (NULL);

	for (i = 0; i < index; i++)
		p = p->next;
	
	return (p);
}
