#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 *  list_len - calculates the number of nodes in a linked list
 *  @h: the head of the node
 *  Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
