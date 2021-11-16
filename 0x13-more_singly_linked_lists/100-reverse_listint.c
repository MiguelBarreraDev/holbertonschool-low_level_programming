#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: double pointer pointing to pointer to struct
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *save;

	if ((*head)->next == NULL)
		return (*head);

	save = *head;
	*head = (*head)->next;
	first = reverse_listint(head);

	first->next = save;
	save->next = NULL;

	return (save);
}
