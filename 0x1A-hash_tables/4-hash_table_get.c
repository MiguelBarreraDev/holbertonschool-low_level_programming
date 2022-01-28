#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The jey you are looking for
 *
 * Return: Value associated with the element. Null if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t **head = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	head = &(ht->array[index]);
	/*printf("%lu {%s, %s}\n", index, head->key, head->value);*/

	return (get_node(head, key));
}
/**
 * get_node - Get value associated tio the key in the has table
 * @head: Pointing to head into of the index in the hash table
 * @key: Key of the linked list in the hash table
 *
 * Return: value (char *). NULL if couldn't find key in the ahsh table
 */
char *get_node(hash_node_t **head, const char *key)
{
	hash_node_t *tail = *head;

	if (!head)
		return (NULL);

	if (!(tail))
		return (NULL);

	if (strcmp(tail->key, key) == 0)
		return (tail->value);

	return (get_node(&(tail->next), key));
}
