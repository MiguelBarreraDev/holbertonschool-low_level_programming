/* Floyd’s Algorithm */
#include "lists.h"

listint_t *find_start_loop_v2(const listint_t *);
/**
 * free_listint_safe - function that frees a listint_t list
 *
 * @h: double pointer pointing to pointer to listint_t struct
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0, repeat = 0;
	listint_t *head, *start_loop, *before;

	head = *h;
	if (head == NULL)
		return (0);
	start_loop = find_start_loop_v2(head);
	while (head != NULL)
	{
		if (head == start_loop)
			repeat++;
		if (repeat > 1)
			break;
		count++;
		before = head;
		head = head->next;
		free(before);
	}
	*h = NULL;
	return (count);
}
/**
 * find_start_loop_v2 - function that finds the start of the loop
 * of the linked list
 *
 * @head: pointer to listint_t struct
 *
 * Return: node address where the loop starts
 */
listint_t *find_start_loop_v2(const listint_t *head)
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
