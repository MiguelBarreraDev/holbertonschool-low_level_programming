#include "lists.h"
/**
 * print_listint - function that prints all the
 * elements of a listint_t list
 *
 * @h: structure listint_t type variable
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	printf("%d\n", h->n);
	count = 1 + print_listint(h->next);

	return (count);
}
