#include "lists.h"

/**
 * add_nodeint - inserts a node at the beginning
 * @n: data to be added to new nodes
 * @head: a pointer to the head pointer
 * Return: the address of the new node is returned
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
