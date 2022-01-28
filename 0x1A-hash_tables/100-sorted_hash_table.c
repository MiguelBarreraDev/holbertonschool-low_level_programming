#include "hash_tables.h"
/**
 * shash_table_create - function that creates a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table.
 * NULL if something went wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}
/**
 * shash_table_set - Adds an element to the hash table
 * @ht: Is the hash table
 * @key: Can not be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded. 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL, **head = NULL;

	if (!ht || !value || !key)
		return (0);
	/*====Get head  of the linked list====*/
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/* @head: pointer to linked list of the index in the hash table */
	head = &(ht->array[index]);
	/*====================================*/

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->key = strdup((char *)key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup((char *)value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	set_node(head, &node);
	node->snext = NULL;
	node->sprev = NULL;
	sort_check(ht, node);
	return (1);
}
/**
 * set_node - set_node
 * @head: pointing to hash_node in the hash table
 * @node: node to add in the index of the hash table
 */
void set_node(shash_node_t **head, shash_node_t **node)
{
	shash_node_t *tail = *head;

	if (!head)
	{
		free((*node)->key);
		free((*node)->value);
		free(*node);
		return;
	}
	if (*head)
	{
		while (tail)
		{
			if (strcmp(tail->key, (*node)->key) == 0)
			{
				free(tail->value);
				tail->value = strdup((*node)->value);
				free((*node)->value);
				free((*node)->key);
				free(*node);
				return;
			}
			tail = tail->next;
		}
	}

	(*node)->next = *head;
	*head = *node;
}
/**
 * sort_check - Adds an element to the hash table
 * @ht: Is the hash table you want to add or update the key/value to
 * @node: node to vincule
 *
 * Return: Nothing
 */
void sort_check(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current = NULL, *tmp = NULL;

	if (!(ht->shead) || strcmp(node->key, ht->shead->key) <= 0)
	{
		node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = node;
		if (!(ht->stail))
			ht->stail = node;
		ht->shead = node;
		return;
	}

	current = ht->shead;
	tmp = ht->shead->snext;
	while ((tmp) && strcmp(node->key, tmp->key) > 0)
	{
		current = current->snext;
		tmp = tmp->snext;
	}
	current->snext = node;
	node->snext = tmp;
	node->sprev = current;
	if (tmp)
		tmp->sprev = node;
	else
		ht->stail = node;
}
/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The jey you are looking for
 *
 * Return: Value associated with the element. Null if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t **head = NULL;

	if (!ht || !key || ht->array == NULL)
		return (NULL);
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
char *get_node(shash_node_t **head, const char *key)
{
	shash_node_t *tail = *head;

	if (!head)
		return (NULL);

	if (!(tail))
		return (NULL);

	if (strcmp(tail->key, key) == 0)
		return (tail->value);

	return (get_node(&(tail->next), key));
}
/**
 * shash_table_print - Function that prints a hash table
 * @ht: Is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	/*unsigned long int i = 0;*/
	shash_node_t *ptr = NULL;
	char flag = 0;

	if (ht == NULL || ht->array == NULL || ht->shead == NULL)
		return;

	ptr = ht->shead;
	printf("{");
	while (ptr)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		flag = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Function that prints rev a hash table
 * @ht: Is the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	/*unsigned long int i = 0;*/
	shash_node_t *ptr = NULL;
	char flag = 0;

	if (ht == NULL || ht->array == NULL || ht->stail == NULL)
		return;

	ptr = ht->stail;
	printf("{");
	while (ptr)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		flag = 1;
	}
	printf("}\n");
}
/**
 * print_list - Print linked list
 * @head: pointing to linked list
 */
void print_list(shash_node_t *head)
{
	if (!head)
		return;
	printf("'%s': '%s'", head->key, head->value);
	if (head->next)
		printf(", ");
	print_list(head->next);
}
/**
 * shash_table_delete - Function that deletes a hash table(memory free)
 * @ht: pointing to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **array = NULL;
	unsigned long int index = 0;

	if (!ht || ht->array == NULL)
		return;

	array = ht->array;
	for (index = 0; index < ht->size; index++)
	{
		if (array[index] != NULL)
		{
			free_linked_list(array[index]);
		}

	}
	free(ht->array);
	free(ht);
}
/**
 * free_linked_list - It is responsible for freeing the memory
 * space of a linked list
 * @head: Pointing to head of a linked list
 */
void free_linked_list(shash_node_t *head)
{
	if (!head)
		return;
	else if (head->next)
		free_linked_list(head->next);
	free(head->key);
	free(head->value);
	free(head);
}
