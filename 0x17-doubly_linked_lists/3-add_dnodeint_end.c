#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the list
 * @head: pointer to the head
 * @n : the data to be inputed to the new node
 * Return: address of the new element or null if unsucessful
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (new == NULL && tmp == NULL)
		return (NULL);
	tmp = *head;
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	if (new == NULL)
		return (NULL);
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
