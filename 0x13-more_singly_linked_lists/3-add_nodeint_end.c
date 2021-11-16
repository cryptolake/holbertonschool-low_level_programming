#include "lists.h"


/**
 * add_nodeint_end - add node at tail
 * @head: head
 * @n: value
 * Return: new tail
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *l;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	l = *head;

	while (l->next != NULL)
		l = l->next;

	l->next = new;

	return (new);
}
