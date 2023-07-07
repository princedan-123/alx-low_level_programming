#include "hash_tables.h"

/**
 * hash_table_set -  inserts data into hash table
 * @ht: the hash table to be set or updated
 * @key: the key of the data, it determineds the index
 * @value: the value or data associated with the key
 * Return: it returns the integr 1 to indicate success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL, *item = NULL;
	unsigned long int index = 0;

	if ((key == NULL) || (strlen(key) == 0) || (ht == NULL))
		return (0);
	if (value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item->key);
		free(item);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->value);
		free(item);
	}
	item->next = NULL;
	current = ht->array[index];
	if (current == NULL)
		ht->array[index] = item;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				free(current->value);
				free(current);
			}
			return (1);
		}
		current = current->next;
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
