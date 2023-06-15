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
	dlistint_t *tmp = *h;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	while (*h != NULL)
	{
		*h = (*h)->next;
		tmp = (*h)->next;
		count++;
		if (count == idx)
		{
			new->n = n;
			new->prev = (*h)->prev;
			new->next = *h;
			(*h)->prev = new;
			(*h)->next = tmp->next;
		}
		return (new);
	}
	return (NULL);
}
