#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to head pointer
 * Return: nothing is returned
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;/*a temporary pointer to head*/

	listint_t *next = NULL;/* a pointer to point to the next memory location*/

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
