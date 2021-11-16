#include "lists.h"
/**
 * pop_listint -  function that deletes the head node
 * of a listint_t linked list
 *
 * @head: double pointer pointing to a list structure
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *save_node = *head;
	int save_value = (*head)->n;

	(*head) = (*head)->next;

	free(save_node);

	return (save_value);
}
