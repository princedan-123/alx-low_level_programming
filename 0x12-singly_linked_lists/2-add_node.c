#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginining of the list
 * @head: a pointer that points to the head
 * @str: the string to be duplicated into the new node
 * Return: the address of the new node is returned
 */

list_t *add_node(list_t **head, const char *str)
{
	/* create the new node*/

	list_t *new = malloc(sizeof(list_t));
	/*NULL check*/
	if (new == NULL)
		return (NULL);
	/*copy the string into the node and set length*/
	new->str = strdup(str);

	new->len = strlen(str);
	/*NULL Check*/
	if (new->str == NULL)
		return (NULL);
	/*insert node*/
	new->next = *head;
	*head = new;
	return (new);
}
