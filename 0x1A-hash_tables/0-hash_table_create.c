#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table
 * @size: the size of the array in the table
 * Return: a pointer to the created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	return (table);
}
