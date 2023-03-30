#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the memories of previously created nodes
 * @head: the head of the node
 * Return: nothing is returned
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)/*tranverse the list*/
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
