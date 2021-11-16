#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: pointer pointing to a list structure
 * @index: node position
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	if (!(head->next)
		return (NULL);
	return (get_nodeint_at_index(head->next, index - 1));
}
