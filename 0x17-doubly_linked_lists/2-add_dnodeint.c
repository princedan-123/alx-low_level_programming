#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginining of th list
 * @head: a pointer to the head of the list
 * @n: data to be added to the new node
 * Return: the new node is returned
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (new);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
