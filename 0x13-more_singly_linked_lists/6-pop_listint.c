#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: a pointer to the head node
 * Return: the datat of the first node
 */

int pop_listint(listint_t **head)
{
	int data = 0;

	listint_t *tmp = *head;

	*head = tmp->next;
	data = tmp->n;
	free(tmp);
	return (data);
}
