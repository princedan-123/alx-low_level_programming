#include "lists.h"

/**
 * sum_listint -sums up all the data in the nodes of a list
 * @head: the head of the node
 * Return: the sum is returned
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;

	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
