#include "lists.h"
/**
 * listint_len - function that return the number of
 * elements in a linked list
 *
 * @h: structure listint_t type variable
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	count = 1 + listint_len(h->next);

	return (count);
}
