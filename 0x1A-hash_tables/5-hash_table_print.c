#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table
 * @ht: Is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **table = NULL, *head = NULL;
	unsigned long int index = 0;
	int flag = 0;

	if (!ht)
		return;

	table = ht->array;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		head = table[index];
		if (head)
		{
			if (flag == 1)
				printf(", ");
			print_list(head);
			flag = 1;
		}
	}
	printf("}\n");
}
/**
 * print_list - Print linked list
 * @head: pointing to linked list
 */
void print_list(hash_node_t *head)
{
	if (!head)
		return;
	printf("'%s': '%s'", head->key, head->value);
	if (head->next)
		printf(", ");
	print_list(head->next);
}
