#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverse list
 * @head:
 *
 * Return: head node
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	curr = *head;
	nxt = curr->next;
	*head = NULL;
	while (curr != NULL)
	{
		curr->next = *head;
		*head = curr;
		curr = nxt;
		if (nxt != NULL)
			nxt = nxt->next;
	}

	return (*head);
}
