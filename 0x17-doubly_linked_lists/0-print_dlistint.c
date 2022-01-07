#include "lists.h"
/**
 * betty comentarys
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	dprintf(1, "%d\n", h->n);
	return (1 + print_dlistint(h->next));
}
