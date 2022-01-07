#include "lists.h"
/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: double pointer to double linked list
 * @n: member for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	if (*head)
		(*head)->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	*head = new_node;

	return (new_node);
}
