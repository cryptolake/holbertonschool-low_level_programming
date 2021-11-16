#include "lists.h"

/**
 * sum_listint - sum of list
 * @head: head
 * Return: sum
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
