#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node at the
 * end of a listint_t list
 *
 * @n: member for the new node
 * @head: double pointer pointing to a structure pointer
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux, *tail = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (tail != NULL)
	{
		while (tail)
		{
			aux = tail;
			tail = tail->next;
		}
		aux->next = new;
	}
	else
		(*head) = new;

	return (new);
}
