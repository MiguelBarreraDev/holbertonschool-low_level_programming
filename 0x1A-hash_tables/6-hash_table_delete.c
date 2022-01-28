#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table(memory free)
 * @ht: pointing to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array = NULL;
	unsigned long int index = 0;

	if (!ht)
		return;

	array = ht->array;
	for (index = 0; index < ht->size; index++)
	{
		if (array[index] != NULL)
			free_linked_list(&array[index]);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_linked_list - It is responsible for freeing the memory
 * space of a linked list
 * @head: Pointing to head of a linked list
 */
void free_linked_list(hash_node_t **head)
{
	hash_node_t *tmp = *head;

	if (!tmp)
		return;

	free_linked_list(&(tmp->next));
	free(tmp);
}
