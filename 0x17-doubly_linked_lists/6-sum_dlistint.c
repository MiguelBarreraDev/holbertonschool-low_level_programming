#include "lists.h"
/**
 * sum_dlistint - Write a function that returns the
 * sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to double linked list
 *
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
