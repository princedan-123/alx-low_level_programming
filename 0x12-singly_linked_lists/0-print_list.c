#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a node
 * @h: the head of the node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		
			printf("[0] (nil)\n");
		if (h->str != NULL)
			printf("[%u]%s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
