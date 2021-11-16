#include "lists.h"

/**
 * pop_listint - pop node
 * @head: head
 * Return: value of popped node
 **/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *l;

	if (!*head)
		return (0);

	l = *head;
	n = l->n;
	*head = l->next;
	free(l);

	return (n);
}
