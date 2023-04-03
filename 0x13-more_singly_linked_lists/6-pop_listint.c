#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: a pointer to the head node
 * Return: the datat of the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	*head = tmp->next;
	return (tmp->n);
	free(tmp);
}
