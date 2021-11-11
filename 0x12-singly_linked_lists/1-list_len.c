#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: variable of type pointer to struct list_t
 *
 * Return: number of nodos of the linked lists
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
