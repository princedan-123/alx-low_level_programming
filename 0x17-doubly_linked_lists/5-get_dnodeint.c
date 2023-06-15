#include "lists.h"

/**
 * get_dnodeint_at_index -  gets the node at an index
 * @head: the lists's head
 * @index: position of each node starting from 0
 * Return: the node is at a given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (index == 0)
		return (tmp);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
		if (count == index)
			return (tmp);
	}
	return (NULL);
}
