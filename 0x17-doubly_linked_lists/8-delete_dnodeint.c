#include "lists.h"
/**
* delete_dnodeint_at_index - delete node at index
* @head: head of list
* @index: index of node to delete
* Return: 1 Success, -1 Success
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p, *temp;

	if (!head || !*head)
		return (-1);
	p = *head;

	while (i != index && p)
	{
		p = p->next;
		i++;
	}

	if (i != index)
		return (-1);

	temp = p->next;
	if (i != 0)
		p->prev->next = temp;
	if (temp)
		temp->prev = p->prev;

	free(p);
	if (i == 0)
		*head = temp;

	return (1);
}
