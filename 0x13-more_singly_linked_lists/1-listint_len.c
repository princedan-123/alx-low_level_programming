#include "lists.h"

/**
 * listint_len - calculates the lenght of a linked list
 * @h: the head of the node
 * Return: the number of noded is returned
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0; /* count variable to hold the number of nodes*/

	while (h != NULL) /*transversing the list*/
	{
		h = h->next;

		count += 1;
	}
	return (count);
}
