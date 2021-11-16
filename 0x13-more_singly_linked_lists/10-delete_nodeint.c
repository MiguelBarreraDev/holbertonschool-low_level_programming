#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 *
 * @head: double pointer pointing a pointer
 * to listint_t structure
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *after, *new_after;

	if (!(*head))
		return (-1);
	current = *head;
	after = (*head)->next;
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	if (index == 1)
	{
		new_after = after->next;
		free(after);
		current->next = new_after;

		return ((!after) ? 1 : -1);
	}
	return (delete_nodeint_at_index(&((*head)->next), index - 1));
}
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
