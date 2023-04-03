#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 * Return: nothing is returned
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;
	listint_t *next = NULL;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}

}
