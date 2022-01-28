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
	unsigned long int index = 0;
	hash_node_t **array = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		array[index] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
