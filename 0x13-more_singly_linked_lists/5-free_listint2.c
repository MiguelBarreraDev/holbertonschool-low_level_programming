#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: double pointer pointing to a list structure
 */
void free_listint2(listint_t **head)
{
	if (!(*head))
		return;

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
