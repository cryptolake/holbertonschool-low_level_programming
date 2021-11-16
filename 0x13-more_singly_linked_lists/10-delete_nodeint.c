#include "lists.h"
#include <stdio.h>


/**
 * find_prev - find prev node of node p
 * @p: node
 * @head: head
 *
 * Return: prev node
 **/
listint_t *find_prev(listint_t *head, listint_t *p)
{
	listint_t *l = head;

	while (l->next != p)
		l = l->next;

	return (l);
}

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: index
 *
 * Return: (1) sucessful (-1) otherwise
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *l, *p, *n;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		n = *head;
		n = n->next;

		free(*head);
		*head = n;
		return (1);
	}

	l = *head;
	while (i < index && l)
	{
		l = l->next;
		i++;
	}
	if (!l)
		return (-1);

	n = l->next;
	p = find_prev(*head, l);
	free(l);
	p->next = n;

	return (1);
}
