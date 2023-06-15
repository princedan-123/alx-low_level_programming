#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: the head of the list
 * Return: nothing is returned
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
