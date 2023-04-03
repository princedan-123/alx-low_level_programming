#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: the head of the list
 * Return: the number of nodes is returned
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
