#include "lists.h"
/**
 * dlistint_len - Write a function that returns the number 
 * of elements in a linked dlistint_t list
 * @h: pointer to double linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
