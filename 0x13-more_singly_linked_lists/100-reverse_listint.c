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
	listint_t *save, *tail;

	if ((*head)->next == NULL)
		return (*head);
	save = *head;
	*head = reverse_listint(&((*head)->next));
	tail = *head;

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = save;
	save->next = NULL;
	return (*head);
}
