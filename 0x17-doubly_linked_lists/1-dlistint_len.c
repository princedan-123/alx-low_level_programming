#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in the list
 * @h: the head node
 * Return: the number of nodes is returned
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
