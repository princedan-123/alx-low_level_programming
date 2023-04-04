#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: a pointer to head node
 * @idx: index of the list where the node is to be inserted
 * @n: the data to be added to the node
 * Return: NULL if the insertion fails or a pointer if successful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;/*to count the number of nodes*/

	listint_t *tmp = *head;/* a temporary pointer to transverse the list*/

	listint_t *new_node = malloc(sizeof(listint_t));/*create a newnode*/

	new_node->n = n;/*added data to the new node*/

	if (new_node == NULL)/*NULL Check*/
		return (NULL);
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp != NULL && (count + 1 != idx))
	{
		tmp = tmp->next;
		count++;
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);

}
