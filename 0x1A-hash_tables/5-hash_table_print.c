#include "hash_tables.h"

/**
 * hash_table_print - prints the content of a hash table
 * @ht: the pointer to the hash table
 * Return: nothing is returned
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;

	unsigned long int i = 0;
	int comma = 0;
	int printed = 0;

	if (ht == NULL)
		exit(EXIT_SUCCESS);
	else
	{
		printf("{");
		while (i < ht->size)
		{
			if ((comma == 1) && (ht->array[i] != NULL))
				printf(", ");
			printed = 0;
			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", ht->array[i]->key,
				ht->array[i]->value);
				printed = 1;
				current = current->next;
			}
			if (printed == 1)
				comma = 1;
			i++;

		}
	}
		printf("}\n");
}
