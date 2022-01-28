#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key
 * @key: Is the key
 * @size: Is the size of the array of the hash table
 *
 * Return: The index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	if (key == 0 || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
