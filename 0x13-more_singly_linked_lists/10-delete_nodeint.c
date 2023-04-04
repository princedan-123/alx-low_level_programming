#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: a pointer to head pointer
 * @index: the index to be deleted
 * Return: 1 if successful and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	unsigned int len = 0;

	listint_t *previous, *current, *tmp;

	previous = *head;

	current = NULL;

	if (*head == NULL)
		return (0);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (index >= len)
		return (0);
	while (count <= (index - 1))
	{
		previous = previous->next;
		count++;
	}
	current = previous->next;
	previous->next = current->next;
	free(current);
	return (1);
}
