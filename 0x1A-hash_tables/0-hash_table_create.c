#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table.
 * NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(table->array))
		return (NULL);

	return (table);
}
