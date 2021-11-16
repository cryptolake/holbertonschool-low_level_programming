#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: index of node
 *
 * Return: node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		i++;
		head = head->next;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
