#include "lists.h"
/**
 * add_dnodeint_end - Write a function that adds a new
 * node at the end of a dlistint_t list
 * @head: double pointer to double linked list
 * @n: member for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		tmp = *head;
		while(tmp->next)
			tmp = tmp->next;
		new_node->prev = tmp;
		new_node->next = NULL;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
