#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a particular index
 * @head: the head of the list
 * @index: the index of the list
 * Return: the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *node = NULL;

	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
		if (count == index)
		{
			node = tmp;
			break;
		}
	}
	return (node);
}
