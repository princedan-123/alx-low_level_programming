#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at an index
 * @idx: the index where the node is to be added
 * @h: the pointer to the head of the list
 * @n: the data to be added to the inserted list
 * Return: NULL OR POINTER
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h, *node = NULL, *previous = NULL;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	while (tmp != NULL)
	{
		previous = *h;
		tmp = tmp->next;
		count++;
		if (count == idx)
		{
			if (previous != NULL)
			{
				new->n = n;
				new->prev = previous;
				previous->next = new;
				new->next = tmp;
				tmp->prev = new;
			}
		}
		return (new);
	}
	return (NULL);
}
