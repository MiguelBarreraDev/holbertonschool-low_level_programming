#include "lists.h"
/**
 * sum_listint - sum all the data (n)
 * of a listint_t linked list
 *
 * @head: pointer pointing to a list structure
 *
 * Return: returns the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_listint(head->next));
}
