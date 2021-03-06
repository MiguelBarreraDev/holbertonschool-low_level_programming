#include "lists.h"
/**
 * print_dlistint - Write a function that prints all the
 * elements of a dlistint_t list
 * @h: pointer to double linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
