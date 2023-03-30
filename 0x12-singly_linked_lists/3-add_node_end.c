#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a new node at the end of a list
 * @head:a pointer to the head of the list
 * @str: the string to be copied to the new node
 * Return: the address of the new node is returned
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (str == NULL)
		return (NULL);
	new->len = strlen(str);

	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
