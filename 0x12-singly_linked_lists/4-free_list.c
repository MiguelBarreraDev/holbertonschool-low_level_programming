#include "lists.h"
/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to strcut list_t
 */
void free_list(list_t *head)
{
	list_t *tail = head, *aux;

	while (tail != NULL)
	{
		aux = tail;
		tail = tail->next;
		free(aux->str);
		free(aux);
	}
}
