#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to head pointer
 * Return: nothing is returned
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	listint_t *next = NULL;

	while (tmp != NULL)
	{
		next = tmp->next;

		*head = NULL;
		free(tmp);
		tmp = next;
	}
}
