#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list
 * @head: pointer to double linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
