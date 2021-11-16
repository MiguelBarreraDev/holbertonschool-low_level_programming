#include "lists.h"
/**
 * add_nodeint -  function that adds a new node at the
 * beginning of a listint_t list
 *
 * @n: member for the new node
 * @head: double pointer pointing to a structure pointer
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
