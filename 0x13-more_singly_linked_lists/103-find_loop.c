/* Floyd’s Algorithm */
#include "lists.h"
/**
 * find_listint_loop - function that finds the start of the loop
 * of the linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: node address where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_t = (void *)head, *ptr_h = (void *)head;

	while (ptr_h->next != NULL && ptr_h->next->next != NULL)
	{
		ptr_t = ptr_t->next;
		ptr_h = ptr_h->next->next;

		if (ptr_h == ptr_t)
		{
			ptr_t = (void *)head;
			while (ptr_t != ptr_h)
			{
				ptr_t = ptr_t->next;
				ptr_h = ptr_h->next;
			}
			return (ptr_h);
		}
	}
	return (NULL);
}
