#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of a list
 * @head:  a pointer that points to the head of the list
 * @n: the data part of each node
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));/* create the new node*/

	listint_t *tmp = *head;

	if (new_node == NULL) /*NULL CHECK*/
		return (NULL);
	new_node->n = n;/*intialize the node*/

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);

}
