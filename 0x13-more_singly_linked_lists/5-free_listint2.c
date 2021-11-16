#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 **/
void free_listint2(listint_t **head)
{
	listint_t *l;
	listint_t *k;

	if (*head != NULL)
	{
		l = *head;
		k = l;
		while (k)
		{
			k = l->next;
			free(l);
			l = k;
		}
		*head = NULL;
	}
}
