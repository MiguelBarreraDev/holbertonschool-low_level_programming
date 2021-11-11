#include "lists.h"
/**
 * add_node_end - function that adds a new node at
 * the beginning of a list_t list
 *
 * @head: pointer that point to  pointer to struct list_t
 * @str: string for add to the  stru the ct
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = *head, *aux;

	/* - --- - creando nuevo nodo- ----- */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	/*-  - -- -- - - -- - - - - - -- - -*/
	while (tail != NULL)
	{
		aux = tail;
		tail = tail->next;
	}

	if (tail == *head)
		*head = new;
	else
		aux->next = new;

	return (new);
}
