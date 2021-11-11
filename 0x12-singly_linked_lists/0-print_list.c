#include "lists.h"
/**
 * print_list - function that prints all the
 * elements of a list_t list
 *
 * @h: variable of type pointer to struct list_t
 *
 * Return: number of nodos of the linked lists
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
