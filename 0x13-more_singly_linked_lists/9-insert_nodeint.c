#include "lists.h"
/**
 * insert_nodeint_at_index - function that prints all the
 * elements of a listint_t list
 *
 * @head: double pointer pointing a pointer
 * to listint_t structure
 * @idx: is the index of the list where the new node should be added
 * @n: structure member
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (!head || !(*head))
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}
	if (idx == 1)
	{
		if (!((*head)->next))
			return (NULL);
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = (*head)->next;
		(*head)->next = new;

		return (new);
	}

	return (insert_nodeint_at_index(&((*head)->next), idx - 1, n));
}
