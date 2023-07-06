#include "hash_tables.h"

/**
 *  key_index - returns the index after hashing the key
 *  @key:  the key to be hashed
 *  @size: the size of the array in the hash table
 *  Return: an integer representing the index of the item 
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0, index = 0;

	result = hash_djb2(key); /*function with hash algorithm*/
	index = result % size;
	return (index);
}
