#include "lists.h"

/**
 * sum_dlistint - sums the integer data in a list
 * @head: the head of the list
 * Return: 0 if list is empty or the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (tmp == NULL)
		return (sum);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
