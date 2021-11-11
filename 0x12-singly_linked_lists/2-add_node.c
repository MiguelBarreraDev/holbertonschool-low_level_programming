#include "lists.h"
/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list
 *
 * @head: pointer that point to  pointer to struct list_t
 * @str: string for add to the  stru the ct
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (*head);
}
