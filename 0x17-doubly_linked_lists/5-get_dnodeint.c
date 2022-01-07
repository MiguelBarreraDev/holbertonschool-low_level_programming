#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that returns the
 * nth node of a dlistint_t linked list
 * @head: pointer to double linked list
 * @index: is the index of the node, starting from 0
 *
 * Return: the nth node, or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);
	if (head->next == NULL)
		return (NULL);
	return get_dnodeint_at_index(head->next, index - 1);
}
