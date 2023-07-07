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

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	if ((key == NULL) || (strlen(key) == 0) || (ht == NULL))
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->value);
		free(item);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->size >= index)
	{
		free(item);
		return (0);
	}
	current = ht->array[index];
	if (current == NULL)
		ht->array[index] = item;
	return (1);
}
