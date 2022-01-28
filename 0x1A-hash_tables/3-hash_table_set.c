#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Is the hash table
 * @key: Can not be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded. 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, **head = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	/* @head: pointer to linked list of the index in the hash table */
	head = &(ht->array[index]);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	set_node(head, &node);

	return (1);
}
/**
 * set_node - set_node
 * @head: pointing to hash_node in the hash table
 * @node: node to add in the index of the hash table
 */
void set_node(hash_node_t **head, hash_node_t **node)
{
	hash_node_t *tail = *head;

	if (!head)
	{
		free((*node)->value);
		free(node);
		return;
	}

	if (!(*head))
	{
		*head = *node;
		return;
	}
	if (tail->key == (*node)->key)
	{
		tail->value = (*node)->value;
		free(*node);
		return;
	}
	if (!(tail->next))
	{
		tail->next = *node;
		return;
	}

	set_node(&(tail->next), node);
}
