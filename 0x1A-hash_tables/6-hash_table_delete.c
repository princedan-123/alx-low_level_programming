#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL, *tmp = NULL;

	if (ht == NULL)
		exit(EXIT_SUCCESS);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = tmp;
			}
		}

	}
	free(ht->array);
	free(ht);
}
