#include "lists.h"

/**
 * print_dlistint - prints the number of elements in a node
 * @h: the head pointer
 * Return: the number of node is returned
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
