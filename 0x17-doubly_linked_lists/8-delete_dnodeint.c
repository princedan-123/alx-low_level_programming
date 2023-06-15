#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes a node at a given index
 * @head: a pointer to the head pointer
 * @index: the given index
 * Return: 1 to indicate success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous = NULL, *tmp = *head, *tmp2 = NULL;
	unsigned int count = 0;

	if (index == 0)
	{
		free(*head);
		return (-1);
	}
	while (*head != NULL)
	{
		previous = tmp;
		tmp = tmp->next;
		count++;
		if (count == index)
		{
			previous->next = tmp->next;
			tmp2 = tmp->next;
			if (tmp2 != NULL)
				tmp2->prev = previous;
			free(tmp);
				return (1);
		}
	}
	return (-1);
}
